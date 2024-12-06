#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<cmath>

int prime(int n);

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[40];
	arr[0] = 1;
	arr[1] = 1;

	for (int i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	if (prime(arr[n - 1]) == 0) {
		printf("yes");
	}
	else {
		printf("%d", arr[n - 1]);
	}

	return 0;
}

int prime(int n) {
	if (n == 2) {
		return 0; // 2������
	}
	if (n % 2 == 0) {
		return 1; // �ų�ż��������2��
	}
	for (int i = 3; i * i <= n; i += 2) {
		if (n % i == 0) {
			return 1; // ���n�ܱ�i��������n��������
		}
	}
	return 0; // ���û���ҵ���������n������
}