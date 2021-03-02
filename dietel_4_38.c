/*Program to print the 12 days of Christmas song.
Name- Simran Pattnaik
 Date-21/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    for (int i=1;i<=12;i++)
    {
        printf("On the "); 
        switch(i)
        {
            case 1:printf("first");
            break;
            case 2:printf("second");
            break;
             case 3:printf("third");
            break;
             case 4:printf("fourth");
            break;
             case 5:printf("fifth");
            break;
             case 6:printf("sixth");
            break;
             case 7:printf("seventh");
            break;
             case 8:printf("eighth");
            break;
             case 9:printf("ninth");
            break;
             case 10:printf("tenth");
            break;
             case 11:printf("eleventh");
            break;
             case 12:printf("twelfth");
            break;
        }//switch 1

        printf(" day of Christmas\nMy good friends brought to me\n");
        switch(i)
        {
            case 12:printf("All their good wishes\n");
            case 11:printf("Gifts for one and all\n");
            case 10:printf("Some mistletoe\n");
            case 9:printf("A guardian angel\n");
            case 8:printf("Gold and silver tinsel\n");
            case 7:printf("Candles a glowing\n");
            case 6:printf("Little siilver bells\n");
            case 5:printf("A shining star\n");
            case 4:printf("Four coloured lights\n");
            case 3:printf("Three boughs of holly\n");
            case 2:printf("Two candy canes\n");
            case 1:printf("A song and a Christmas tree.\n");
        }//switch 2
        puts("\n");
        }//for
    return 0;
}//main
/*
OUTPUT :

On the first day of Christmas 
My good friends brought to me 
A song and a Christmas tree.  


On the second day of Christmas
My good friends brought to me 
Two candy canes
A song and a Christmas tree.  


On the third day of Christmas 
My good friends brought to me 
Three boughs of holly
Two candy canes
A song and a Christmas tree.


On the fourth day of Christmas
My good friends brought to me
Four coloured lights
Three boughs of holly
Two candy canes
A song and a Christmas tree.


On the fifth day of Christmas
My good friends brought to me
A shining star
Four coloured lights
Three boughs of holly
Two candy canes
A song and a Christmas tree.


On the sixth day of Christmas
My good friends brought to me
Little siilver bells
A shining star
Four coloured lights
Three boughs of holly
Two candy canes
A song and a Christmas tree.


On the seventh day of Christmas
My good friends brought to me
Candles a glowing
Little siilver bells
A shining star
Four coloured lights
Three boughs of holly
Two candy canes
A song and a Christmas tree.


On the eighth day of Christmas
My good friends brought to me
Gold and silver tinsel
Candles a glowing
Little siilver bells
A shining star
Four coloured lights
Three boughs of holly
Two candy canes
A song and a Christmas tree.


On the ninth day of Christmas
My good friends brought to me
A guardian angel
Gold and silver tinsel
Candles a glowing
Little siilver bells
A shining star
Four coloured lights
Three boughs of holly
Two candy canes
A song and a Christmas tree.


On the tenth day of Christmas
My good friends brought to me
Some mistletoe
A guardian angel
Gold and silver tinsel
Candles a glowing
Little siilver bells
A shining star
Four coloured lights
Three boughs of holly
Two candy canes
A song and a Christmas tree.


On the eleventh day of Christmas
My good friends brought to me
Gifts for one and all
Some mistletoe
A guardian angel
Gold and silver tinsel
Candles a glowing
Little siilver bells
A shining star
Four coloured lights
Three boughs of holly
Two candy canes
A song and a Christmas tree.


On the twelfth day of Christmas
My good friends brought to me
All their good wishes
Gifts for one and all
Some mistletoe
A guardian angel
Gold and silver tinsel
Candles a glowing
Little siilver bells
A shining star
Four coloured lights
Three boughs of holly
Two candy canes
A song and a Christmas tree.

*/