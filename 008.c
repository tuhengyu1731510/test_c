#include <stdio.h>//if语句
int main()
    {
        int input = 0;
        printf("你想考211吗?(1/0)>:");
        scanf("%d",&input);
        if(input == 1)
        printf("名校211");
        else
            printf("打螺丝");
        return 0;
    }