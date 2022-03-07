// Write a program to find the transpose of given matrix.
#include<stdio.h>
int main()
{
    int a[10][10],t[10][10],r,c,i,j;
    printf("Enter the rows and column of matrix");
    scanf("%d%d",&r,&c);
    printf("Enter the array elements:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    printf("The given matrix is :\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    // printing final result
    printf("The transposed matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            t[i][j]=a[j][i];
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}