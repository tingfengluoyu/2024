#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isSubstring(const char* mainStr, const char* subStr, int mainLen, int subLen) {
    int i, j;
    for (i = 0; i <= mainLen - subLen; i++) {
        for (j = 0; j < subLen; j++) {
            if (mainStr[i + j] != subStr[j]) {
                break;
            }
        }
        if (j == subLen) {
            return true; // �Ӵ�ȫ��ƥ��
        }
    }
    return false; // �Ӵ�û��ȫ��ƥ��
}

int main() {
    char mainStr[21];
    char subStr[21];

    // ��ȡ���ַ��������ַ���
    fgets(mainStr, 21, stdin);
    fgets(subStr, 21, stdin);

    // �Ƴ����з�
    mainStr[strcspn(mainStr, "\n")] = 0;
    subStr[strcspn(subStr, "\n")] = 0;

    int mainLen = strlen(mainStr);
    int subLen = strlen(subStr);

    // �ж��Ӵ��Ƿ���������
    int position = 0;
    bool found = false;
    for (position = 0; position <= mainLen - subLen; position++) {
        if (strncmp(&mainStr[position], subStr, subLen) == 0) {
            found = true;
            break;
        }
    }

    if (found) {
        printf("%d\n", position + 1); // ����Ӵ��ڸ�������ʼλ�ã���1��ʼ������
    }
    else {
        printf("No!\n"); // �����Ӵ�
    }

    return 0;
}