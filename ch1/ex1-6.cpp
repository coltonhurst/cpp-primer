/*
  Page 9 Ex 1.6
  
  The code does NOT compile.
  This is because the semicolon on line 17
  ends the statement (with cout), so lines 18 and 19 are left hanging.
*/

#include <iostream>

int main()
{
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;

  std::cout << "The sum of " << v1;
            << " and " << v2;
            << " is " << v1 + v2 << std::endl;
  
  return 0;
}