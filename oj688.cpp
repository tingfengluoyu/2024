#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000
#define MAX_NUM 10000

int main() {
    int n;
    scanf("%d", &n);
    int nums[MAX_N];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int count[MAX_NUM + 1] = { 0 };  // ����ͳ��ÿ�������ֵĴ�������ʼ��Ϊ0
    for (int i = 0; i < n; i++) {
        count[nums[i]]++;
    }

    int max_count = 0;
    int res = MAX_NUM + 1;
    for (int num = 1; num <= MAX_NUM; num++) {
        if (count[num] > max_count) {
            max_count = count[num];
            res = num;
        }
        else if (count[num] == max_count && num < res) {
            res = num;
        }
    }
    printf("%d\n", res);

    return 0;
}