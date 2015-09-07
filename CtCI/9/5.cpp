// function to compute next permutation given a vector of 0 to n-1

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> v) {
  for(int i=0; i<v.size(); i++) {
    cout<<v[i]<<endl;
  }
}

vector<int> nextPermutation(vector<int> v) {
  int len = v.size();
  vector<int>::iterator i = v.begin() + len-1;
  while(i != v.begin()) {
    i--;
    if(*i < *(i+1)) break;
  }
  if(i == v.begin()) return v;

  vector<int>::iterator j = i+1;

  while(j != v.end()) {
    if(*j == ((*i) + 1)) {
      int temp = *j;
      *j = *i;
      *i = temp;
      sort(i+1, v.end());
      return v;
    }
    j++;
  }
}

int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(2);
  printVector(nextPermutation(v));
  return 0;
}