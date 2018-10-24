/*
  Page 18 Ex 1.19
  
  Takes two integers as input and prints each number
  in the range specified by the two integers (inclusive).
  
  It will print the range going up or down depending on
  the first integer.
*/

#include <iostream>

int main()
{ 
  int a = 0, b = 0;

  std::cout << "Please enter the first integer: ";
  std::cin >> a;

  std::cout << "Please enter the second integer: ";
  std::cin >> b;

  // If a <= b, then print from a to b (lower num to higher num)
  if (a <= b)
  {
    while (a <= b) {
      std::cout << a++ << " ";
    }
  }
  else // a >= b, so print a down to b (higher num to lower num)
  {
    while (a >= b) {
      std::cout << a-- << " ";
    }
  }

  std::cout << std::endl;

  return 0;
}