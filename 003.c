#include<stdio.h>
int main()
{
    //�����������ĺ�
    int sum=2;
    int num1=0;
    int num2=0;
    //��������-ʹ�����뺯��scanf
    scanf("%d%d",&num1,&num2);//&Ϊȡ��ַ��
    sum=num1+num2;
    printf("sum=%d\n",sum);
    return 0;
}  