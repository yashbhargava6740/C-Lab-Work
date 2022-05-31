
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],m;
    int i,j;
    scanf("%[^\n]",a);
    for(i=0;a[i];i++)
    {
        if(a[i]>64 && a[i]<91)
            a[i]=a[i]+32;
        else
            a[i]=a[i]-32;
    }
    printf("%s",a);
    return 0;
}
