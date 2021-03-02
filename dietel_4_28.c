/* Program to calculate and print weekly paycheck of employees.
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    //Local variables
    int p,n,h,k;
    float s,m,t,w,salary,r;                                        
    //Statements
    printf("Enter your passcode.\n");
    scanf("%d",&p);
    switch(p)
    {
        case 1:printf("Enter weekly salary of manager.\n");     //case 1 for manager's salary calculation
               scanf("%f",&m);
               printf("Weekly salary of manager is : $%0.2f\n",m);
               break;

        case 2:printf("Enter the hourly wage of hourly workers.\n");  //case 2 for hourly worker's salary calculation
               scanf("%f",&w);
               printf("Enter the hours worked in a week.\n");
               scanf("%d",&h); 
               if(h<40)
               salary=h*w;
               else 
                {
                    r=h/40.0;
                    k=h%40;
                    salary =(r*40*w)+(1.5*w*k);
                }
               printf("Salary of the week for the hourly worker is : $%0.2f\n",salary);
               break;

        case 3: printf("Enter your gross weekly sales.\n");         //case 3 for commission worker's salary calculation
                scanf("%f",&s);
                float sal=250.0+(5.7/100.0)*s;
                printf("Weekly salary of the commission worker is : $%0.2f \n",sal);
                break;  

        case 4: printf("Enter the wage for the piece.\n");                 //case 4 for pieceworker's salary calculation
                scanf("%f",&t);
                printf("Enter number of pieces made in the week.\n");
                scanf("%d",&n);
                printf("Weeky salary of the pieceworker is : $%0.2f\n",t*n);
                break;
        default: printf("Invalid passcode entered\n") ;
                 break;
    }
    return 0;
}//main
/*
TEST CASES :

Enter your passcode.
1
Enter weekly salary of manager.
4560.0
Weekly salary of manager is : $4560.00

2
Enter the hourly wage of hourly workers.
560.0
Enter the hours worked in a week.
56

Enter your passcode.
2
Enter the hourly wage of hourly workers.
670.0
Enter the hours worked in a week.
34
Salary of the week for the hourly worker is : $22780.00

Enter your passcode.
3
Enter your gross weekly sales.
7890.0
Weekly salary of the commission worker is : $699.73

Enter your passcode.
4
Enter the wage for the piece.
67.0
Enter number of pieces made in the week.
789
Weeky salary of the pieceworker is : $52863.00
*/