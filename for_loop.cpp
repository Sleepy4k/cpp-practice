#include <iostream>

using namespace std;

int main() {
  int trash = 0;
  
  cout << "How many trash cans are there? ";
  cin >> trash;

  for (int i = 1; i <= trash; i++) {
    cout << "Trash can " << i << " is full.\n";
  }

  cout << "Time to take out the trash!\n";

  return 0;
}