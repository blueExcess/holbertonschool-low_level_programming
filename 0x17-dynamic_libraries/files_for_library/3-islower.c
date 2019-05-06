/* 3. write function to mimic 'islower()' command */

/**
 * _islower - determine if character is lower case
 * @c: character to test
 *
 * Return: 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
