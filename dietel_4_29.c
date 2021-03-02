/* Program to compare De Morgan's 
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    //Local Declaration
    int x=5,y=6,a=4,b=4,g=5,i=2,j=8;
    //Statements
    printf("Statement 1.\n\n");
    printf("(x>=5) && (y<7) : %d\n\n",((x>=5) && (y<7)));
    printf("(!(x < 5) && !(y >= 7) : %d\n\n",((!(x < 5) && !(y >= 7))));
    printf("Statement 2.\n\n");
    printf("!(a == b) || !(g != 5) : %d\n\n",(!(a == b) || !(g != 5)));
    printf("(a==b) && (g!=b) : %d\n\n",(a==b) && (g!=b));
    printf("Statement 3.\n\n");
    printf("!((x <= 8) && (y > 4)) : %d\n\n",(!((x <= 8) && (y > 4))));
    printf("(x>8) || (y<=4) : %d\n\n",((x>8) || (y<=4)));
    printf("Statement 4.\n\n");
    printf("!((i > 4) || (j <= 6)) : %d\n\n",(!((i > 4) || (j <= 6))));
    printf("(i<=4) && (j>6) : %d\n\n",((i<=4) && (j>6)));
    return 0;
}//main
/* 
OUTPUT : 

Statement 1.

(x>=5) && (y<7) : 1       

(!(x < 5) && !(y >= 7) : 1

Statement 2.

!(a == b) || !(g != 5) : 1

(a==b) && (g!=b) : 1

Statement 3.

!((x <= 8) && (y > 4)) : 0

(x>8) || (y<=4) : 0

Statement 4.

!((i > 4) || (j <= 6)) : 1

(i<=4) && (j>6) : 1

*/