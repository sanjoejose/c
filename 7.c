#include<stdio.h>
int main()
{
    int i,n,j;
    printf("\nEnter the no.of elements:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<=9)
        {
            printf("%d\t",i);
        }
    }
}