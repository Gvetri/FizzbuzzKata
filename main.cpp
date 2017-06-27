// Including the IoStream Library and the FizzBuzz Header 
#include <iostream>
#include "FizzBuzz.h"
using namespace std;


int main(){
  //Clearing the screen using cout
  cout << string(25, '\n');
  //Creating a FizzBuzz Object
  FizzBuzz f;
  //Calling the method FizzBuzzIt from the FizzBuzz Class
  f.FizzBuzzIt(5);
  //Adding some space again
  cout << string(2, '\n');
}
