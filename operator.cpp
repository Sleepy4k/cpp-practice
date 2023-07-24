#include <iostream>

using namespace std;

int main() {
  int year = 0;
 
  cout << "Enter year: ";
  cin >> year;
 
  if (year < 1000 || year > 9999) {
    cout << "Invalid year format.\n";
  } else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    cout << "The year " << year << " falls on a leap year.\n";
  } else {
    cout << "The year " << year << " is not a leap year.\n";
  }
  
  return 0;
}