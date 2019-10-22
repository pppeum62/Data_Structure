#include <stdio.h>

void QuickSort(int a[], int low, int high) {
	int i, j, key, temp;

	if (low < high) {
		i = low;
		j = high;
		key = a[low];

		while (i < j) {
			while (i < high && a[i] >= key) i++;
			while (j > low && a[j] <= key) j--;

			if (i < j) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

		a[low] = a[j];
		a[j] = key;

		QuickSort(a, low, j - 1);
		QuickSort(a, j + 1, high);
	}
}

int main() {
	int a[] = { 25, 17, 6, 48, 55, 33 ,101, 41, 20, 9, 98, 85 };
	int n = sizeof(a) / sizeof(int);

	QuickSort(a, 0, n - 1);

	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);

	printf("\n");

	return 0;
}