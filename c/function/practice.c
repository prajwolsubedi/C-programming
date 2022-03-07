 // Recurtion function to input a number and find the sum of all natural numbers upto that number.
 #include<stdio.h>
 void fun1();
 void fun2();
 int main()
 {
     fun1();
 }
 void fun2()
 {
     printf("This is function 2");
 }
 void fun1()
 {
     printf("This is function 1");
     fun2();
 }
 

 