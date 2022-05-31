\\Write a program to find out the Least Common Multiple, and Highest Common Factor of two number
#include <stdio.h>
int main()
{
    int a,b,x,y;
    printf("enter no to take lcm and hcf:");
    scanf("%d%d",&x,&y);
    a=x;
    b=y;
    while(a!=b)
    {
        if(a>b)
            b=b+y;
        else
            a=a+x;
    }
    printf("LCM of %d and %d is:%d",x,y,a);
    a=x;
    b=y;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    printf("HCF of %d and %d is:%d",x,y,a);
    return 0;
}
