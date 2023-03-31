#include <stdio.h>

/*

This program demonstrates a magic trick with pointers.

The goal is to modify the value of n through a pointer to n.
*/
int main(void)
{
int n;
int *p;

n = 98;
p = &n;

/* Change the value of n through the pointer p */
*p = 402;

printf("n = %d\n", n);

return (0);
}
