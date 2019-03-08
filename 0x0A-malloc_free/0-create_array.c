/* 0. create an array of characters */
#include "holberton.h"
#include <stdio.h>

/**
 * create_array - create an array using malloc()
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	int x = 0;


