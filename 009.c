#include <stdio.h>//ѭ�����while���
int main()
    {
        int line = 0;
        printf("�������\n");
        while(line<2000)
        {
        printf("��һ�д���:%d\n",line);
        line++;
        }
        if(line>=2000)
        printf("��offer");
        return 0;
    }