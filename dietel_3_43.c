/* Program to determine from 3 sides of a triangle if the sides can form a triangle
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    int s1,s2,s3,g=0;
    printf("Enter the first integer side of the triangle.\n");
    scanf("%d",&s1);                                              //input of first side
    printf("Enter the second integer side of the triangle.\n");
    scanf("%d",&s2);                                              //input of second side
    printf("Enter the third integer side of the triangle.\n");  
    scanf("%d",&s3);                                              //input of third side
    if(s1>s2)                                                     //checking for greatest side
    {
        if(s1>s3)
        g=s1;
        else 
        g=s3;
    }
    else
    {
        if(s2>s3)
        g=s2;
        else 
        g=s3;
    }
    if(g==s1 && s2+s3>g)                         //checking for validity of the triangle
    printf("It is a valid triangle.");
    else
    if(g==s2 && s1+s3>s2)                        //checking for validity of triangle
    printf("It is a valid triangle.");
    else
    if(g==s3 && s1+s2>s3)                       //checking for validity of triangle
    printf("It is a valid triangle.");
    else 
    printf("It is an invalid triangle.");

    return 0;
}//main
/* 
TRIAL CASE 1:

Enter the first integer side of the triangle.
3
Enter the second integer side of the triangle.
4
Enter the third integer side of the triangle.
5
It is a valid triangle.

TRIAL CASE :

Enter the first integer side of the triangle.
1
Enter the second integer side of the triangle.
2
Enter the third integer side of the triangle.
3
It is an invalid triangle.

*/