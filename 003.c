#include<stdio.h>
int main()
{
    //计算两个数的和
    int sum=2;
    int num1=0;
    int num2=0;
    //输入数据-使用输入函数scanf
    scanf("%d%d",&num1,&num2);//&为取地址符
    sum=num1+num2;
    printf("sum=%d\n",sum);
    return 0;
}  