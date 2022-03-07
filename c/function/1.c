//Example of user defined function.
#include <stdio.h>
void hello();   //function prototype or function decleration
int main()
{
    hello();    //fuction call  
    return 0;

}
void hello()        //function definition
{
    printf("Hello world\n");
}

