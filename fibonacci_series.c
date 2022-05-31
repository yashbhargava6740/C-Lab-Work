\\Fibonacci series
#include <stdio.h>
int main()
{
    int x,y,z,n,i;
    printf("enter no of terms:");
    scanf("%d",&n);
    x=1;
    y=1;
    printf("%d\n",x);
    printf("%d\n",y);
    for (i=1;i<=n-2;i++)
    {
        z=x+y;
        printf("%d\n",z);
        x=y;
        y=z;
    }
    return 0;
}
