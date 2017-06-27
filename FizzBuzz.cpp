#include "FizzBuzz.h"

void FizzBuzz::FizzBuzzIt(int number){
  std::cout << "FIZZ BUZZ IT CLASS ";
  if ((number % 3 == 0) && (number % 5 == 0)){
    std::cout << "FizzBuzz";
    return;
  }

  if (number % 5 == 0){
    std::cout << "Buzz";
    return;
  }

  if (number % 3 == 0){
    std::cout << "Fizz";
    return;
  }

  std::cout << number;

  return;
}
