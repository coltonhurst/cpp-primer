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

## Exercise 1.12
This loop sums the range of numbers from -100 to 100 inclusive. The final value of sum is zero.

## [Exercise 1.13a](ex1-13a.cpp)
Exercise 1.9 using a for loop:
```cpp
#include <iostream>

int main()
{
  int sum = 0;

  for (int i = 50; i <= 100; i++)
    sum += i;
  
  std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

  return 0;
}
```

## [Exercise 1.13b](ex1-13b.cpp)
Exercise 1.10 using a for loop:
```cpp
#include <iostream>

int main()
{
  for (int i = 10; i >= 0; i--)
    std::cout << i << " ";

  std::cout << std::endl;

  return 0;
}
```

## Exercise 1.14
Usually a while loop is used when we don't know how many iterations will happen (ex: reading a file, to the end of the file). With a for loop, it's usually used when the number of iterations are known. See a similar question on stack overflow [here](https://stackoverflow.com/questions/2950931/for-vs-while-in-c-programming).

## Exercise 1.15
You can see examples on page 16.

## Exercise 1.16
Just see the code from the book [here](1-4-3.cpp).

## Exercise 1.17
If all the input values are equal, then there will only be one line of output. Like: `X occurs X times`, where X is the input value.

If there are no duplicated values, then there is a line of output for every input, like: `X occurs Y times`. `X` is the changing input number, and `Y` will always be 1.

## Exercise 1.18
I ran it. 

## [Exercise 1.19](ex1-19.cpp)
```cpp
#include <iostream>

int main()
{ 
  int a = 0, b = 0;

  std::cout << "Please enter the first integer: ";
  std::cin >> a;

  std::cout << "Please enter the second integer: ";
  std::cin >> b;

  // If a <= b, then print from a to b (lower num to higher num)
  if (a <= b)
  {
    while (a <= b) {
      std::cout << a++ << " ";
    }
  }
  else // a >= b, so print a down to b (higher num to lower num)
  {
    while (a >= b) {
      std::cout << a-- << " ";
    }
  }

  std::cout << std::endl;

  return 0;
}
```