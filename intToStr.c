#include "main.h"
/**
 * intToStr - int to char
 * @x : integer to be convereted
 *
*/
int intToStr(int x)
{
	int converted = 0, rem;
	char c;

	if (x > 0)
	{
		rem = x % 10;
		converted = rem + 48;
		c = converted;
		x = x / 10;
		intToStr(x);
		return (writechar(c));
	}
	else
	{
		return (0);
	}
}
