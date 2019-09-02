#include <stdio.h>

int main() {
	int a[] = { 10,5,7,12,9,16,1,3 };
	int n = sizeof(a) / sizeof(int);
	int min, index;

	for (int i = 0; i < n - 1; i++) {
		min = a[i];
		index = i;
		for (int j = i + 1; j < n; j++) {
			if (min > a[j]) {
				min = a[j];
				index = j;
			}
		}
		a[index] = a[i];
		a[i] = min;
	}

	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);
	printf("\n");
}