\\Write a program to accept any number n and print the sum of square of all numbers from 1 to n
#include <stdio.h>
int main()
{
    int num,i;
    long sum=0;
    printf("enter no.");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        sum+=i*i;
    printf("%ld",sum);
    return 0;
}
