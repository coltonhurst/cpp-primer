/*
  Page 22 Ex 1.20
  
  Reads a set of book sales transactions,
  and outputs each transaction.
*/

#include <iostream>
#include <string>
#include "Sales_item.h"

int main()
{
  // This is an infinite loop...
  while (true) {
    // Get and output the transaction
    Sales_item transaction;
    std::cin >> transaction;
    std::cout << transaction << std::endl;
  }

  return 0;
}