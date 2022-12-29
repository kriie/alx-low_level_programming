#include <stdio.h>

/**
 * main - Prints the size of the different C types
 * Return: 0
 */

int main(void)
{

printf("Size of  char: %d bytes(s)\n", sizeof(char));
printf("Size of  int: %d bytes(s)\n", sizeof(int)); 
printf("Size of  long int: %d bytes(s)\n", sizeof(long int)); 
printf("Size of  long long int: %d bytes(s)\n", sizeof(long long int)); 
printf("Size of  char: %d bytes(s)", sizeof(float)); 

return (0);
}
