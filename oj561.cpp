#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[200];
    char s[101];
    fgets(s, 101, stdin); // ��ȡһ�����룬�������з�

    size_t len = strlen(s);
    if (len == 0) {
        return 1; // ���û�����룬ֱ�ӷ���
    }

    // ���������ַ����Ի��з���β���Ƴ����з�
    if (s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--; // ���³���
    }

    char* p = arr; // arr��ָ��
    char* q = s;   // s��ָ��

    // �����ַ�����ÿ���ַ�����ӿո�
    for (size_t i = 0; i < len; i++) {
        *p = *q;
        p++;
        *p = ' ';
        p++;
        q++;
    }
    *p = '\0'; // ��arr��ĩβ��ӿ��ַ�

    printf("%s", arr); // ��ӡ���

    return 0;
}