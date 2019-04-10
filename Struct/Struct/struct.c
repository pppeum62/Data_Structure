#include <stdio.h>

int main() {
	struct student {
		char num[5];
		char name[11];
		int age;
	};
	
	struct student a[10];
	int i;

	for (i = 0; i < 3; i++) {
		printf("학번 : ");
		scanf_s("%s", a[i].num, 5);
		printf("성명 : ");
		getchar();
		gets_s(a[i].name, 11); //fgets(a[i].name, 11, stdin);
		printf("나이 : ");
		scanf_s("%d", &a[i].age);
	}

	for (i = 0; i < 3; i++) {
		printf("학번 : %s, 성명 : %s, 나이 : %d\n", a[i].num, a[i].name, a[i].age);
	}
}