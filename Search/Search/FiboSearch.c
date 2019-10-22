#include <stdio.h>

int fiboSearch(int a[], int key, int n) {
	int fibo[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 };
	int pos, index = 0, k = 0;

	while (fibo[k] < n) k++;
	while (k > 0) {
		pos = index + fibo[--k];
		if (pos >= n || key < a[pos]);
		else if (key > a[pos]) {
			index = pos;
			k--;
		}
		else return pos;
	}

	return -1;
}

int main() {
	int a[] = { 3, 7, 10, 16, 17, 18, 21, 33, 35, 48, 56, 72 };
	int n = sizeof(a) / sizeof(int);
	int index, key;
	
	printf("ã�� �� �Է� >> ");
	scanf_s("%d", &key);

	index = fiboSearch(a, key, n);

	if (index == -1)
		printf("ã���� �ϴ� �����Ͱ� �����ϴ�!\n");
	else
		printf("%d�� %d���� ã�ҽ��ϴ�.\n", key, index);
}