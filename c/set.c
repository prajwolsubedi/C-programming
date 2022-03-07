#include <stdio.h>
int main()
{
    int A[10], B[10],C[10], i, j,k; 
    int n1, n2, n;
    printf("Enter the number of elements of first set:");
    scanf("%d", &n1);
    printf("Enter the elements of first set:");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the number of elements of second set:");
    scanf("%d", &n2);
    printf("Enter the elements of second set:");
    for (j = 0; j < n2; j++)
    {
        scanf("%d", &B[j]);
    }
    printf("Choose the operation you wanna perform:\n");
    printf("1: Union\n");
    printf("2: Intersection\n");
    printf("3: Difference\n");
    printf("4: Cartisian product\n");
    scanf("%d",&n);
    switch(n){
    case 1:
        for(i=0;i<n1;i++)
        {
            C[i]=A[i];
        }
        for(j=0;j<n2;j++)
        {
            C[n1+j]=B[j];

        }
             printf("The union of two sets is {");
        for(i=0;i<(n1+n2);i++)
        {
            k=0;
            for(j=i+1;j<(n1+n2);j++)
            {
                if (C[i]==C[j])
                {
                k=1;
                break;
                }
            }
            if (k==0)
            printf("%d,",C[i]);
        }
        printf("}");
        break;
    case 2:
        printf("The intersection of two sets is{");
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                if (A[i] == B[j])
                    printf("%d", A[i]);
            }
        }
        printf("}");
        break;
    case 3:
        printf("The Difference of two set is {");
        for(i=0;i<n1;i++)
        {
            k=0;
            for(j=0;j<n2;j++)
            {
                if(A[i]==B[j])
                {
                k=k+1;
                break;
                }
            }
            if(k==0)
            {
                printf("%d",A[i]);
            }
        }
             printf("}");
        break;
    case 4:
        printf("The cartisian product are:{");
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                printf("(%d,%d),", A[i], B[j]);
            }
        }
        printf("}");
        break;
    default:
        printf("Error");
    }
    return 0;
}