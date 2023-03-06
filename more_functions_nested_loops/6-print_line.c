#include "main.h"

/**
 *
 *
 */

void print_line(int n)
{	
	int counter = 0;
	
	for (;counter < n; counter++)
	{
	
		if (n > 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar('\n');
		}
	
	}
	_putchar('\n');
}
