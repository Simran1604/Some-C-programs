/* Program to letter grades with if else 
 Name- Simran Pattnaik
 Date-18/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    unsigned int aCount = 0;
 unsigned int bCount = 0;
 unsigned int cCount = 0;
 unsigned int dCount = 0;
 unsigned int fCount = 0;

 puts("Enter the letter grades.");
 puts("Enter the EOF character to end input.");
 int grade; // one grade

 // loop until user types end-of-file key sequence
 while (( grade=getchar()) !=EOF ) 
{
    if(grade=='a' || grade=='A')
    ++aCount;
    else
    {
    if(grade=='b' || grade=='B')
    ++bCount;
    else 
    {
    if(grade=='c' || grade=='C')
    ++cCount;
    else 
    {
    if(grade=='d' || grade=='D')
    ++dCount;
    else 
    {
    if(grade=='f' || grade=='F')
    ++fCount;
    else 
   { printf("Incorrect letter grade entered.\n");
    puts("Enter a new grade.\n");
   }

    }
    }
    }
    }
    fflush(stdin);
}//end of file
// output summary of results
 puts("\nTotals for each letter grade are:");
 printf("A: %u\n", aCount);
 printf("B: %u\n", bCount);
 printf("C: %u\n", cCount);
 printf("D: %u\n", dCount);
 printf("F: %u\n", fCount);
    return 0;
}//main
/* TEST CASES : 

Enter the letter grades.
Enter the EOF character to end input.
a
B
c
T
Incorrect letter grade entered.
Enter a new grade.

F
C
B
A
^Z

Totals for each letter grade are:
A: 2
B: 2
C: 2
D: 0
F: 1

*/