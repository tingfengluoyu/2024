#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // ���ڼ�¼ÿ�����ֳ��ֵĴ���
    int counts[101] = { 0 }; // ��Ϊ���ַ�Χ��1��100

    for (int i = 0; i < n; i++) {
        counts[arr[i]]++;
    }

    int found = 0;
    // ����ԭʼ˳���ӡ��Ч����
    for (int i = 0; i < n; i++) {
        if (counts[arr[i]] >= 3 && counts[arr[i]] > 0) { // ����Ƿ�����Ч��������δ��ӡ
            printf("%d ", arr[i]);
            counts[arr[i]] = -1; // ���Ϊ�Ѵ�ӡ
            found = 1;
        }
    }

    if (!found) {
        printf("No");
    }

    free(arr); // �ͷŶ�̬������ڴ�
    return 0;
}