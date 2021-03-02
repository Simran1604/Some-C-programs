/* Program to count a print the number of 9s in the digitd of a number
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    long long n;
    int k=0,r;
    printf("Enter a number of 5 digits or fewer\n");
    scanf("%d",&n);                                    //taking input fromuser
    while(n>0)
    {
        r=n%10;                                       //extracting the last digit of the number
        if(r==9)                                     //checking if the last digit is 9
        k++;
        n=n/10;
    }
    printf("Number of 9s in the given number :%d",k);     //printing the number of 9s
    return 0;
}//main
/* INPUT: 89769         OUTPUT : Enter a number of 5 digits or fewer
                                 Number of 9s in the given number :2
   INPUT: 9896          OUTPUT : Enter a number of 5 digits or fewer
                                 Number of 9s in the given number :1
   INPUT : 67543        OUTPUT : Enter a number of 5 digits or fewer
                                 Number of 9s in the given number :0                       
*/