#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* _printf - get the function of printf
* @format: functions to be printed
* @...: arguments undefined
*
* Return: standard formated output
*/

int _printf(const char *format, ...)
{
	va_list param;

	va_start(param, format);

	int len = strlen(format);

	for (int i = 0; i < len; i++)
	{
		if (format[i] == '%' && i != len - 1)
		{
		if (format[i + 1] == 'c')
		{
			char arg = va_arg(param, int);

			_putchar(arg);
			i++;
		}
			else if (format[i + 1] == 's')
		{
		 char *arg = (char *) va_arg(param, char *);
		while (*arg != '\0')
		{
			_putchar(*arg);
			arg++;
		}
		i++;
		}
		/*else if (format[i+1] == 'd')*/
	{
		/*int arg = va_arg(param, int);
		char intStr[64];

		itoa(arg, intStr, 10);

		int len = strlen(intStr);

		for (int j = 0; j < len; j++)
			_putchar(intStr[j]);

		i++;*/
	}
		else if (format[i + 1] == '%')
			{
			_putchar('%');
			i++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}

	va_end(param);

}
