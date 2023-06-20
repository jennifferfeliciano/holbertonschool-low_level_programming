#include <stdio.h>
#include <stdlib.h>

/**
 *main- Entry point
 *Return: Always 0
 */

int main(void)
{
        char letter = 'z';

        for (; letter >= 'a'; letter--)
		putchar(letter);
        putchar('\n');
        return (0);
}

