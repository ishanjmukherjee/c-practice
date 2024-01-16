#include <stdio.h>
#include <stdbool.h>

int main(void) {
   int inputYear;
   bool isLeapYear = false;
   
   scanf("%d", &inputYear);
   if (inputYear % 400 == 0)
   {
       isLeapYear = true;
   }
   else if (inputYear % 100 == 0)
   { // isLeapYear is already False
   }
   else if (inputYear % 4 == 0)
   {
       isLeapYear = true;
   }
   if (isLeapYear)
   {
       printf("%i - leap year\n", inputYear);
   }
   else
   {
       printf("%i - not a leap year\n", inputYear);
   }

   return 0;
}
