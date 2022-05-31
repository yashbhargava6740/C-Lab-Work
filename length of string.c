\\Calculate length of string
#include <stdio.h>
#include <string.h>
int main()
{
    char st[100];
    int a;
    scanf("%[^\n]",st);
    printf("%s\n",st);
    a=strlen(st);
    printf("%d",a);
    return 0;
}
