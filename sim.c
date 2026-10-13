#include <stdio.h>

void add (int x , int  y )  
{
    int z = x + y ; 


    printf("x : %i\n" , z );
    // if fun start with void than no return 
    // return x + y; 
}
void multiply (int x , int y ) 
{
    printf("muliply : %i\n" , x * y );
}

void divide (int x , int y ) 
{
    printf("divide : %i\n" , x * y );
}
void subtract (int x , int y ) 
{
    printf("subtract : %i\n" , x * y );
}
int main () { 
    
    add(5, 5 );
    subtract(5, 5 );
    multiply(5, 5 );
    divide(5, 5 );
    return 0 ;
}

