#include <stdio.h>
#include "main.h"

/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
*
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	(void)argc;
	return (0);
}
