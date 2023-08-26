#include <stdio.h>
#include <stdarg.h>

/**
 *print_all-This function prints a formatted list of arguments
 *@format:The format string specifying the types of arguments to be printed.
 *Return:void
 */
void print_all(const char * const format, ...)
{
	int i = 0, num, is_first;
	char c, *s;
	float f;

	va_list args;

	va_start(args, format);
	is_first = 1;

	while (format[i] != '\0')
	{

		if (format[i] == 'c')
		{
			if (!is_first)
				printf(", ");

			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			if (!is_first)
				printf(", ");
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			if (!is_first)
				printf(", ");
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			if (!is_first)
			{
				printf(", ");
				s = va_arg(args, char *);
			}
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		is_first = 0;
		i++;
	}
	va_end(args);
	printf("\n");
}
