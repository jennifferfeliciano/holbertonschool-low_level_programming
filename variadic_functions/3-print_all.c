#include <stdio.h>
#include <stdarg.h>

/**
 *print_all-This function prints a formatted list of arguments
 *@format:The format string specifying the types of arguments to be printed.
 *Return:void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int num;
	char c;
	char *s;
	float f;
	int isFirst;

	va_list args;

	va_start(args, format);

	isFirst = 1;

	while (format[i] != '\0')
	{
		char formatChar = format[i];
		int formatMatched = (formatChar == 'c') | (formatChar == 'i') | (formatChar == 'f') | (formatChar == 's');
		int isStringNil = 0;

		if (formatMatched)
		{
			if (!isFirst)
			{
				printf(", ");
			}

			switch (formatChar)
			{
				case 'c':
					c = (char)va_arg(args, int);
					printf("%c", c);
					break;

				case 'i':
					num = va_arg(args, int);
					printf("%d", num);
					break;

				case 'f':
					f = (float)va_arg(args, double);
					printf("%f", f);
					break;

				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
					{
						isStringNil = 1;
					}
					if (s != NULL)
					{
						printf("%s", s);
					}
					break;
			}

			if (isStringNil)
			{
				printf("(nil)");
			}

			isFirst = 0;
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
