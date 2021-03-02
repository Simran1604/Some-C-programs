/* Program to print infinite multiples of 3
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    for(int i=3;;i=i+3)
    printf("%d ",i);
    return 0;
}//main
/* OUTPUT 
Infinite loop of multiples of 3
*/