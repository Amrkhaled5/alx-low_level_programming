/**
*main - function prints text as output
*
*Return:return 0
*/

#include "main.h"

int main(void)
{
	char s[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
