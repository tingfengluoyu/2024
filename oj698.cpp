#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int arr[150] = { 0 };
	int n = 0;
	scanf("%d %d %d", &arr[0], &arr[1], &n);

    int i = 0;
	int index = 2;
    while (index < n) {
        int product = arr[i] * arr[i + 1]; // ����˻�
        if (product < 10) {
            arr[index++] = product;
        }
        else {
            // ����˻�����λ������ֳ�����һλ��
            arr[index] = product / 10;
            arr[index + 1] = product % 10;
            index += 2;
        }
        i++;
    }

	for (int j = 0; j < n; j++) {
		printf("%d ", arr[j]);
	}

	return 0;
}