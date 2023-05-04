#include"main.h"
#include<unistd.h>
/**
 * _pucher - writes the character c to stdout
 * @cthe character to print
 *
 * REturn:on succes 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
