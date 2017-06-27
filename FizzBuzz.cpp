#include "FizzBuzz.h" //Including the FIzzBuzz Header

void FizzBuzz::FizzBuzzIt(int number){ //Creating the FizzBuzzIt Method
  if ((number % 3 == 0) && (number % 5 == 0)){ //If number is divisible by 3 or 5 print FizzBuzz
    std::cout << "FizzBuzz";
    return;
  }

  if (number % 5 == 0){ // If number is divisible by 5 return buzz
    std::cout << "Buzz";
    return;
  }

  if (number % 3 == 0){ // If number is divisible by 3 return Fizz
    std::cout << "Fizz";
    return;
  }

  std::cout << number; //Otherwise the method will return the number

  return;
}
