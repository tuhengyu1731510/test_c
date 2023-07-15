#include <stdio.h>
#define Max(x,y) (x>y?x:y)
int main()
    {
    int a=10;
    int b=20;
    int max =Max(a,b);
    printf("max=%d\n",max);
        return 0;
    }