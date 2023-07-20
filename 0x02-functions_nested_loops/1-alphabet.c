#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: _putchar - writes the character c to stdout
 *
 * Return: Always 0(Success)
 */

void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
return(0);
}
