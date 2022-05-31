
#include <stdio.h>
int main()
{
    int n;
    printf("enter no of elements:");
    scanf("%d",&n);
    int i,a[n],j,sum_e=0,sum_o=0;
    printf("input elements");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (j=0;j<n;j++)
    {
        if(a[j]%2==0)
            sum_e+=1;
        else
            sum_o+=1;
    }
    printf("sum of even elements%d\n",sum_e);
    printf("sum of odd elements%d\n",sum_o);
    return 0;
}
