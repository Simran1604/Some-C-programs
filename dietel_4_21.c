/* Program to convert and print characters for the ASCII values.
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    char ch;
    int k=0;
    for(int i=0;i<128;i++)               //for loop to print the characters
    {
        ch=i;
        if(k<10)                        //to check for 10 elements in a line
        {
            printf("%c ",ch);
            k++;
        }
        else
        {
            puts("");                   //going to next line
            k=0;
        }
        
    }

    return 0;
}//main
/*
OUTPUT :
     
! " # $ % & ' ( ) * 
, - . / 0 1 2 3 4 5 
7 8 9 : ; < = > ? @ 
B C D E F G H I J K 
M N O P Q R S T U V 
X Y Z [ \ ] ^ _ ` a 
c d e f g h i j k l 
n o p q r s t u v w 
y z { | } ~ 
*/