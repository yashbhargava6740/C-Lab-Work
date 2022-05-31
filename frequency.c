\\frequency of all digits in a no.
#include <stdio.h>
#include <math.h>
int main()
{
    int n,nes,i,k,num,num2,first,c=0;
    printf("enter no.");
    scanf("%d",&n);
    k=log10(n);
    k+=1;
    num=n;
    num2=n;
    for (i=1;i<=k;i++)
    {
        first=n%10;
        c=0;
        num=num2;
        while(num>0)
        {
            nes=num%10;
            if(nes==first)
                c+=1;
            num=num/10;
        }
        printf("count of %d = %d",first,c);
        n/=10;
    }
    return 0;
}
