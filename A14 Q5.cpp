#include<stdio.h>
int main()
{
        int i,j,n,a[10];
        printf("Entre the 10 number\n");
        for(i=1;i<=10;i++)
        {
                scanf("%d",&a[i]);
                n=a[i];
        }
        for(j=1;j<=10;j++)
        {
              if(n>=a[j])
              n=a[j];
        }
        printf("smallest numbner in array %d",n);
}
