#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
    char arr[51];
    fgets(arr, 51, stdin); // ��ȡ���50���ַ�����һ�����ַ�

    // �Ƴ����з�
    size_t len = strlen(arr);
    if (len > 0 && arr[len - 1] == '\n') {
        arr[len - 1] = '\0'; // �����з��滻Ϊ�ַ���������
        len--; // ���³���
    }

    char* p = arr;
    char* q = &arr[len - 1]; // q����ָ�����һ���ַ�

    while (p < q) {
        if (*p != *q) {
            printf("no\n");
            return 0;
        }
        p++;
        q--;
    }

    printf("yes\n");

    return 0;
}