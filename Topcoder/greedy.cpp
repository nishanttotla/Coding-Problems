// coding the first sample example described here: https://www.topcoder.com/community/data-science/data-science-tutorials/greedy-is-good/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct event {
  int start;
  int end;

  event(int s, int e) {
    start = s;
    end = e;
  }

  bool operator < (const event& ev) const {
    return (end <= ev.end);
  }
};

void printVector(vector<event>& v) {
  for(int i=0; i<v.size(); i++) {
    cout<<v[i].start<<" - "<<v[i].end<<endl;
  }
}

void findSchedule(vector<event>& v) {
  sort(v.begin(), v.end());
  int occupiedUntil = 0;

  vector<event>::iterator it = v.begin();
  while(it != v.end()) {
    if(it->start < occupiedUntil) {
      v.erase(it);
    } else {
      occupiedUntil = it->end;
      it++;
    }
  }
}

int main() {
  vector<event> v;
  v.push_back(event(1,10));
  v.push_back(event(1,5));
  v.push_back(event(6,11));
  v.push_back(event(7,9));
  v.push_back(event(9,14));
  findSchedule(v);
  printVector(v);
  return 0;
}