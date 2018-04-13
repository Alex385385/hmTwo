//Alejandro Millan
//Restuarant Bill
#include <stdio.h>

int main()
{
   double mealCharge = 86.67;
   double taxAmount = 0.0675 * mealCharge;
   double totalMealCost = taxAmount + mealCharge;
   double tip = totalMealCost * 0.2;
   double totalBill = totalMealCost + tip;

   printf("Meal Cost: %.2f\n", mealCharge);
   printf("Tax Amount: %.2f\n", taxAmount);
   printf("Tip Amount: %.2f\n", tip);
   printf("Total Amount: %.2f\n", totalBill);

   return 0;
}
