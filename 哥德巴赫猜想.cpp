#include<stdio.h>
#include<math.h>
//����ż����ֳ����������ĺͣ������С����������
int prime(int num)
{
    if(num <= 1)
    {
        return 0;
    }
    for(int i = 2; i <= sqrt(num);i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 0;
    scanf("%d",&n);

    int a = 0;
    int b = 0;
    
    for(int i = 2; i <= n / 2;i++)
    {
        if(prime(i))
        {
            int o = n - i;
            if(prime(o))
            {
                a = i;//��С������
                b = o;//�ϴ������
                break;//�ҵ�һ���������˳�ѭ��
            }
        }
    }
    printf("%d %d",a,b);
    return 0;
}
