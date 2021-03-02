/* Program to show working using and without using break statements
 Name- Simran Pattnaik
 Date-21/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    //Local Declaration
    int k=0,r=2;

    //using break statement
    while(k<10)
    {
        if(r==6)
        break;
        else 
        printf("%d ",k);
        r++,k++;
    }
    puts("\n");
    r=2,k=0;
    //without using break
    while(k<10 && r !=6)
    {
        printf("%d ",k);
        k++,r++;
    }
    return 0;
}//main

/* OUTPUT :

0 1 2 3 

0 1 2 3 

*/