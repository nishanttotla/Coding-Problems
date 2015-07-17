#include <iostream>
#include <queue>

using namespace std;

struct Friend {
  string name;
  int lastMeeting;

  Friend(string n, int l) {
    name = n;
    lastMeeting = l;
  }

  bool operator < (const Friend f) const {
    if(lastMeeting < f.lastMeeting) return true;
    return false;
  }
};

void printHeap(priority_queue<Friend> pq) {
  while(!pq.empty()) {
    Friend best = pq.top();
    pq.pop();
    cout<<best.name<<" "<<best.lastMeeting<<endl;
  }
}

int main() {
  priority_queue<Friend> pq;
  pq.push(Friend("jack", 0));
  pq.push(Friend("mike", 1));
  pq.push(Friend("anna", 3));
  pq.push(Friend("ricky", 1));
  printHeap(pq);
  return 0;
}