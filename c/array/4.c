// Write a program to find the multiplication of two given matrices with suitable condition.
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],product[10][10],sum=0;
    int r1,c1,r2,c2,i,j,k;
    printf("Enter the rows and column of 1st matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the rows and column of 2nd matrix:");
    scanf("%d%d",&r2,&c2);
    //condition
    if(c1!=r2)
    {
    printf("The matrixes cannot be multiplied");
    }
    else
    {
            printf("Enter the array elements of 1st matrix:");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                scanf("%d",&a[i][j]);
            }

            printf("Enter the array elements of 2nd matrix:");
            for(i=0;i<r2;i++)
            {
                for(j=0;j<c2;j++)
                scanf("%d",&b[i][j]);
            }

                // main logic
                for(i=0;i<r1;i++)
                {
                    for(j=0;j<c2;j++)
                    {
                        for(k=0;k<c1;k++)
                        {
                            sum+=(a[i][k]*b[k][j]);
                        }
                        product[i][j]=sum;
                        sum=0;
                    }
                }
                    //printing the product
                    printf("The product of the two matrix is:\n ");
                    for(i=0;i<r1;i++)
                    {
                        for(j=0;j<c2;j++)
                        {
                            printf("%d\t",product[i][j]);        
                        }
                        printf("\n");
                    }
    }
    return 0;
}