#include <stdio.h>

int main() {
	int i, j, b[5][4];
	int a[4][5] = { {5,41,24,6,10}, {50,33,20,15,11},{7,17,35,21,16},{4,16,61,90,1} };
	int c[4][5];
	
	int z = 3;
	int k = 0;

	for (i = 0; i < 4; i++) {
		k = 0;
		for (j = 0; j < 5; j++) {
			b[k][z] = a[i][j];
			k++;
		}
		z--;
	}
	
	z = 4;
	k = 0;

	for (i = 0; i < 5; i++) {
		k = 0;
		for (j = 0; j < 4; j++) {
			c[k][z] = b[i][j];
			k++;
		}
		z--;
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++)
			printf("%3d ", a[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++)
			printf("%3d ", b[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++)
			printf("%3d ", c[i][j]);
		printf("\n");
	}
	printf("\n");

	return 0;
}