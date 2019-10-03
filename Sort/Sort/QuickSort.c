#include <stdio.h>

void QuickSort(int a[], int left, int right) {
	int pivot = a[left], i = left, j = right, temp;

	if (left < right) {
		while (i < j) {
			while (i < right && a[i] <= pivot)
				i++;
			while (j > left && a[j] >= pivot)
				j--;
			if (i < j) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		a[left] = a[j];
		a[j] = pivot;

		QuickSort(a, left, j - 1);
		QuickSort(a, j + 1, right);
	}

}

int main(){
	int a[] = { 30, 24, 41, 9, 50, 45, 3, 21, 12, 57, 27, 38, 55, 28, 33 };
	int n = sizeof(a) / sizeof(int);

	printf("정렬 전");
	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);

	QuickSort(a, 0, n - 1);

	printf("\n정렬 후");
	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);

	printf("\n");

	return 0;
}