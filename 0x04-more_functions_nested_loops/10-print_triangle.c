#include "main.h"

/**
 * print_triangles - entry point
 * Description: prints diagonals
 * @size:size of triangle
 */

void print_triangle(int size)
{
int row, hashes, spaces;

if (size <= 0)
{
_putchar ('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (spaces = size - row; spaces >= 1; spaces--)
{
_putchar (' ');
{
for (hashes = 1; hashes <= 1; hashes++)
{
_putchar ('#');
}
_putchar ('\n');
}
}
}
}
}
