#include <stdio.h>//循环语句while语句
int main()
    {
        int line = 0;
        printf("加入比特\n");
        while(line<2000)
        {
        printf("敲一行代码:%d\n",line);
        line++;
        }
        if(line>=2000)
        printf("好offer");
        return 0;
    }