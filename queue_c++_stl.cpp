/*

Queue in Standard Template Library (STL)

Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front.

 

The functions supported by queue are :

empty() – Returns whether the queue is empty.
size() – Returns the size of the queue.
queue::swap() in C++ STL: Exchange the contents of two queues but the queues must be of same type, although sizes may differ.
queue::emplace() in C++ STL: Insert a new element into the queue container, the new element is added to the end of the queue.
queue::front() and queue::back() in C++ STL– front() function returns a reference to the first element of the queue. back() function returns a reference to the last element of the queue.
push(g) and pop() – push() function adds the element ‘g’ at the end of the queue. pop() function deletes the first element of the queue.


*/



#include <iostream>
#include <queue>
using namespace std;

void showq( queue <int> q){
    queue <int> x = q;
    while(!x.empty()){
        cout<<x.front()<<"--";
        x.pop();
    }
    cout<<"\n";
}

void show( queue <char> q){
    queue <char> x = q;
    while(!x.empty()){
        cout<<x.front()<<"--";
        x.pop();
    }
    cout<<"\n";
}

int main(){
    cout<<"queue stl\n";
    
    queue <int> x;
    
    x.push(10);
    x.push(5);
    x.push(15);
    
    cout<<"queue elements are : \n";
    showq(x);
    
    x.pop();
    showq(x);
    
    cout<<"size of the queue is : "<<x.size();
    
    queue <char> x1, x2;
    cout<<"\nentering in x1";
    
    for(int i=0;i<5;i++){
        char a;
        cin>>a;
        x1.push(a);
    }
    cout<<"\nentering in x2";
    for(int i=0;i<5;i++){
        char a;
        cin>>a;
        x2.push(a);
    }
    
    show(x1);
    cout<<"\n";
    show(x2);
    cout<<"\n";
    
    x1.swap(x2);
    
    cout<<"\n";
    show(x1);
    cout<<"\n";
    show(x2);
    cout<<"\n";
    
    x2.emplace('H');
    cout<<"\n";
    show(x2);
    
    cout<<"\n"<<x1.front()<<"\n"<<x1.back();
    
    return 0;
}
