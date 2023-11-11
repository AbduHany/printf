#include "main.h"
/**
 * intToStr - int to char
 * @x : integer to be convereted
 * @flag: fla gif the number is negative or not
 * @negativeSignPrinted:: fag if negative sign is printed or not
 * Return: returns the number of the charecters printed including
 * the negative sign if the sign is neagtive
*/
int intToStr(int x, int flag, int negativeSignPrinted)
{
	int converted = 0, rem, checker, counter = 0;
	char c;

	if (x < 0)
	{
		flag = 1;
		checker = (x * (-1));
	}
	else if (x == 0)
	{
		writechar('0');
		return (1);
	}
	else
	{
		flag = 0;
		checker = x;
	}

	if (checker > 0)
	{
		rem = checker % 10;
		converted = rem + 48;
		c = converted;
		checker = checker / 10;
		if (flag == 1 && !negativeSignPrinted)
		{
			writechar('-');
			negativeSignPrinted = 1;
			counter++;
		}
		intToStr(checker, flag, negativeSignPrinted);
		counter = counter + (writechar(c));
	}

	return (counter);
}
