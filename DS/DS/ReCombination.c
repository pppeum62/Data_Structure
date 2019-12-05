#include <stdio.h>
#define R 3

int b[R];

void Recom() {
	int i;

	for (i = 0; i < R; i++)
		printf("%5d", b[i]);
	printf("\n");
}

void Recombination(int a[], int r, int n, int ii) {
	int i;

	if (r == R) Recom();
	else for (i = ii; i < n; i++) {
		b[r] = a[i];
		Recombination(a, r + 1, n, i);
	}

}

int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(a) / sizeof(int);

	Recombination(a, 0, n, 0);

	return 0;
}