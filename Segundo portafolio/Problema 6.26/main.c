#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y;
   int n = 6;

   for(x = 0; x < n; x++)
   {
       for(y = 0; y < x; y++)
        putchar('*');
       putchar('\n');
   }

    return 0;
}
