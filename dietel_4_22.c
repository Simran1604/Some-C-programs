/* Program to calculate and print average grade of the class.
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    //Local Declaration
    int aCount=0,bCount=0,cCount=0,dCount=0,fCount=0,k=0,sum=0;
    puts("Enter the letter grades.");
 puts("Enter the EOF character to end input.");
 int grade=0; // one grade

 // loop until user types end-of-file key sequence
 while (( grade=getchar()) !=EOF ) 
 {
     switch (grade)
     {

 // determine which grade was input
case 'A': // grade was uppercase A
 case 'a':// or lowercase a
 sum+=grade,k++;
 
 break;// necessary to exit switch

 case 'B':// grade was uppercase B
 case 'b':// or lowercase b
 sum+=grade,k++;
 break;

 case 'C':// sum+=graderade was uppercase C
 case 'c':// or lowercase c
sum+=grade,k++;
break;

 case 'D':// grade was uppercase D
 case 'd':// or lowercase d
 sum+=grade,k++;

break;

 case 'F':// grade was uppercase F
 case 'f':// or lowercase f
sum+=grade,k++;
 break;

 case '\n':
 case '\t':
 case ' ':
 break;

 default:printf("Wrong grade entered.Enter new grade.\n");
 break;
 }//switch

 }//while

 sum=sum/k;
 printf("Average=%d\n",sum);

return 0;

}//main

/*
OUTPUT :

Enter the letter grades.
Enter the EOF character to end input.
a
b
C
F
D
h
Wrong grade entered.Enter new grade.
A
B
c
D
f
c
^Z
Average=81

*/