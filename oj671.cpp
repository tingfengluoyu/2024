#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int average(int n, int arr[]);
int variance(int n, int arr[], int avg);

int main()
{
    int n = 0;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int avg = average(n, arr);
    printf("%d", variance(n, arr, avg));

    free(arr);
    return 0;
}

int average(int n, int arr[])
{
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum / n; // ����ֱ�ӷ�������������С������
}

int variance(int n, int arr[], int avg)
{
    int sum = 0;

    for (int i = 0; i < n; i++) {
        // ����ƽ���Ȼ��ȡ��������
        int diff = arr[i] - avg;
        sum += (int)pow(diff, 2);
    }

    return sum / n; // ����ֱ�ӷ�������������С������
}