#include <stdio.h>
#include <limits.h>

void HeapSort(int a[], int n) {
	int parent, child, value;

	for (int i = n / 2; i >= 1; i--) {
		parent = i;
		value = a[i];
		while ((child = parent * 2) <= n) {
			if (child + 1 <= n && a[child] < a[child + 1])
				child++;
			if (value >= a[child])
				break;
			a[parent] = a[child];
			parent = child;
		}
		a[parent] = value;
	}

	while (n > 1) {
		value = a[n];
		a[n--] = a[1];
		parent = 1;
		while ((child = parent * 2) <= n) {
			if (child + 1 <= n && a[child] < a[child + 1])
				child++;
			if (value >= a[child])
				break;
			a[parent] = a[child];
			parent = child;
		}
		a[parent] = value;
	}
}

int main() {
	int a[] = { INT_MIN, 17, 8, 16, 3, 1, 6, 5, 13, 9, 6, 89, 32, 7 };
	int n = sizeof(a) / sizeof(int);

	printf("정렬 전 : ");
	for (int i = 1; i < n; i++) {
		printf("%5d", a[i]);
	}

	printf("\n");

	HeapSort(a, n - 1);

	printf("정렬 후 : ");
	for (int i = 1; i < n; i++) {
		printf("%5d", a[i]);
	}
	printf("\n");

	return 0;
}