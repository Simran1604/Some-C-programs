/* Program to calculate new credit limits of customers
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    float c,b;
    for(int i=0;i<3;i++)
    {
        char a [12];
        printf("Enter your Account Number.\n");
        scanf("%s",&a);                                              //taking account number as input
        printf("Enter your credit limit before recession.\n");
        scanf("%f",&c);                                              //taking the credit limit as input
        printf("Enter your cureent balance.\n");
        scanf("%f",&b);                                              //taking the current balance as input
        c=c/2;
        printf("Your new credit limit is : %f\n",c);
        if(b>c)                                                      //checking if current balance exceeds credit limit
        printf("Your current balance exceeds the new credit limit.\n\n");
    }
    return 0;
}//main
/*
  TEST CASE :

Enter your Account Number.
"BH2345678934"
Enter your credit limit before recession.
75000.00
Enter your cureent balance.
456780.00
Your new credit limit is : 37500.000000
Your current balance exceeds the new credit limit.

Enter your Account Number.
"RK5678432906"
Enter your credit limit before recession.
56500.00
Enter your cureent balance.
15678.00
Your new credit limit is : 28250.000000
Enter your Account Number.
"RT4567321896"
Enter your credit limit before recession.
50000.00
Enter your cureent balance.
67250.00
Your new credit limit is : 25000.000000
Your current balance exceeds the new credit limit.
*/ 
