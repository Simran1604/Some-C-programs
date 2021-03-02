/* Program to print modified diamond pattern 
 Name- Simran Pattnaik
 Date-19/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    //Local declartion
    int n=0;
    printf("Enter an odd integer within 1 to 19.\n");
    scanf("%d",&n);
    int k=n/2,r=n/2,p=n/2;
    for(int i=0;i<(n/2+1);i++)
    {
        for(int j=0;j<n;j++)
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

        for(int i=0;i<(n/2+1);i++)
    {
        for(int j=0;j<n;j++)
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

/*
TEST CASE 1 : 

Enter an integer within 1 to 19.
11
     *     
    ***    
   *****   
  *******  
 ********* 
***********
 ********* 
  *******  
   *****   
    ***    
     *     

   TEST CASE 2 : 

   Enter an odd integer within 1 to 19.
17
        *
       ***
      *****
     *******
    *********
   ***********
  *************
 ***************
*****************
 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *
  
*/