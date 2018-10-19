/*
  Page 13 Ex 1.11
  
  Takes two integers as input and prints each number
  in the range specified by the two integers (inclusive).
*/

#include <iostream>

int main()
{ 
  int lower = 0, higher = 0;

  std::cout << "Please enter the lower integer: ";
  std::cin >> lower;

  std::cout << "Please enter the higher integer: ";
  std::cin >> higher;

  // Make sure lower < higher
  if (lower > higher) {
  	std::cout << "The lower integer must be less than the higher integer!";
  	return 0;
  }
  
  // Print lower to higher inclusive
  while (lower <= higher) {
  	std::cout << lower << " ";
  	lower++;
  }
  std::cout << std::endl;

  return 0;
}