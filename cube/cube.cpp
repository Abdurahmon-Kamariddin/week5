#include <iostream>
#include <string>
/**
   Calculate the cube of an inputted number
*/
int main() {
  std::cout << "Enter a number you wish to cube :> ";

int number;
  std::cin >> number;

int cube = (number * number * number);
  std::cout << "The cube of " << number << " is " << cube;
}
