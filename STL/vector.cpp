// CONTAINERS 
// 1) Vectors 
// 2) List
// we can increase the size of vectors, it's dynamic in nature,even if we are pre defining the size .
#include<bits/stdc++.h>
using namespace std;
// void explainVector(){

//   // vector<int> v;
//   // v.push_back(1);
//   // v.emplace_back(2);
//   // cout << v[0] << v[1];

//   // vector<pair<int,int>> vec;
//   // vec.push_back({1,2});
//   // vec.emplace_back(1,2);
//   // cout << vec[0].first;

//   // iterator method
   
//   vector<int> v3 (5,100);//container of size 5 with instances of 5 100's 
//   // how to iterate and print a vector using this
//   for (vector<int>::iterator ti = v3.begin();ti != v3.end();ti++){
//     // cout << *(ti) << " ";
//     // easier method to not declare that much long variable
//   }
//   for(auto ti = v3.begin();ti != v3.end() ;ti++){
//     // cout << *(ti) << " ";
//   }
  
//   for(auto ti : v3){
//     // cout << ti << " ";
//   }

// // erase function

//   vector<int> v4{10,2,4,5,6};
//   v4.erase(v4.begin()+2,v4.begin()+4);
//   for(auto iti : v4){
//     cout << iti << " ";
// }
// vector<int> v5{34,13,41};
// cout << v5[0] ;
  

//   // vector<int> v1(5,20);
//   // vector<int> v2(v1);
  
//   // vector<int>::iterator it = v1.begin();
//   // it++;
//   // cout << *(it) << " ";

//   // insert function

//   vector<int> v6(2,100);
//   vector<int>::iterator tor = v6.begin();
//   v6.insert(v6.begin(),300);
//   v6.insert(v6.begin()+1,3,3);
//   // for(auto tor = v6.begin(); tor != v6.end(); tor++){
//   //   cout << *(tor) << " ";
//   //   }

//   // COPY method not used that much 
// vector <int> copy(2,100);
// v6.insert(v6.begin()+1,copy.begin(),copy.end());
//   for(auto tor = v6.begin(); tor != v6.end(); tor++){
//     cout << *(tor) << " ";
//     }
// // {10,20}
// cout << v6.size() ; //2

// //{10,20}
// //cout << v6.pop_back(); // {10}

// // v1 {10,20}
// // v2 {30,40}
// vector<int> v1 {10,20};
// vector<int> v2 {30,40};
// v1.swap(v2); //v1 -> v2 and v2 -> v1

// // clears the entire vector;
// v6.clear();

// cout << v6.empty();//boolean value empty or not checks it

// }

// // 2) LIST - CONTAINER 
// // Dynamic in nature 
// void explainList(){
//   list<int> ls;
//   ls.push_back(2);//{2}
//   ls.emplace_back(4);//{2,4}
//   ls.push_front(5);//{5,2,4}
//   ls.emplace_front();//{2,4};
//   //rest functions same as vector
//   //begin,end,rbegin,rend,clear,insert,size,swap

// }
// // 3) Deque

// void explainDeque(){
  
//   deque<int> dq;
//   dq.push_back(1);
//   dq.emplace_back(2);
//   dq.push_front(4);
//   dq.emplace_front(3);

//   dq.pop_back();
//   dq.pop_front();

//   cout << dq.back();
//   // dq.front();
//   cout << dq.front();
//   //rest functions same as vector
//   // begin,end,ebegin,rend,clear,insert,size,swap
// }

// 4) STACK
// void explainStack(){ //LIFO
//   stack<int> st;
//   st.push(1);//{1}
//   st.push(2);//{2,1}
//   st.push(3);//{3,2,1}
//   st.push(4);//{4,3,2,1}
//   st.push(5);//{5,,4,3,2,1}
//   st.emplace(6);//{6,5,4,3,2,1}

//   cout << st.top();
//   st.pop();//{5,4,3,2,1}
  
//   cout << st.size();//5
//   cout << st.empty();//false
  
//   stack<int>st1,st2;
//   st1.swap(st2);
  
//   // functions pop,push,top,clear,empty,emplace
//   // there is no index
//   // all the operations are big(O) operations
  
// }

// 5) QUEUE

// void explainQueue(){
//   queue<int> q;
//   q.push(1);//{1}
//   q.push(2);//{1,2}
//   q.push(3);//{1,2,3}
//   q.push(4);//{1,2,3,4}

//   q.back() += 5;
//   //9
//   cout << q.back();//9
//   cout << q.front();//1
//   q.pop();//{2,3,9}
//   cout << q.front();//{2}
//   q.front() += 6;
//   cout << q.front();

//   // sizew swap empty same as stack
// }

// 6)Priority Queue

void explainPQ(){
  priority_queue<int> pq;

  pq.push
}




int main(){
  // explainVector(); 
  // explainList();
  // explainDeque();
  // explainStack();
  explainQueue();

}