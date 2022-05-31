#include <stdio.h>
int main()
{
int n,i=0,j=0,l,u,num=1,arr[20] [20]={0};
printf ("Enter value of n ") ;
scanf("%d",&n) ;
l=0;u=n-1;
for (num=1;num<=n*n;num++){
arr[i][j]=num;
if(i==l&&j<u)
j++;
else if(j==u&&i<u)
i++;
else if (i==u&&j>l)
j--;
else if (j ==l&&i>l)
i--;
if(arr[i] [j] !=0)
{
u--;
i++;
j++;
l++;
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%4d",arr[i] [j]);
printf("\n");
}}
