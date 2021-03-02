/* Program to print outputs of expressions.
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    for(int i=1;i<=256;i++)
    {
        printf("%d \t",i);
        int k=i,r=0,a=0;
        char s [50];
        while(k>0)
        {
            r=k%2;
            s[a]=r;
            k=k/2;
            a++;
        }
       int l=sizeof(s);
        //for(int k=l-1;k>=0;k--)
        printf("%c",s);
        printf("%o\t%X\n",i,i);
    }
    return 0;
}//main