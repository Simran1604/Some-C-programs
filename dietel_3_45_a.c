/* Program to print factorial of a given number
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    int n=0,fac=1;
    printf("Enter a non-negative integer\n");
    scanf("%d",&n);                              //taking a non-negative integer as input
    for(int i=1;i<=n;i++)                        //for loop to calculate factorial
    fac=fac*i;                                   //storing the factorial
    printf("Factorial of %d is : %d",n,fac);

    return 0;
}//main
/* TRIAL CASE 1:

Enter a non-negative integer
8
Factorial of 8 is : 40320

TRIAL CASE 2 :

Enter a non-negative integer
5
Factorial of 5 is : 120

TRIAL CASE 3:

Enter a non-negative integer
7
Factorial of 7 is : 5040

*/