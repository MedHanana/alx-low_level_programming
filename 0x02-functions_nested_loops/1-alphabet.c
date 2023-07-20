#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *			the alphabet a - z
 */

void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
