#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int*p = arr;
    int i = 0;
    for(i = 0;i < 10;i++)
    {
        printf("%d",*p);
        p++;
    }
    return 0;
}