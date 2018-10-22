/*
  Page 14 Ex 1.13b
  
  Prints the numbers from 10 down to zero.
*/

#include <iostream>

int main()
{
  for (int i = 10; i >= 0; i--)
  	std::cout << i << " ";

  std::cout << std::endl;

  return 0;
}