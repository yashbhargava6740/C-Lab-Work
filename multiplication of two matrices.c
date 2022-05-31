
#include <stdio.h>
#define row1 3
#define col1 4
#define row2 col1
#define col2 2
int main()
{
    int mat1[row1][col1],mat2[row2][col2],mat3[row1][col2],i,j,k;
    printf("enter first matrix:");
    for (i=0;i<row1;i++)
    {
        for (j=0;j<col1;j++)
            scanf("%d",&mat1[i][j]);
        printf("\n");
    }
    printf("enter second matrix:");
    for (i=0;i<row2;i++)
    {
        for (j=0;j<col2;j++)
            scanf("%d",&mat2[i][j]);
        printf("\n");
    }
    for (i=0;i<row1;i++)
    {
        for (j=0;j<col2;j++)
            {
                mat3[i][j]=0;
                for(k=0;k<col1;k++)
                {
                    mat3[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
    }
    for (i=0;i<row1;i++)
    {
        for (j=0;j<col2;j++)
            printf("%d\t",mat3[i][j]);
        printf("\n");
    }
return 0;
}
