#include <stdio.h>
int main()
{
    int A[10], B[10], C[10], n1, n2, n, i, j, k;
    printf("Enter the total number of elements in 1st set:");
    scanf("%d", &n1);
    printf("Enter the elements of 1st set:");
    for (i = 0; i < n1; i++)
        scanf("%d", &A[i]);
    printf("Enter the total number of elements in 2nd set:");
    scanf("%d", &n2);
    printf("Enter the elements of 2nd set:");
    for (j = 0; j < n2; j++)
        scanf("%d", &B[j]);
    printf("Which operation you wanna perform? \n");
    printf(" 1:Union\n 2:Intersection\n 3:Difference\n 4:Cartesian product\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("The union of two sets are:\n {\t");
        for (i = 0; i < n1; i++)
        {
            C[i] = A[i];
        }
        for (j = 0; j < n2; j++)
        {
            C[n1 + j] = B[j];
        }
        for (i = 0; i < (n1 + n2); i++)
        {
            k = 0;
            for (j = i + 1; j < (n1 + n2); j++)
            {
                if (C[i] == C[j])
                {
                    k = 1;
                    break;
                }
            }
            if (k == 0)
                printf("%d\t", C[i]);
        }
        printf("}");
        break;
    case 2:
        printf("The Intersection of two sets are:\n {\t");
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                if (A[i] == B[j])
                    printf("%d", A[i]);
            }
            printf("\t}");
        }
    case 3:
        printf("The difference of two sets are \n {\t");
        for (i = 0; i < n1; i++)
        {
            k = 0;
            for (j = 0; j < n2; j++)
            {
                if (A[i] == B[j])
                {
                    k = 1;
                    break;
                }
            }
            if (k == 0)
            {
                printf("%d\t", A[i]);
            }
        }
        printf("}");
    case 4:
        printf("The cartesian products of two sets are:\n {\t");
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < n2; j++)
                printf("(%d,%d)\t", A[i], B[j]);
        }
        printf("}");
    }
    return 0;
}