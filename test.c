#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	_printf("%d, %d\n", 2348, 'A');
	_printf("%c, %c\n", 'B', 55);
	_printf("%s, test num: %d ... checking %% %s %c%c%c more checking %% \n%%", "test string", 1234, "random check", 'a', 'n', 'd');

return (0);
}
