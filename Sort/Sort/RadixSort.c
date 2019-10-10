#include <stdio.h>
#include <stdlib.h>

void RadixSort(int a[], int n) {
	int *bucket = (int *)malloc(sizeof(int) * n);
	int digit_cnt[10] = { 0 }, digit_base = 1, i, max = a[0];

	for (i = 1; i < n; i++)
		if (max < a[i])
			max = a[i];
	while (digit_base <= max) {
		for (i = 0; i < n; i++)
			digit_cnt[a[i] / digit_base % 10]++;
		for (i = 1; i < 10; i++)
			digit_cnt[i] += digit_cnt[i - 1];
		for (i = n - 1; i >= 0; i--)
			bucket[--digit_cnt[a[i] / digit_base % 10]] = a[i];
		for (i = 0; i < n; i++)
			a[i] = bucket[i];
		for (i = 0; i < 10; i++)
			digit_cnt[i] = 0;

		digit_base *= 10;
	}

	free(bucket);
}

int main() {
	int a[] = { 10, 512, 3, 29, 318, 50, 7215, 1285, 99, 148, 9127, 404 };
	int n = sizeof(a) / sizeof(int);

	printf("기수 정렬 전 : ");
	for (int i = 0; i < n; i++)
		printf("%7d", a[i]);

	RadixSort(a, n);

	printf("\n기수 정렬 후 : ");
	for (int i = 0; i < n; i++)
		printf("%7d", a[i]);

	printf("\n");
}