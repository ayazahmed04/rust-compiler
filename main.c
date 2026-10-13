#include <stdio.h>
#include <math.h>
#include "process.h"

double kahn (int x ,int  y ) { 
    return x + y ;
}

int main ()  
{
    add(5,5);
    multiply(5, 5 ) ;
    int x ; 
    int a  = x ; 
    int b = x; 
    int c = a + b; 
    printf("%d\n", c);
    printf("Tex Compiler \n");
    
    kahn(3 , 4 ) ;
    return 0;
}


