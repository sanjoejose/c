#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\nEnter the no.of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }
    printf("\nThe sum of %d nos is:%d",n,sum);
}