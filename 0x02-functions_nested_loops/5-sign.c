#include "main.h"
  2 /**
  3 * print_sign -  prints the sign of a number.
  4 *@i: check character i
  5 * Return: 1 for postive num, -1 for negative num or zero for anything else
  6 */
  7 int print_sign(int i)
  8 {
  9         if (i > 0)
 10         {
 11         _putchar(43);
 12         return (1);
 13         }
 14         else if (i < 0)
 15         {
 16         _putchar(45);
 17         return (-1);
 18         }
 19         else
 20         {
 21         _putchar(48);
 22         return (0);
 23         }
 24 }
