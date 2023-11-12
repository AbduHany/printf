#include "main.h"
/**
 * intToStr - Convert integer to char
 * @x: Integer to be converted
 *
 * Return: Returns the number of characters printed,
 * including the negative sign if the number is negative
 */
int intToStr(int x)
{
	int len = 0, i = 0, temp, rem, negative_flag = 0, counter = 0;
	char *ptr;
	/*checking the value of x*/
	if (x < 0)
	{
		negative_flag = 1;
		x = -x;
	}
	else if (x == 0)
	{
		writechar('0');
		return (1);
	}
	/* finding length and allocatin dynamic memory for ptr*/
	temp = x;
	while (temp)
	{
		temp = temp / 10;
		len++;
	}
	ptr = malloc(sizeof(char) * (len));
	/*intializing values fo rthe pointer*/
	while (x)
	{
		rem = x % 10;
		ptr[i] = rem + '0';
		i++;
		x = x / 10;
	}
	for (i = (len - 1); i >= 0; i--) /*printing the string in ptr*/
	{
		if (negative_flag == 1)
		{
			counter = counter + writechar('-');
			negative_flag = 0;
		}
		counter = counter + writechar(ptr[i]);
	}
	free(ptr);
	return (counter);
}
