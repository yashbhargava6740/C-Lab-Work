\\To print and count negative elements of an array
#include <stdio.h>
int main()
{
    int n;
    printf("enter no of elements:");
    scanf("%d",&n);
    int i,a[n],j,count=0;
    printf("input elements");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (j=0;j<n;j++)
    {
        if(a[j]<0)
        {
            printf("%d\t",a[j]);
            count+=1;
        }
    }
        printf("total no. of negative elements %d",count);
        return 0;
}
