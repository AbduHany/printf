#include "main.h"
/**
 * unsignedToStr - Convert unsigned integer to char
 * @x: Integer to be converted
 *
 * Return: Returns the number of characters printed,
 * including the negative sign if the number is negative
 */
int unsignedToStr(unsigned int x)
{
	int len = 0, i = 0, rem, counter = 0;
	unsigned int temp;
	char *ptr;

	if (x == 0)
		return (writechar('0'));
	temp = x;
	while (temp) /* finding length and allocatin dynamic memory for ptr*/
	{
		temp = temp / 10;
		len++;
	}
	if (len == 0)
		return (0);
	ptr = malloc(sizeof(char) * (len));
	if (ptr == NULL)
		return (-1);
	while (x) /*intializing values fo rthe pointer*/
	{
		rem = x % 10;
		ptr[i] = rem + '0';
		i++;
		x = x / 10;
	}
	for (i = (len - 1); i >= 0; i--) /*printing the string in ptr*/
	{
		counter = counter + writechar(ptr[i]);
	}
	free(ptr);
	return (counter);
}
