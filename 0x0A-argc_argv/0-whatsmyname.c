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
(void) argc;
printf("%s\n", *argv);

return (0);
}
