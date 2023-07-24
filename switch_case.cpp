#include <iostream>

using namespace std;

int main() {
  string data;
  int number = 9;
  
  switch(number) {
    case 1 :
      data = "Bulbusaur\n";
      break;
    case 2 :
      data = "Ivysaur\n";
      break;
    case 3 :
      data = "Venusaur\n";
      break;
    case 4 :
      data = "Charmander\n";
      break;
    case 5 :
      data = "Charmeleon\n";
      break;
    case 6 :
      data = "Charizard\n";
      break;
    case 7 :
      data = "Squirtle\n";
      break;
    case 8 :
      data = "Wartortle\n";
      break;
    case 9 :
      data = "Blastoise\n";
      break;
    default :
      data = "Unknown\n";
      break;
  }
  
  cout << data;
  
  return 0;
}