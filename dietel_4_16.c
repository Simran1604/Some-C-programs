/* Program to print triangle patterns with asrerisks
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    for(int i=0;i<10;i++)           //for loop for first pattern
    {
        for(int j=0;j<i;j++)
        {
            printf("%s","*");
        }
        puts("");
    }
     printf("\n");

    for(int i=10;i>0;i--)          //for loop for second pattern
    {
        for(int j=0;j<i;j++)
        {
            printf("%s","*");
        }
       puts("");
    }
     printf("\n\n");

    for(int i=0;i<10;i++)           //for loop for third pattern
    {
        for(int j=0;j<i;j++)
        {
            printf("%s"," ");
        }
        for(int k=i;k<10;k++)
        {
            printf("%s","*");
        }
       puts("");
    }
    printf("\n\n");

    for(int i=10;i>0;i--)         //for loop for fourth pattern
    {
        for(int j=0;j<i;j++)
        {
            printf("%s"," ");
        }
        for(int k=i;k<10;k++)
        {
            printf("%s","*");
        }
       puts("");
    }
    return 0;
}//main
/*
OUTPUT : 


*        
**       
***      
****     
*****    
******   
*******  
******** 
*********

**********
*********
********
*******
******
*****
****
***
**
*


**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *



         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
*/