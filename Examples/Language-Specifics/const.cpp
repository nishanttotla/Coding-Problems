#include <iostream>

using namespace std;

int main() {
  int val = 2;
  const int* const x = &val;
  cout<<*x<<endl;
  return 0;
}