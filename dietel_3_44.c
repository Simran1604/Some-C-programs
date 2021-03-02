/* Program to determine if the 3 sides of a triangle forma right triangle
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
    if(g==s1 && (g*g==s2*s2+s3*s3))
    printf("It is a right-angled triangle.");
    else 
    if(g==s2 && (g*g==s1*s1+s3*s3))
    printf("It is a right-angled triangle.");
    else 
    if(g==s3 && (g*g==s1*s1+s2*s2))
    printf("It is a right-angled triangle.");
    else 
    printf("It is not a right-angled triangle.");
    return 0;
}//main
/* TEST CASE 1

Enter the first integer side of the triangle.
5
Enter the second integer side of the triangle.
4
Enter the third integer side of the triangle.
3
It is a right-angled triangle.

TEST CASE 2

Enter the first integer side of the triangle.
7
Enter the second integer side of the triangle.
8
Enter the third integer side of the triangle.
9
It is not a right-angled triangle.

*/