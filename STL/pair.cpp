// the c++ STL is been divided into four parts 
//algorithms
// containers
// functions
// iterators

// we'll be starting with conatainers but before we have to learn pairs .

#include<bits/stdc++.h>
using namespace std;

// PAIRS - its a part of utility library

void explainPair(){
  pair <int,int> p = {1,3};
  cout << p.first << " " << p.second;
  pair <int,pair<int,int>> p1 = {1,{3,4}};
  cout << p1.first << " " << p1.second.second << " "
  << p1.second.first;
  pair <int,int> arr[] = {{1,3},{2,3},{3,4}};
  cout << arr[1].second;
}
int main(){
  explainPair();
}