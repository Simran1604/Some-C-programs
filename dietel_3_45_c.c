/* Program to print value of e^x
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    int x,l;
    float fac=1.0,e=1;
    printf("Enter a value\n");
    scanf("%d",&x);
    printf("Enter limit of approximation\n");
    scanf("%d",&l);
    for(int i=1;i<=l;i++)
    {
         for(int j=1;j<=i;j++)                 //calculating factorial of each integer
         fac=fac*j;             
          e=e+(x/fac);
          x=x*x;                         //calculating value of e
          fac=1.0;
       
    }
    printf("Approximated value of e is : %0.2f",e);
    return 0;
}//main