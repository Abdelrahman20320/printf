#include <unistd.h>
/**
 * _putchar - Write a character to stdout
 *
 * @c: The character to print
 *
 * Return: Number of characters written
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
