#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = 0;

    for (int i = 0; i < n; i++) {
        int count = 1; // ��ʼ��Ϊ 1����Ϊ������һ��Ԫ��
        for (int j = i + 1; j < n; j++) { // ����һ��Ԫ�ؿ�ʼ�Ƚ�
            if (arr[j] == arr[i]) {
                count++;
            }
            else {
                break; // �������ͬ����ֹͣ����
            }
        }
        if (count > max) {
            max = count; // �������ֵ
        }
    }

    printf("%d\n", max);

    return 0;
}