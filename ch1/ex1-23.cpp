/*
  Page 24 Ex 1.23
  
  Reads several transactions for the same ISBN, and prints the
  number of transactions for that ISBN. Based on ex1-22.cpp.
  Note: to count transactions, they must be in order.
  We could write it so that the transactions can be out of order and
  the # of transactions are printed at the end, but I want to move on.
*/

#include <iostream>
#include <string>
#include "Sales_item.h"

int main()
{
  
  Sales_item final;
  Sales_item transaction;
  int transactionCount = 0;

  // get the main Sales_item
  if (std::cin >> final)
  {
    transactionCount++;
    // keep getting more Sales_item's
    while (std::cin >> transaction) 
    {
      // If the ISBN's match, add the current trans to final
      // If not, print final, and set final to trans
      if (transaction.isbn() == final.isbn())
      {
        final += transaction;
        transactionCount++;
      } else {
        std::cout << final << std::endl;
        std::cout << "# of transactions: " << transactionCount << std::endl;
        final = transaction;
        transactionCount = 1;
      }
    }
    std::cout << final << std::endl; // print the final for the last time if std::cin read failed
    std::cout << "# of transactions: " << transactionCount << std::endl;
  }
  else {
    std::cout << "The read failed." << std::endl;
    return -1;
  }

  return 0;
}