#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> v) {
  for(int i=0; i<v.size(); i++) {
    cout<<v[i]<<endl;
  }
}

int main() {
  vector<int> v(10, 65);
  v[5] = 1729;
  v.push_back(166573);
  sort(v.begin(), v.begin() + v.size()/2);
  printVector(v);
  return 0;
}