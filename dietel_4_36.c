/* Program to show working using and without using break statements
 Name- Simran Pattnaik
 Date-21/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    int n = 4, a = 1;
 int i, c;
 for (i = 1; i <= n; i++) 
 {
    for (c = 1; c <= i; c++) 
    {
         printf("%d", a);
         a++;
    }//for
 printf("\n");
 }//for
    return 0;
}//main

/*
OUTPUT :

1
23
456
78910

*/