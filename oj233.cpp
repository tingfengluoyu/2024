#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void copystr(char* p, int m);

int main() {
    char arr[51]; // �ַ����������Ϊ50������һ�����ַ�'\0'
    int m;

    // ��ȡ�ַ���
    fgets(arr, 51, stdin);

    // ��ȡ����m
    scanf("%d", &m);
    getchar();

    size_t len = strlen(arr);
    // ����ַ����Ի��з���β���滻Ϊ�ַ���������'\0'
    if (len > 0 && arr[len - 1] == '\n') {
        arr[len - 1] = '\0';
        len--; // ���³���
    }

    // ����ַ��������Ƿ�С��m
    if (len < m) {
        printf("error\n");
    }
    else {
        char* p = arr;
        p += m - 1; // �ƶ�ָ�뵽��m���ַ�
        copystr(p, m); // ���ú��������ַ���
    }
    return 0;
}

void copystr(char* p, int m) {
    while (*p) { // ѭ��ֱ���ַ�������
        printf("%c", *p);
        p++;
    }
}