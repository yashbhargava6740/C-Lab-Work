\\Write a program to print prime numbers from 1 to 99.
#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,flag;
    for(i=2;i<100;i++)
    {
        flag=0;
        for (j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
            printf("%d is prime\n",i);
        
    }
    return 0;
}
