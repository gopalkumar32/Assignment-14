#include<stdio.h>
int main()
{
        int i,j,sum=0;
        int a[10];
        printf("Entre the 10 value\t");
        for(i=1;i<=10;i++)
        {
                scanf("%d",&a[i]);
        };
        for(j=1;j<=10;j++)
        {
                sum=sum+a[j];
        };
        printf("Sum of ten value is %d ",sum);
}
