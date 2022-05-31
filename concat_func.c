#include <stdio.h>
#include <string.h>
int main()
{
    char b[100]={"hgvffghmjkm"},a[100],m;
    int i,j;
    scanf("%[^\n]",a);
    scanf("%c",&m);
    scanf("%[^\n]",b);
    strcat(b,a);
    printf("%s",b);
    return 0;
}
