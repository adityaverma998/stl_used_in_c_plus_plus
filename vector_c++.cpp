/*

Vector in C++ STL

Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

 

begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
size() – Returns the number of elements in the vector.
empty() – Returns whether the container is empty.
reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type and size.
clear() – It is used to remove all the elements of the vector container


*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    for(int i = 1;i<=5;i++){
        v.push_back(i*10);
    }
    for(int j= 0;j<v.size();j++){   
        v[j] = v[j] + 1;
    }
    cout<<"\n"<<v.size();
    cout<<"\n"<<v.empty();
    cout<<"\n"<<v.front()<<" "<<v.back()<<" "<<v.data()<<" "<<*v.data();
    cout<<"\n"<<v.at(2);
    cout<<"\n"<<v[1];
    v.assign(2,7);
    cout<<"\n";
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.push_back(11);
    v.push_back(12);
    v.pop_back();
    v.insert(v.begin(),25);
    v.push_back(77);
    

    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
    v.clear();
    
    return 0;
}


