#include <iostream>
using namespace std;

int not_main() {
  cout << "NOT Hello World!" << endl;
  cout << "I'm a C++ program" << endl;
  return 0;
}

int main() {
  not_main();
  cout << "Hello World!" << endl;
  cout << "I'm a C++ program" << endl;
  return 0;
}

// compile with g++ -o hello hello.cpp
