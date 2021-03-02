/* Program to print diamond pattern 
 Name- Simran Pattnaik
 Date-18/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    //Local declartion
    int k=9/2,r=9/2,p=9/2;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(j>=r && j<=p)
            printf("*");
            else 
            printf(" ");
        }//inner for
        printf("\n");
        r--,p++;
    }//outer for
    
    //updating values
    r+=2,p-=2;

        for(int i=0;i<5;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(j>=r && j<=p)
            printf("*");
            else 
            printf(" ");
        }//inner for
        printf("\n");
        r++,p--;
    }//outer for   
    return 0;
}//main

/* OUTPUT

    *    
   ***   
  *****  
 ******* 
*********
 ******* 
  *****  
   ***   
    *    
*/