/* Program to calculate and print total retail price of products sold in a week.
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    int n,q;
    float price=0.0,tp=0.0;
    for(int i=0;i<7;i++)
    {

    printf("Enter product number and quantity sold in a day.\n");
    scanf("%d %d",&n,&q);                                          //taking input of product type and quantity sold in a day
    switch(n)
    {
        case 1: price=2.98;
                break;
        case 2: price=4.50;
                break;
        case 3: price=9.98;
                break;
        case 4: price=4.49;
                break;
        case 5: price=6.87;
                break;
        default: printf("Invalid input.\n");
    }
    price=price*q;                                                //calculating retail price
    tp+=price;                                                    //calculation total retail price
    }
    printf("Total retail price of the week : $%0.2f",tp);
    return 0;
}//main
/* TEST CASE :

Enter product number and quantity sold in a day.
2
20
Enter product number and quantity sold in a day.
5
6
Enter product number and quantity sold in a day.
1
90
Enter product number and quantity sold in a day.
8
50
Invalid input.
Enter product number and quantity sold in a day.
3
7
Enter product number and quantity sold in a day.
4
78
Enter product number and quantity sold in a day.
5
89
Total retail price of the week : $14840.93
*/