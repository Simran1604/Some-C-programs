/* Program to print estimated value of constant e
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    int l=0;
    float e=1.0,fac=1.0;
    printf("Enter limit of approximation\n");
    scanf("%d",&l);                            //input taken for limit
    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=i;j++)                 //calculating factorial of each integer
        fac=fac*j;             
       e=e+(1/fac);                           //calculating value of e
       fac=1.0;
    }
    printf("Approximated value of e is : %0.2f",e);
    return 0;
}//main
/* TEST CASE 1: 

Enter limit of approximation
8
Approximated value of e is : 2.72

TEST CASE 2: 
*/

