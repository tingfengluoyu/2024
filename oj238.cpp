#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int arr[4][5];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int found = 0;

	for (int i = 0; i < 4; i++) {
		int max = 0;//һ���е����ֵ
		int x = 0;
		for (int j = 0; j < 5; j++) {
			if (arr[i][max] < arr[i][j]) {
				max = j;//���ֵ����
				x = i;//���ֵ����
			}
		}

		int min = 0;//���ֵ���е���Сֵ
		for (int j = 0; j < 4; j++) {
			if (arr[min][max] > arr[j][max]) {
				min = j;//���ֵ���е���Сֵ������
			}	
		}

		if (min == x) {
			found = 1;
			printf("%d %d %d\n", arr[x][max], x + 1, max + 1);
		}
	}

	if (found == 0) {
		printf("���㲻����\n");
	}

	return 0;
}