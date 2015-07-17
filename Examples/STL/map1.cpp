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

class Cat {
public:
  int n;

  Cat() {}

  Cat(int x) {
    n = x;
  }
};

int main() {
  map<string, Cat > m;
  Cat x = Cat(444);
  pair<string, Cat> foo = make_pair("nis", Cat(22));
  m.insert(foo);
  cout<<m["nis"].n<<endl;
  return 0;
}