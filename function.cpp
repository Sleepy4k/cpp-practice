#include <string>
#include <sstream>
#include <iostream>

using namespace std;

string format_data(string name, int age) {
  stringstream data;

  data << name << " is " << age << " years old.";
  
  return data.str();
}

void print_data(string data) {
  cout << data << endl;
}

int main() {
  string name = "John";
  int age = 30;

  // Format name and age into a string
  string data = format_data(name, age);

  // Print data to the console
  print_data(data);

  return 0;
}