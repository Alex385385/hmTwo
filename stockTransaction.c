//Alejandro Millan
//Stock Trading Program Bill
#include <stdio.h>

int main()
{
   double stockShare = 1000.0;
   double stockPrice = 45.50;
   double brockerCommission = 0.02;

   double amountPaid = stockShare * stockPrice;
   double commissionPaid = amountPaid * brockerCommission;


   double stockSellPrice = 56.90;
   double amountSoldPrice = stockShare * stockSellPrice;
   double commissionPaid2 = amountSoldPrice * brockerCommission;

   double profit = (amountSoldPrice + commissionPaid2) - (amountPaid + commissionPaid);


   printf("Amount paid for stock: %.2f\n", amountPaid);
   printf("Commission paid buying: %.2f\n", commissionPaid);
   printf("Amount sold for stock: %.2f\n", amountSoldPrice);
   printf("Commission paid selling: %.2f\n", commissionPaid2);
   printf("Profit: %.2f\n", profit);

   return 0;
}
