#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&arr[n]);

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}