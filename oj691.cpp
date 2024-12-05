#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// �������������ĺ���
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("�ڴ����ʧ��\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = n - 1;
    if (n % 2 == 1) {
        // ������Ԫ��ʱ���м�Ԫ�ز������������ұ߽�
        left = (n + 1) / 2 - 1;
        right = (n + 1) / 2;
    }

    // ͨ��˫ָ�뷨�����۰뽻��
    while (left >= 0 && right < n) {
        swap(&arr[left], &arr[right]);
        left--;
        right++;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}