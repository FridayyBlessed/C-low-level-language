nes (11 sloc)  192 Bytes

#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: content is to be copied
 *@to: string
 *Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
