/*
  Page 6
  
  Takes two numbers and outputs the sum.
  The C++ Standard Library defines 4 IO objects.
  istream cin -> standard input
  ostream cout -> standard output
  ostream cerr -> standard error
  ostream clog ->  standard logging
*/

#include <iostream>
int main()
{
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
  
  return 0;
}