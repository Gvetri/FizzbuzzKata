// my first program in C++
#include <iostream>
#include "FizzBuzz.h"
using namespace std;

// void FizzBuzz(int number);

int main(){
  cout << "Hello World! 2";
  // FizzBuzz(7);
  // cout << "\n";
  cout << string(25, '\n');
  FizzBuzz f;
  f.FizzBuzzIt(5);
  cout << string(2, '\n');
}

// void FizzBuzz(int number){
//   cout << "Soy la funcion FizzBuzz";
//   if ((number % 3 == 0) && (number % 5 == 0)){
//     cout << "FizzBuzz";
//     return;
//   }
//
//   if (number % 5 == 0){
//     cout << "Buzz";
//     return;
//   }
//
//   if (number % 3 == 0){
//     cout << "Fizz";
//     return;
//   }
//
//   cout << number;
//
//   return;
// }
