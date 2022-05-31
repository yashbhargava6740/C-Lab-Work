#include <stdio.h>
#include <string.h>
int main()
{
    char st[100],a[100];
    int i;
    scanf("%[^\n]",st);
    strcpy(a,st);
    printf("%s",a);
    return 0;
}
