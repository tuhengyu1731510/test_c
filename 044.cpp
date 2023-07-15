//ц╟ещеепР
#include<iostream>
using namespace std;
void swap(int*xp,int*yp)
{
    int temp =*xp;
    *xp =*yp;
    *yp=temp;
}
void bubbleSort(int arr[],int n)
{
    int i,j,flag=1;
    for(i=0;i<n-1&&flag==1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag =1;
            }

        }
    }
}
void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"-";
    }
}