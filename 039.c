#include<stdio.h>//����n�Ľ׳�
int main()
{
    int i=0;
    int n=0;
    int sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        sum=sum*i;
    }
    printf("%d",sum);
    return 0;
}