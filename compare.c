#include <stdio.h>
#include <string.h>
int main()
{
    char b[100],a[100],m;
    int i,j;
    scanf("%[^\n]",a);
    scanf("%c",&m);
    scanf("%[^\n]",b);
    i=strcmp(b,a);
    printf("%d",i);
    return 0;
}
