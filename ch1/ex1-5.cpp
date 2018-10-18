/*
  Page 9 Ex 1.5
  
  A rewritten version of the 1-2.cpp file from page 6.
  Instead of one big chained output statement, we break it up.
*/

#include <iostream>

int main()
{
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;

  std::cout << "The sum of ";
  std::cout << v1;
  std::cout << " and ";
  std::cout << v2;
  std::cout << " is ";
  std::cout << v1 + v2 << std::endl;
  
  return 0;
}