/* Program to print the bollean values of expressions.
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
# include <stdbool.h>
int main (void)
{
    //Local Declaration
    int a=0,b=0;
    bool x=(a && b);
    printf("%d && %d : %d\n",a,b,x);
    a=0,b=3;
    x=(a && b);
    printf("%d && %d : %d\n",a,b,x);
    a=4,b=0;
    x=(a && b);
    printf("%d && %d : %d\n",a,b,x);
    a=3,b=4;
    x=(a && b);
    printf("%d && %d : %d\n",a,b,x);
    a=0,b=0;
    x=(a || b);
    printf("%d || %d : %d\n",a,b,x);  
    a=0,b=5;
    x=(a || b);
    printf("%d || %d : %d\n",a,b,x);
    a=3,b=0;
    x=(a || b);
    printf("%d || %d : %d\n",a,b,x);
    a=4,b=4;
    x=(a || b);
    printf("%d || %d : %d\n",a,b,x);    
    return 0;
}//main

/*
OUTPUT : 

0 && 0 : 0
0 && 3 : 0
4 && 0 : 0
3 && 4 : 1
0 || 0 : 0
0 || 5 : 1
3 || 0 : 1
4 || 4 : 1

*/