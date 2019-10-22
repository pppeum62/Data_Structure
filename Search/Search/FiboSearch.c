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
	
	printf("찾을 값 입력 >> ");
	scanf_s("%d", &key);

	index = fiboSearch(a, key, n);

	if (index == -1)
		printf("찾고자 하는 데이터가 없습니다!\n");
	else
		printf("%d를 %d에서 찾았습니다.\n", key, index);
}