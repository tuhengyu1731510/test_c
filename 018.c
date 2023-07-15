#include <stdio.h>
int main()
    {
        char ch ='w';
        char*pc=&ch;
        *pc='a';
        printf("%c\n",ch);
        return 0;
    } 