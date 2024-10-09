em#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

	    
void print_char_11x16(char c)
{
  c -= 0x20;
  for (int col = 0; col < 11; col++) {
     unsigned short rowBits = font_11x16[c][col];
      for (int row = 0; row < 16; row++) {
	unsigned short colMask = 1 << (15 - row);
	putchar((rowBits & colMask) ? '*' : ' ');
      }
      putchar('\n');
  }
    putchar('\n');
}
