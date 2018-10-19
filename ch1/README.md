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

## [Exercise 1.8](ex1-8.cpp)
```cpp
#include <iostream>

int main()
{ 
  std::cout << "/*";          // valid
  std::cout << "*/";          // valid
  std::cout << /* "*/" */;        // invalid
  std::cout << /*  "*/" /* "/*"  */;  // valid
  return 0;
}
```

## [Exercise 1.9](ex1-9.cpp)
```cpp
#include <iostream>

int main()
{ 
  int sum = 0, counter = 50;

  while (counter <= 100) {
    sum += counter;
    counter++;
  }
  
  std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

  return 0;
}
```

## [Exercise 1.10](ex1-10.cpp)
```cpp
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
```

## [Exercise 1.11](ex1-11.cpp)
```cpp
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
```