
#include <stdio.h>
int main()
{
    int n,i,j,temp;
    printf("enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}
