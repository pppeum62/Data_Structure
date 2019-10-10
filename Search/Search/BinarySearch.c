#include <stdio.h>

int BinarySearch(int a[], int key, int n) {
	int mid, left = 0, right = n - 1;

	while (left <= right) {
		mid = (left + right) / 2;
		if (key == a[mid])
			return mid;
		else if (key > a[mid])
			left = mid + 1;
		else right = mid - 1;
	}

	return -1;
}

int main() {
	int a[] = { 3, 7, 10, 16, 17, 18, 21, 33, 35, 48, 56, 72 };
	int n = sizeof(a) / sizeof(int);
	int key, index;

	printf("찾을 값 : ");
	scanf_s("%d", &key);

	index = BinarySearch(a, key, n);

	if (index == -1)
		printf("찾고자 하는 데이터가 없습니다!\n");
	else
		printf("%d를 %d에서 찾았습니다.\n", key, index);

	return 0;
}