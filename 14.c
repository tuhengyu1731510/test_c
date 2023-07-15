#include<stdio.h>
void main()
{
    int m=10006,n=0;


    for(m=10006;m<=99996;m=m+10)
    {
        if(m%3==0)
        {
            n++;
        }
        printf("%d",n);
    }
    printf("%d",n);
}