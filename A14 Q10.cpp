#include<stdio.h>
int main()
{
        int num[5],gum[5],n,i;
        for(i=1;i<=5;i++)
        scanf("%d",&num[i]);
        for(i=1;i<=5;i++)
        {
                gum[i]=num[i];
                printf("%d\t",gum[i]);
        }
}
