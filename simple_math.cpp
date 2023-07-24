#include <iostream>

using namespace std;

int main() {
  double tempF;
  double tempC;

  // Ask the user for the temperature in Fahrenheit
  cout << "Enter the temperature in Fahrenheit: ";
  cin >> tempF;

  // Convert the temperature to Celsius
  // Using the formula: C = (F - 32) * 5/9
  // or C = (F - 32) * 1.8
  tempC = (tempF - 32) * 5/9;

  // Display the temperature in Celsius
  cout << "The temperature in Celsius is: " << tempC << endl;

  return 0;
}