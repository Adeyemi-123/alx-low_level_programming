#include "3-calc.h"

/**
 */

int (*get_op_func(char *s))(int, int)
{
	if (s != '+' || s != '-' || s != '*' || s != '/' || s != '%')
		return (NULL);
}
