#include "main.h"
/**
 * print_alphabet_x10 - function that print 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int line; 
for (line = 0; line <= 9; line++)
{
  char ch;
for (ch = 'a' ; ch <= 'z'; ch++)
_putchar (ch);
_putchar ('\n');  
}
}

