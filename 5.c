#include<stdio.h>
int main()
{
    int n,no,i,sum=0;
    printf("\nEnter no.of elements:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
        if(n>=10)
        {
            printf("\nThe sum is:%d",sum-10);
        }
        else{
            printf("\nThe sum is:%d",sum);
        }
}