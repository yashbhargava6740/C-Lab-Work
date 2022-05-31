#include <stdio.h>
#include <string.h>
int main()
{
    char b[100,a[100],m;
    int i,j;
    scanf("%[^\n]",a);
    scanf("%c" ,&m);
    scanf("%[^\n]",b);
    for(i=0;b[i];i++);
    for(j=0;a[j];i++,j++)
        b[i]=a[j];
    b[i]=0;
    printf("%s",b);
    return 0;
}
