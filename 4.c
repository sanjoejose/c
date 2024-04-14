#include<stdio.h>
int main()
{
    int i,n,no,sum=0;
    printf("\nEnter the no.of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the %d no:",i+1);
        scanf("%d",&no);
        sum=sum+no;
    }
    printf("\nThe sum of %d numbers is %d",n,sum);
}
