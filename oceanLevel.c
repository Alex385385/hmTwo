#include <stdio.h>

int main()
{
   double risingOcean = 1.5;
   double oceanLevelYear5 = risingOcean * 5;
   double oceanLevelYear7 = risingOcean * 7;
   double oceanLevelYear10 = risingOcean * 10;

   printf("In 5 years the ocean level will be: %.1f mm\n", oceanLevelYear5);
   printf("In 7 years the ocean level will be: %.1f mm\n", oceanLevelYear7);
   printf("In 10 years the ocean level will be: %.1f mm\n", oceanLevelYear10);
}
