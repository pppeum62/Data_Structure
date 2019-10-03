#include <stdio.h>
#include <stdlib.h>

void Marge(int a[], int left, int mid, int right) {
	int *result = (int *)malloc(sizeof(int) * (right - left + 1));
	int i = left, j = mid + 1, k = 0;

	while (i <= mid && j <= right) {
		if (a[i] < a[j])
			result[k++] = a[i++];
		else
			result[k++] = a[j++];
	}

	if (i > mid)
		while (j <= right)
			result[k++] = a[j++];
	else
		while (i <= mid)
			result[k++] = a[i++];
	k = 0;
	for (i = left; i <= right; i++)
		a[i] = result[k++];

	free(result);
}

void Divide(int a[], int left, int right) {
	int mid;

	if (left < right) {
		mid = (left + right) / 2;
		Divide(a, left, mid);
		Divide(a, mid + 1, right);
		Marge(a, left, mid, right);
	}
}

int main() {
	int a[] = { 5, 33, 27, 12, 41, 25, 10, 56, 35, 18, 7 };
	int n = sizeof(a) / sizeof(int);

	printf("정렬 전 : ");

	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);

	printf("\n");

	Divide(a, 0, n - 1);

	printf("정렬 후 : ");
	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);

	printf("\n");
}