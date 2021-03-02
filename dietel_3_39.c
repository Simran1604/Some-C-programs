/* Program to print checkerdboard pattern with asterisks
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    for(int i=1;i<=8;i++)           //for loop for rows
   {
        for(int j=1;j<=16;j++)      //for loop for columns
        {
            if(i%2 !=0)             //to check if the row is even or odd
            {
              if(j%2 !=0)           //to check if the column is odd or even
              printf("%s","*");
              else
              printf("%s"," "); 
            }  
            else
            {
                if(j%2 !=0)         ////to check if the column is odd or even
              printf("%s"," ");
              else
              printf("%s","*"); 
            }
                     
        }
        puts("");
   }
    return 0;
}//main

/* OUTPUT :
* * * * * * * * 
 * * * * * * * *
* * * * * * * * 
 * * * * * * * *
* * * * * * * * 
 * * * * * * * *
* * * * * * * * 
 * * * * * * * *
*/