#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],m,alpha=0,dig=0,spe=0;
    int i,j;
    scanf("%[^\n]",a);
    for(i=0;a[i];i++)
    {
        if(a[i]>64 && a[i]<91||a[i]>96 && a[i]<123 )
            alpha+=1;
        else if (a[i]>=48 && a[i]<=57)
            dig+=1;
        else
            spe+=1;
    }
    printf("%d\n",alpha);
    printf("%d\n",dig);
    printf("%d\n",spe);
    return 0;
}
