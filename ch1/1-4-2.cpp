/*
  Page 13
  
  An example of the for statement (a type of loop).
  Sums the integers between 1 and 10 inclusive.
*/

#include <iostream>
int main()
{
  int sum = 0;
  for (int val = 1; val <= 10; ++val)
    sum += val; // equivalent to sum = sum + val
  std::cout << "Sum of 1 to 10 inclusive is "
            << sum << std::endl;
  return 0;
}