#include <stdio.h>
 /**
  * main - This is where the program starts running
  * print the size of various types
  *
  * Return: Always 0 (Success)
  */
 int main(void)
 {
         /* Declaration section */
         int c = sizeof(char);
         int i = sizeof(int);
         int li = sizeof(long int);
         int ll = sizeof(long long int);
         int f = sizeof(float);
         printf("Size of a char: %d byte(s)\n", c);
         printf("Size of an int: %d byte(s)\n", i);
         printf("Size of a long int: %d byte(s)\n", li);
         printf("Size of a long long int: %d byte(s)\n", ll);
         printf("Size of a float: %d byte(s)\n", f);
         return (0);
 }
