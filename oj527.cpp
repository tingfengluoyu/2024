#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<cmath>

int main() {
    int n = 0;
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int reversed = 0; // ���ڴ洢����������

    // ��������ȡ����ֵ
    int original_n = n;
    if (n < 0) {
        n = -n;
    }

    // ʹ��ģ�����������������
    while (n > 0) {
        reversed = reversed * 10 + n % 10; // �����һλ������ӵ�����������ĩβ
        n /= 10; // ȥ�����һλ����
    }

    if (original_n > 0 && reversed > (int)pow(2, 32) - 1){
        return 0;
    }

    if (original_n < 0 && reversed>(int)pow(2, 32)) {
        return 0;
    }

    // ���ԭʼ�����Ǹ�������ӡ����
    if (original_n < 0) {
        printf("-%d\n", reversed);
    }
    else {
        printf("%d\n", reversed);
    }

    return 0;
}