#include <stdio.h>//standard input output h为头文件
int main()
{
    printf("%d",sizeof(char));//1，1个字节=8比特
    printf("%d",sizeof(short));//2
    printf("%d",sizeof(int));//4
    printf("%d",sizeof(long));//4
    printf("%d",sizeof(long long));//8;
    printf("%d",sizeof(float));//4
    printf("%d",sizeof(double));//8
    return 0;
}//1.字节定义
//计算机的单位
//bit-比特位
//byte-字节->一个字节=八个bit位的大小            
//kb 1kb=2^10b=1024b
//mb 1mb=2^10kb
//gb
//tb
//pb
//2.二进制  short 0000000000000000=0   0000000000000001=1   00000000000000010=2  00000000000000011=3
