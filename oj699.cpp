#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
    int n = 0; // ��ί������
    int m = 0; // �鳤���
    float sum = 0;
    float average = 0;
    int arr[20] = { 0 }; // �洢��ί��ֵ�����

    // ������ί�������鳤���
    scanf("%d %d", &n, &m);

    // ����ÿλ��ί�Ĵ��
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // ��ʼ�����ֵ����Сֵ
    int max = arr[0];
    int min = arr[0];

    // �ҳ����ֵ����Сֵ
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // �ж��鳤����Ƿ�Ϊ��߷ֻ���ͷ�
    if (arr[m - 1] == max) {
        sum += max;
    }
    if (arr[m - 1] == min) {
        sum += min;
    }

    // �����ܺͣ�ȥ����߷ֺ���ͷ�
    for (int i = 0; i < n; i++) {
        if (arr[i] == max && i != m - 1) {
            arr[i] = 0;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == min && i != m - 1) {
            arr[i] = 0;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // ������Ч�����ĸ���
    int valid_count = n;
    if (max != arr[m - 1]) {
        valid_count--;
    }
    if (min != arr[m - 1]) {
        valid_count--;
    }

    // ����ƽ��ֵ
    average = sum / (float)valid_count;

    // ���ƽ��ֵ��������λС��
    printf("%.2f", average);

    return 0;
}