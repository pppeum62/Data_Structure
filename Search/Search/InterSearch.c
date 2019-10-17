#include <stdio.h>

int InterSearch(int a[], int key, int left, int right) {
	int index;

	while (left <= right) {
		if (a[left] == a[right]) index = left;
		else {
			index = left + (right - left) * (key - a[left]) / (a[right] - a[left]);
			if (index > right) index = right;
			if (index < left) index = left;
		}

		if (key == a[index]) return index;
		else if (key > a[index]) left = index + 1;
		else right = index - 1;
	}

	return -1;
}

int main() {
	int a[] = { 3, 7, 10, 12, 14, 18, 21, 33, 35, 48 };
	int n = sizeof(a) / sizeof(int);
	int index, key;

	printf("찾을 값 : ");
	scanf_s("%d", &key);
	index = InterSearch(a, key, 0, n - 1);

	if (index == -1)
		printf("찾고자 하는 값 없음!\n");
	else
		printf("%d를 %d에서 찾음!\n", key, index);

	return 0;
}