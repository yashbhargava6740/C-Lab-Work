#include <stdio.h>
int main()
{
    int x,y,z,max;
    printf("enter first no.:");
    scanf("%d",&x);
    printf("enter second no.:");
    scanf("%d",&y);
    printf("enter third no.:");
    scanf("%d",&z);
    max=x>y&&x>z?x:y>x&&y>z?y:z>x&&z>y?z:0;
    printf("%d",max);
    return 0;
}
