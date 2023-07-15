#include <stdio.h>
int main()
    {
        double a=3.14;
        double* pd=&a;
        *pd=6.3;
        printf("%lf\n",*pd);
    } 