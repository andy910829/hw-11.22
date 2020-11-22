#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num[10] = { 2,6,4,8,10,12,89,68,45,37 };
	int change;

	printf("原本的陣列排序：\n");
	for (int i = 0; i < 10; i++) {
		printf("%4d", num[i]);
	}
	for (int j = 1; j < 10; j++) {
		for (int i = 0; i < 9; i++) {
			if ((num[i] > num[i + 1]) && (num[i + 1] >= 0)) {
				change = num[i];
				num[i] = num[i + 1];
				num[i + 1] = change;
			}
		}
	}

	printf("\n後來的陣列排序：\n");
	for (int i = 0; i < 10; i++) {
		printf("%4d", num[i]);
	}

	printf("\n");

	system("pause");
	return 0;
}