\\Write a program to enter a number and test whether it is a fibonacci number or not.
#include <stdio.h>
int main()
{
    int n,num,x,y,z,flag=0;
    printf("enter no.");
    scanf("%d",&n);
    x=1;
    y=1;
    while(1)
    {
        z=x+y;
        if(z>n)
            break;
        if(z==n)
        {
            flag=1;
            break;
        }
        x=y;
        y=z;
    }
    if(flag==1)
        printf("fibonacci no.");
    else
        printf("not a fibonacci no.");
    return 0;
}
