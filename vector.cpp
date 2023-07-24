#include <vector>
#include <iostream>

using namespace std;

int main() {
  vector<string> items;

  // Add items to the vector
  items.push_back("sword");
  items.push_back("armor");
  items.push_back("shield");

  // Print the number of items in the vector
  cout << "You have " << items.size() << " items.\n";

  // Print the first item
  cout << "Your first item is the " << items[0] << ".\n";

  // Change the item at index 0
  cout << "You trade your sword for a battle axe.\n";
  items[0] = "battle axe";

  // Print all the items
  cout << "Your items:\n";
  for (int i = 0; i < items.size(); i++) {
    cout << i + 1 << ". " << items[i] << endl;
  }

  return 0;
}