#include<stdio.h>

int main()
{
    int a[]={3,2,11,8,6,5};
    int i,j,min,temp;
    for(i=0;i<5;i++)
    {
        min=i;
        for(j=i+1;j<6;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    for(i=0;i<6;i++)
    {
        printf("%d",a[i]);
    }
}
