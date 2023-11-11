#include "main.h"

/**
 * intToStr - Convert integer to char
 * @x: Integer to be converted
 * @flag: Flag if the number is negative or not
 * @negativeSignPrinted: Flag if the negative sign is printed or not
 *
 * Return: Returns the number of characters printed,
 * including the negative sign if the number is negative
 */
int intToStr(int x, int flag, int negativeSignPrinted)
{
	int digits[10], i;
	int numDigits = 0, rem;
	static int counter = 1;
	char c;

	if (x < 0)
	{
		flag = 1;
		x = -x;
	}
	else if (x == 0)
	{
		writechar('0');
		return (1);
	}
	else
	{
		flag = 0;
	}

	if (flag == 1 && !negativeSignPrinted)
	{
		writechar('-');
		negativeSignPrinted = 1;
		counter++;
	}
	while (x > 0)
	{
		rem = x % 10;
		digits[numDigits++] = rem;
		x = x / 10;
	}
	for (i = numDigits - 1; i >= 0; i--)
	{
		c = digits[i] + '0';
		counter += writechar(c);
	}
	return (counter - 1);
}
