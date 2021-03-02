/* Program to print diameter,area and circumference of a circle
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    float r,pi=3.14159;                           //storing value of pi
    printf("Enter radius of the circle\n");
    scanf("%f",&r);                               //to input the radius of circle
    float d=2*r;                                  //calculating diameter
    float c=2*r*pi;                               //calculating circumference
    float a=pi*r*r;                              //calculating area
    printf("Diameter : %f\n",d);
    printf("Area : %f\n",a);
    printf("Circumference : %f\n",c);  
    return 0;
}//main
/*
INPUT : 

8.9

OUTPUT :

Enter radius of the circle
Diameter : 17.799999
Area : 248.845337
Circumference : 55.920303

INPUT : 

7.5

OUTPUT :

Enter radius of the circle
Diameter : 15.000000
Area : 176.714447
Circumference : 47.123852

*/