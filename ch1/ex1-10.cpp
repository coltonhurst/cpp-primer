/*
  Page 13 Ex 1.10
  
  Prints the numbers from 10 down to zero.
*/

#include <iostream>

int main()
{ 
  int counter = 10;

  while (counter >= 0) {
  	std::cout << counter << " ";
  	counter--;
  }
  std::cout << std::endl;

  return 0;
}