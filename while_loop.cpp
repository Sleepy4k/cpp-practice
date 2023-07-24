#include <iostream>

using namespace std;

int main() {
  int pin = 0;
  int tries = 0;
  
  cout << "Welcome to BANK SAT\n";
  cout << "Please, enter your PIN: ";
  cin >> pin;

  tries++;

  if (pin != 1234) {
    cout << "Invalid PIN. Try again.\n";
  }

  while (pin != 2023 && tries < 3) {
    cout << "Enter your PIN: ";
    cin >> pin;
    tries++;

    if (pin != 2023) {
      cout << "Invalid PIN. Try again.\n";
    }
  }

  if (pin == 2023) {
    cout << "PIN accepted!\n";
    cout << "You now have access.\n"; 
  } else if (tries >= 3) {
    cout << "Too many tries. Account blocked!\n";
  }
  
  return 0;
}