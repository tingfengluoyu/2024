#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    // ���n�Ƿ�Ϊ����
    if (n == 2 || n == 3) {
        printf("YES");
    }
    else {
        int a = 0; // ���ڱ��n�Ƿ�Ϊ����
        // ���n����3������Ƿ��г���1�����������������
        if (n > 3) {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    a = 1; // ����������n��������
                    break;
                }
            }
        }
        // ����a��ֵ������
        if (a == 0) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }

    return 0;
}