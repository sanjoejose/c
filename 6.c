#include<stdio.h>
int main()
{
    int i,no,n;
    printf("\nEnter the no.of elements:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<6 || i>6)
        {
        printf("%d\t",i);
        }
    }
}