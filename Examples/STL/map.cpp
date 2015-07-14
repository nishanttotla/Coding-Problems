#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

void printMapKeys(map<string, int> m) {
  for(map<string, int>::iterator it=m.begin(); it!=m.end(); it++) {
    cout<<it->first<<endl;
  }
}

int main() {
  vector<int> v(10, 65);
  v[5] = 1729;
  v.push_back(166573);

  pair<string, int> foo = make_pair("mill valley", 2);
  pair<string, int> bar;
  bar.first = "santa rosa";
  bar.second = 4;

  map<string, int> m;
  m["berkeley"] = 1;
  m["san francisco"] = 2;
  m["mountain view"] = 3;
  m.insert(foo);
  m.insert(bar);

  printMapKeys(m);
  return 0;
}