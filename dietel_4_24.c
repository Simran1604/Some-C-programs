/* Program to print outputs of expressions.
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    //Local declaration
    int i=5,j=7,k=4,m=-2;
    //Statements
    printf("%d",i==5);
    printf("%d",j!=3);
    printf("%d",i>=5 && j<4);
    printf("%d",!m && k>m);
    printf("%d",!k || m);
    printf("%d",k-m<j || 5-j>=k);
    printf("%d",j+m<=i && !0);
    printf("%d",!(j-m));
    printf("%d",!(k>m));
    printf("%d",!(j>k));
    return 0;
}//main
/* 
OUTPUT :
1100111000
*/