#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("Enter a postivie number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(n==1)
    {
    printf("1 is neither prime nor composite.");
    }
    else{
    if(count==2)
    printf("Prime number.");
    else
    printf("Not a Prime number.");
    }
    return 0;
    getchar();
}