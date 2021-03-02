/* Program to show working using and without using continue statements
 Name- Simran Pattnaik
 Date-21/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    
   for(int k=0;k<10;k++)
    {
        if(k==6)
        continue;
        printf("%d ",k);
    }//while with continue

   printf("\n");
  
    for(int i=0;i<10;i++)
    {
        if(i!=6)
        printf("%d ",i);
    }//while without continue  
    return 0;
}//main

/* 
OUTPUT :

0 1 2 3 4 5 7 8 9 
0 1 2 3 4 5 7 8 9 

*/