\\Perfect no.
#include <stdio.h>
int main()
{
    int num,n,nes,i,sum=0;
    printf("enter no:");
    scanf("%d",&n);
    num=n;
    for(i=1;i<n;i++)
    {
        if (n%i==0)
            sum=sum+i;
    }
    if(sum==num)
        printf("no. is perfeect");
    else
        printf("no is not perfect");
    return 0;
}
