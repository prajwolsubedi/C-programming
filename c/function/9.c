 // Recurtion function to input a number and find the sum of all natural numbers upto that number.
 #include<stdio.h>
 int sum(int);
 int main()
 {
     int n,addition;
     printf("Enter any number:");
     scanf("%d",&n);
     addition=sum(n);
     printf("The sun of all natural number upto the given number is: %d\n",addition);

     return 0;
 }
 int sum(int n)
 {
     if(n<=0)
     {
     return 0;
     }
     else
     {
     return (n+sum(n-1));
     }
 }