#include <stdio.h>
int main()
{
int i,sum,n,nes,cube;
    for (i=100;i<=999;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
	        nes=n%10;
	        cube=nes*nes*nes;
	        sum=sum+cube;
	        n=n/10;
        }
        if (i==sum)
	        printf("%d\t",i);
    }
    return 0;
}
