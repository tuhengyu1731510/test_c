#include <stdio.h>
struct Book
{
    char name[20];
    short price;
};
int main()
    {
        struct Book b1={"C���Գ������",55};
        printf("������%s\n",b1.name);
        printf("�۸�%dԪ\n",b1.price);
        return 0;
    } 