#include "main.h"

/**
 * is_printable - function to Evaluate if a char is printable
 * @c: arg Char to be evaluated.
 * Return: 1 if char is printable, else 0
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - fuction to append ascci in hexadecimal code to buffer
 * @buffer: arg array of chars.
 * @i: arg index at which to start appending.
 * @ascii_code:arg char in ASSCI CODE.
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit -function to verify if a char is a digit
 * @c: Char to be evaluated
 * Return: 1 if c is a digit, else 0
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - function to cast a number to the specified size
 * @num: arg number to be casted.
 * @size: arg number indicating the type to be casted.
 * Return: Casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - function to cast a number to the specified size
 * @num: arg number to be casted
 * @size: arg number indicating the type to be casted
 * Return: Casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
