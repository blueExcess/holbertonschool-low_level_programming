/* 8. create function to change string to rot13 */

/**
 * rot13 - encode string using rot13
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */
char *rot13(char *str)
{
	char *s = str;
	char const *rot =
		"NOPQRSTUVWXYZABCDEFGHIJKLM123456nopqrstuvwxyzabcdefghijklm";

	for (; *s; s++)
		if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
			*s = rot[*s - 'A'];
	return (str);
}
