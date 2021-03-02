/* Program to print bar-chart of given numbers
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    int n;
    for(int i=0;i<5;i++)
    {
        printf("Enter an integer between 1 and 30.\n");
        scanf("%d",&n);  
        if(n>1 && n<30)
     {                                  //taking a number as input
        for(int j=0;j<n;j++)
        {
            printf("*");                                   //printing the number of adjacent asterisks
        }
        puts("");                                          //printing a new line
    }
    else 
    printf("Invalid input.\n");
    }
    return 0;
}//main

/* TEST CASE 1 :

Enter an integer between 1 and 30.
23
***********************
Enter an integer between 1 and 30.
6
******
Enter an integer between 1 and 30.
19
*******************
Enter an integer between 1 and 30.
22
**********************
Enter an integer between 1 and 30.
1
*

TEST CASE 2 :

Enter an integer between 1 and 30.
23
***********************
Enter an integer between 1 and 30.
7
*******
Enter an integer between 1 and 30.
0
Invalid input.
Enter an integer between 1 and 30.
98
Invalid input.
Enter an integer between 1 and 30.
16
****************

*/