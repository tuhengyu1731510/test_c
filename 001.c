#include <stdio.h>//standard input output hΪͷ�ļ�
int main()
{
    printf("%d",sizeof(char));//1��1���ֽ�=8����
    printf("%d",sizeof(short));//2
    printf("%d",sizeof(int));//4
    printf("%d",sizeof(long));//4
    printf("%d",sizeof(long long));//8;
    printf("%d",sizeof(float));//4
    printf("%d",sizeof(double));//8
    return 0;
}//1.�ֽڶ���
//������ĵ�λ
//bit-����λ
//byte-�ֽ�->һ���ֽ�=�˸�bitλ�Ĵ�С            
//kb 1kb=2^10b=1024b
//mb 1mb=2^10kb
//gb
//tb
//pb
//2.������  short 0000000000000000=0   0000000000000001=1   00000000000000010=2  00000000000000011=3
