\\Write a program to enter a number and find the reverse of that number
#include <stdio.h>
#include <math.h>
int main()
{
    int num,copy,nes,rev=0;
    printf("enter no. to find reverse");
    scanf("%d",&num);
    copy=num;
    while(num>0)
    {
        nes=num%10;
        rev=rev*10+nes;
        num/=10;
     }
    printf("reversed no. is %d",rev);
    return 0;
}
