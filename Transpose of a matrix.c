
#include <stdio.h>
#define row1 3
#define col1 3
int main()
{
    int mat1[row1][col1],mat2[row1][col1],i,j,k;
    printf("enter matrix:");
    for (i=0;i<row1;i++)
    {
        for (j=0;j<col1;j++)
            scanf("%d",&mat1[i][j]);
        printf("\n");
    }
    for (i=0;i<row1;i++)
    {
        for (j=0;j<col1;j++)
            {
                mat2[i][j]=mat1[j][i];
            }
    }
    for (i=0;i<row1;i++)
    {
        for (j=0;j<col1;j++)
            printf("%d\t",mat2[i][j]);
        printf("\n");
    }
    return 0;
}
