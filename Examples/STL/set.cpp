#include <iostream>
#include <vector>
#include <set>

using namespace std;

void printSet(set<int> s) {
  for(set<int>::iterator it=s.begin(); it!=s.end(); it++) {
    cout<<*it<<endl;
  }
}

int main() {
  vector<int> v(10, 65);
  v[5] = 1729;
  v.push_back(166573);

  set<int> s(v.rbegin(), v.rend());
  s.insert(1);
  printSet(s);
  return 0;
}