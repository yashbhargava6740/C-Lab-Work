#include <stdio.h>
#include <string.h>
int main()
{
    char st[100];
    int a,i;
    scanf("%[^\n]",st);
    printf("%s\n",st);
    for(i=0;st[i];i++);
    printf("%d",i);
    return 0;
