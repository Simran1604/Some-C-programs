/* Program to calculate and print compound interest.
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    //Local declaration
    int t,p,r;
    //Statements
    printf("Enter principal.\n");
    scanf("%d",&p);
    printf("Enter number of years.\n");
    scanf("%d",&t);
    printf("Enter rate of interest.\n");
    scanf("%d",&r);
    float s=1.0+r/100.0;
    float compound=p*(pow(s,t));
    
    printf("The compound interest is : $%0.2f cents.",compound);
    return 0;
}//main
/* 
TEST CASE 1:

Enter principal.
600
Enter number of years.
4
Enter rate of interest.
4
The compound interest is : $701.92 cents.

TEST CASE @:

Enter principal.
400
Enter number of years.
2
Enter rate of interest.
4
The compound interest is : $432.64 cents.
*/