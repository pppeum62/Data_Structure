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
		printf("�й� : ");
		scanf_s("%s", a[i].num, 5);
		printf("���� : ");
		getchar();
		gets_s(a[i].name, 11); //fgets(a[i].name, 11, stdin);
		printf("���� : ");
		scanf_s("%d", &a[i].age);
	}

	for (i = 0; i < 3; i++) {
		printf("�й� : %s, ���� : %s, ���� : %d\n", a[i].num, a[i].name, a[i].age);
	}
}