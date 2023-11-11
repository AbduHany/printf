#include "main.h"

/**
 * intToStr - Convert integer to char
 * @x: Integer to be converted
 * @flag: Flag if the number is negative or not
 * @negativeSignPrinted: Flag if the negative sign is printed or not
 *
 * Return: Returns the number of characters printed, including the negative sign if the number is negative
 */
int intToStr(int x, int flag, int negativeSignPrinted)
{
    int converted = 0, rem, checker;
    static int counter = 0;
    char c;

    if (x < 0)
    {
        flag = 1;
        checker = -x;
    }
    else if (x == 0)
    {
        writechar('0');
        return 1;
    }
    else
    {
        flag = 0;
        checker = x;
    }

    if (flag == 1 && !negativeSignPrinted)
    {
        writechar('-');
        negativeSignPrinted = 1;
        counter++;
    }

    
    while (checker > 0)
    {
        rem = checker % 10;
        converted = converted * 10 + rem;
        checker = checker / 10;
    }

   
    while (converted > 0)
    {
        rem = converted % 10;
        c = rem + '0';
        counter += writechar(c);
        converted = converted / 10;
    }

    return counter;
}
