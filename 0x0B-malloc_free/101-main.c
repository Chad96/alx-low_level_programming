#include "main.h"
#include "strtow.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_tab - Prints an array of strings
 *@tab: The array to print
 *
 *Return: nothing
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}
/**
 *main - Entry point
 *
 *Return: Always 0 on success
 */
int main(void)
{
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
