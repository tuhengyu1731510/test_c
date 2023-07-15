#include<stdio.h>
void main()
{
    int i,score,n;
    double sum,avg;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&score);
        sum += score;
    }
    avg = sum/n;
    printf("zongfengshuwei%.2f,junfengwei%.2f",sum,avg);

}