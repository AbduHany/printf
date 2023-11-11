#include "main.h"
/**
 * intToStr - int to char
 * @x : integer to be convereted
 * Return: returns the number of the charecters printed including
 * the negative sign if the sign is neagtive
*/
<<<<<<< HEAD
int intToStr(signed int x)
=======
int intToStr(int x, int flag, int negativeSignPrinted)
>>>>>>> ae4c29e3d74937e25691ab19725e86595a5e740c
{
	unsigned int number = x;

	if (x < 0)
	{
		writechar('-');
		number = -number;
	}
<<<<<<< HEAD
	if ((number / 10) > 0)
=======
	else if (x == 0)
	{
		writechar('0');
		return (1);
	}
	else
>>>>>>> ae4c29e3d74937e25691ab19725e86595a5e740c
	{
		intToStr(number / 10);
	}
<<<<<<< HEAD
	writechar((number % 10) + 48);
=======

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
>>>>>>> ae4c29e3d74937e25691ab19725e86595a5e740c
}
