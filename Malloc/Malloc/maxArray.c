#include <stdio.h>
#define SIZE 100000000

int main() {
	//int a[SIZE] = { 10, };

	int *a = (int *)malloc(sizeof(int) * SIZE);
	a[0] = 10;
	a[99999999] = 9;

	printf("%d\n", a[0]);
	printf("%d\n", a[99999999]);

	return 0;
}