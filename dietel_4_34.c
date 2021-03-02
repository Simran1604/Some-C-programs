/* Program to print numbers 1 to 10 using while loop and do..while loop.
 Name- Simran Pattnaik
 Date-21/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    //Local Declaration
    int k=1;
    //using do..while loop
    do
    {
        printf("%d ",k++);
    } while (k<=10);

    puts("\n");

    k=1;//restoring value of k
    while(k<=10)
    {
        printf("%d ",k++);
    }
    //using while loop
    
    return 0;
}//main

/*
OUTPUT : 

1 2 3 4 5 6 7 8 9 10 

1 2 3 4 5 6 7 8 9 10 

*/