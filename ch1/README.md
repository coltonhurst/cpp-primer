# Chapter 1 Exercises

## Exercise 1.1
- GNU g++ compiler: http://labor-liber.org/en/gnu-linux/development/index.php?diapo=extensions

## Exercise 1.2
Running `echo $?` returns the value `255` after running a program that returns a `-1` to the OS.

## [Exercise 1.3](ex1-3.cpp)
```cpp
#include <iostream>

int main()
{
  std::cout << "Hello, World" << std::endl;

  return 0;
}
```

## [Exercise 1.4](ex1-4.cpp)
```cpp
#include <iostream>

int main()
{
  std::cout << 2 * 3 << std::endl;

  return 0;
}
```

## [Exercise 1.5](ex1-5.cpp)
```cpp
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
```

## [Exercise 1.6](ex1-6.cpp)
The code does not compile. The fragment is illegal. To make it legal, remove the semicolons on lines 17 and 18, so that the chain with the `std::cout` ostream object is not broken.

## [Exercise 1.7](ex1-7.cpp)
```cpp
#include <iostream>

/*
  This comment is not nested correctly!
  Look below:
  /* something */
*/

int main()
{ 
  return 0;
}
```