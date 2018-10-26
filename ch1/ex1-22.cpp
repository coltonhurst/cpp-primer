/*
  Page 22 Ex 1.22
  
  Reads several transactions for the same ISBN.
  Note: see page 24, similar
*/

#include <iostream>
#include <string>
#include "Sales_item.h"

int main()
{
  
  Sales_item final;
  Sales_item transaction;

  // get the main Sales_item
  if (std::cin >> final)
  {
    // keep getting more Sales_item's
    while (std::cin >> transaction) 
    {
      // If the ISBN's match, add the current trans to final
      // If not, print final, and set final to trans
      if (transaction.isbn() == final.isbn())
      {
        final += transaction;
      } else {
        std::cout << final << std::endl;
        final = transaction;
      }
    }
    std::cout << final; // print the final for the last time if std::cin read failed
  }
  else {
    std::cout << "The read failed." << std::endl;
    return -1;
  }

  return 0;
}