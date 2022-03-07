#include<stdio.h>
int main()
{
    int num;
    FILE *fptr;
    fptr=fopen("c:\\file.txt","w");
    if (fptr == NULL)
    {
        printf("Error");

    }
    printf("Enter a number:");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
}