#include<stdio.h>
int main()
{
        int a[5],i;
        for(i=1;i<=5;i++)
          scanf("%d",&a[i]);
          for(i=5;i>=1;i--)
          {
                 printf("%d\t",a[i]); 
          }
}
