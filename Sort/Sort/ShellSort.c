#include <stdio.h>

void ShellSort(int a[], int n) {
	int i, j, d, key;
	for (d = n / 2; d >= 1; d /= 2) {
		for (i = d; i < n; i++) {
			key = a[i];
			for (j = i - d; j >= 0; j -= d) {
				if (key >= a[j])
					break;
				a[j + d] = a[j];
			}
			a[j + d] = key;
		}
	}
}

int main() {
	int a[] = { 17, 8, 20, 11, 5, 12, 15, 7 };
	int i, n = sizeof(a) / sizeof(int);

	printf("<< Shell Sort >>\n");

	printf("정렬 전 : ");
	for (i = 0; i < n; i++)
		printf("%5d", a[i]);
	ShellSort(a, n);
	printf("\n정렬 후 : ");
	for (i = 0; i < n; i++)
		printf("%5d", a[i]);
	printf("\n");

	return 0;
}