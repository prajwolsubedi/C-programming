// Write a program to sort the array elements in the ascending order.
#include<stdio.h>
int main()
{
    int a[50],i,j,n,temp;
    printf("Enter the number of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    printf("your array elements in ascending order are \n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
return 0;
}