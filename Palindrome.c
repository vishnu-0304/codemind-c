#include<stdio.h>
int main()
{
    int rem,sum=0,n,t;
    scanf("%d",&n);
    t=n;
    while(n != 0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(sum==t)
    {
printf("True");
    }
    else
    {
printf("False");
    }
  return 0;  
}