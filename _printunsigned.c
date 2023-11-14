#include "main.h"
/**
 * _printui - prints unsigned decimal ineteger
 * @args: the argument it gets to print
 * Return: returns the number of charecters printed
*/

int _printui(va_list args)
{
	unsigned int x;
	int counter = 0;

	x = va_arg(args, unsigned int);


	counter = counter + unsignedToStr(x);
	return (counter);
}
