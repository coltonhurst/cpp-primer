/*
  Page 11 Ex 1.8
  
  Testing which of the output
  statements are legal.
*/

#include <iostream>

int main()
{ 
  std::cout << "/*";					// valid
  std::cout << "*/";					// valid
  std::cout << /* "*/" */;				// invalid
  std::cout << /*  "*/" /* "/*"  */;	// valid
  return 0;
}