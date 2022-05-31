#include <stdio.h>
#include <string.h>
int main()
{
    char st[100],a[100];
    int i;
    scanf("%[^\n]",st);
    for(i=0;st[i];i++)
        a[i]=st[i];
    a[i]=0;
    printf("%s",a);
    return 0;
}
