/*
  Page 10
  
  An example showing the various kinds of comments.
  The comments with // are for line comments
  The comments with /* are for block comments
  (the above may generate a compiler warning, depending
  on what compiler you are using.)
*/

#include <iostream>
/*
 *  Simple main function:
 *  Read two numbers and write their sum
 */
int main()
{
  // Prompt the user to enter two numbers
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;     // variables to hold the input we read
  std::cin >> v1 >> v2;   // read input
  std::cout << "The sum of " << v1 << " and " << v2
            << " is " << v1 + v2 << std::endl;
  return 0;
}