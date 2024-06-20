#include <iostream>
using namespace std;
int sidepiece() {
  cout <<"Where I am" << endl;
  return 0;
}

int not_main() {
  cout << "NOT MAIN..." << endl;
  return 0;
}

int main() {
  not_main();
  cout << "Hello World!" << endl;
  cout << "I'm a C++ program" << endl;
  return 0;
}

// compile with g++ -o hello hello.cpp
