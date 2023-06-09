#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: string to be converted to integer
 * Return: 0 if there is no integer or the string
 */

int _atoi(char *s)
{
	int res, sign, i, no_num;

	i = 0;
	sign = 1;
	res = 0;
	no_num = 1;

	while (s[i])
	{
		if (s[i] >= '1' && s[i] <= '9')
		{
			no_num = 0;
			break;
		}
		i++;
	}
	i = 0;

	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '-' 
			|| s[i] == '+'|| (s[i] >= 'a' && s[i] <= 'z'
				) || (s[i] >= 'A' && s[i] <= 'Z'))
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	if (no_num == 1)
		return (0);
	else
		return (res * sign);
}
