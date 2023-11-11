#include "main.h"
/**
 * intToStr - int to char
 * @x : integer to be convereted
 * Return: returns the number of the charecters printed including
 * the negative sign if the sign is neagtive
*/
int intToStr(signed int x)
{
	unsigned int number = x;

	if (x < 0)
	{
		writechar('-');
		number = -number;
	}
	if ((number / 10) > 0)
	{
		intToStr(number / 10);
	}
	writechar((number % 10) + 48);
}
