  #include<stdio.h>
  int main()
  {
    int a = 0;
    int b = 0;
    scanf("%d",&a);
    if(a <= 100000)
    {
        b = a / 10;
    }else if(a > 100000 && a <= 200000)
    {
        b = 10000 + (a - 100000) * 0.075; 
    }else if(a > 200000 && a <= 400000)
    {
        b = 17500 + (a - 200000) * 0.05;
    }else if(a > 400000 && a <= 600000)
    {
        b = 27500 + (a - 400000) * 0.03;
    }else if(a > 600000 && a <= 1000000)
    {
        b = 33500 + (a - 600000) * 0.015;
    }else if(a > 1000000)
    {
        b = 39500 + (a - 1000000) * 0.01;
    }
    printf("%d",b);
  }