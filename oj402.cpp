#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[6]; // ��Ҫ����һ������Ŀռ����洢���� '\0'
	fgets(arr, 6, stdin); // ��ȡ5���ַ��������� '\0'

	// �� arr[4] �ӻ��з�ת��Ϊ '\0'
	if (arr[4] == '\n') {
		arr[4] = '\0';
	}
	else {
		// ������볬��4���ַ����ض϶�����ַ�
		arr[5] = '\0';
	}

	for (int i = 0; i < 4; i++) {
		if (arr[i] >= 'A' && arr[i] <= 'Z') {
			arr[i] += 'a' - 'A';
		}
		else if (arr[i] >= 'a' && arr[i] <= 'z') {
			arr[i] += 'A' - 'a';
		}
		else if (arr[i] >= '0' && arr[i] <= '9') {
			arr[i] = '*';
		}
		else {
			arr[i] = '@';
		}
	}

	printf("%4s\n", arr);

	return 0;
}