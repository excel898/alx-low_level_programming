#include<stdio.h>
/**
 * main - prints the size of various type
 * Return: returns the value 0 if exited properly, non-zero otherwise
 */
int main (void)
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
printf("Size of float: %d byte(s)\n", sizeof(float));
return (0);
}
