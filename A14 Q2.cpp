#include<stdio.h>
int main()
{
        int i,j,sum=0;
        float avg;
        int a[10];
        printf("Entre the 10 value\t");
        for(i=1;i<=10;i++)
        {
                scanf("%d",&a[i]);
        };
        for(i=1;i<=10;i++)
        {
                sum=sum+a[i];
        };
        printf("Sum of ten value is %d\n ",sum);
        printf("Average of ten is %f",sum/10.0);
}
