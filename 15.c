#include<stdio.h>
void main()
{
    int i=0,j=0;
    int x,y;
    scanf("%d%d",&x,&y);
    for(;i<=x;i++)
    {
        j=x-i;
        if(i*2+j*4==y)
        {
            printf("c:%d r:%d",i,j);
        }
    }
}
