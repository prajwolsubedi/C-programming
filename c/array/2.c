// Write a program to find the sum of two matrices.
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10];
    int r,c,i,j;
    printf("Enter the rows and column of array:");
    scanf("%d%d",&r,&c);
    printf("Enter the array elements of 1st matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    // taking the array elements of 2nd matrix
    printf("Enter the array elements of 2nd matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&b[i][j]);
    }
    // main logic
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];           
        }
    }
    //printing the sum 
    printf("The sum of the two matrix is:\n");
      for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",sum[i][j]);        
        }
        printf("\n");
    }
    return 0;
}