/* Program to calculate and print value of Pi.
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    //Local declaration
    int n=0,k=1;
    float p=4,r=0;
    //Statements
    for(int i=3;i<=89;i=i+2)
    {
        r=i;
        if(k%2!=0)
        p=p-(4/r);
        else
        p=p+(4/r);
        printf("%d\t%f",k,p); 
        k++; 
        r=r+2;  
    }    
    return 0;
}//main