#include <stdio.h>
int main()
    {
        char arr1[] = "abc";//×Ö·û´®
        char arr2[]={'a','b','c','\0'};//---->\0ÎªÖÕÖ¹·û
        printf("%s\n",arr1);
        printf("%s\n",arr2);
        return 0;
    }//'0'-0
    //'a'-97//ASSCIIMAÖµ
    //ASCII±àÂë