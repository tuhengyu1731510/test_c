#include<stdio.h>
int main()
{
    int age =100;
    if(age<18)
        printf("δ����\n");
    else if(age<28&&age>=18)
        printf("����\n");
    else if(age<50&&age>=28)
        printf("׳��\n");
    else if(age<90&&age>=50)
        printf("����\n");
        else
            printf("�ϲ���\n");
}