/* Program to show limitations of using floating-point values in monetary calculation
 Name- Simran Pattnaik
 Date-21/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    float a=1000000.0;
    a+=0.12f;
    printf("%.2f",a);
    return 0;
}//main
/*
OUTPUT

1000000.13

*/