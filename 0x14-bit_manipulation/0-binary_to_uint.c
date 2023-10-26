#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to an unsigned long integer.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int mask;

    if (index >= 64)  // Assuming a 64-bit system
        return -1;

    mask = 1UL << index;
    *n = *n | mask;

    return 1;
}


