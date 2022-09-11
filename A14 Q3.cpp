#include<stdio.h>
int main()
{
        int i,j,so=0,se=0;
        int a[10];
        printf("Entre the ten number\n");
        for(i=1;i<=10;i++)
        scanf("%d",&a[i]);
        for(j=1;j<=10;j++)
        {
                if(a[j]%2==0)
                se=se+a[j];
                if(a[j%2!=0])
                so=so+a[j];
        }
        printf("Sum of even number is %d\n",se);
        printf("Sum of odd number is %d\n",so);
        
}
