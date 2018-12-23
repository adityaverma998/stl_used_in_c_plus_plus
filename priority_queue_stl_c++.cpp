In C++ STL, there is priority_queue that can directly be used to implement Max Heap. See below example.

#include <queue> - needs to be included 

filter_none
edit
play_arrow
brightness_4
// C++ program to show that priority_queue is by 
// default a Max Heap 
#include <bits/stdc++.h> 
using namespace std; 
  
// Driver code 
int main () 
{ 
    // Creates a max heap 
    priority_queue <int> pq; 
    pq.push(5); 
    pq.push(1); 
    pq.push(10); 
    pq.push(30); 
    pq.push(20); 
  
    // One by one extract items from max heap 
    while (pq.empty() == false) 
    { 
        cout << pq.top() << " "; 
        pq.pop(); 
    } 
  
    return 0; 
} 
Output :

30 20 10 5 1
Since elements are printed in descending order, we have a max heap by default.

 

How to implement Min Heap?
priority_queue supports a constructor that requires two extra arguments to make it min heap.



 

    priority_queue <Type, vector<Type>, ComparisonType > min_heap;
`

Below is an example for integers.

filter_none
edit
play_arrow
brightness_4
// C++ program to use priority_queue to implement min heap 
#include <bits/stdc++.h> 
using namespace std; 
  
// Driver code 
int main () 
{ 
    // Creates a min heap 
    priority_queue <int, vector<int>, greater<int> > pq; 
    pq.push(5); 
    pq.push(1); 
    pq.push(10); 
    pq.push(30); 
    pq.push(20); 
  
    // One by one extract items from min heap 
    while (pq.empty() == false) 
    { 
        cout << pq.top() << " "; 
        pq.pop(); 
    } 
  
    return 0; 
} 
Output :

1 5 10 20 30 
