#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include "Book.h"
#include "Date.h"
#include "Reserve.h"
using namespace std;
int main() {
   Book books[3] = {
       Book("The Great Gatsby", "123456789", "F. Scott Fitzgerald"),
       Book("The Catcher in the Rye", "987654321", "J.D. Salinger"),
       Book("To Kill a Mockingbird", "456789123", "Harper Lee")
   };

   for (int i = 0; i < 3; i++) {
       books[i].InfoPrinter();
   }

   Date startDate(1, 3, 2025);
   Date endDate(15, 3, 2025);
   Date today(20, 3, 2025);

   startDate.InfoPrinter();
   endDate.InfoPrinter();

   Reserve reserves[2] = {
       Reserve("John Doe", &startDate, &endDate, &books[0]),
       Reserve("Jane Doe", &startDate, &endDate, &books[1])
   };

   for (int i = 0; i < 2; i++) {
       reserves[i].ReservePrinter();
   }
int totalFine = 0;
   for (int i = 0; i < 1; i++) {
       totalFine += reserves[i].CalculatFine(today);
   }
   cout << "Total fine amount: " << totalFine << " Toman" << endl;

   return 0;
}