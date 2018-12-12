/*
Sort in C++ Standard Template Library (STL)

Sorting is one of the most basic functions applied to data. It means arranging the data in a particular fashion, which can be increasing or decreasing. There is a builtin function in C++ STL by the name of sort().
Internally this function is implemented as Quick-sort. The complexity of it is O(N*log(N)).
The prototype for sort is :

sort(startaddress, endaddress)

startaddress: the address of the first element of the array
endaddress: the address of the last element of the array
*/

#include <iostream>
#include <algorithm>

using namespace std;

struct node{
    int x;
    int y;
};

bool compare(node i, node j){
    return (i.x<j.x);
}

int main(){
    int a[] = {1,4,2,3,6,0,9,8,7};
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a,a+n);// ascending sorting
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    sort(a,a+n,greater <int> ());// descending sorting
    
    cout<<"\n";
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    node b[] = {{6,7},{5,6},{3,4},{1,2}};
    n = sizeof(b)/sizeof(b[0]);
    
    sort(b,b+n,compare);
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<b[i].x<<" "<<b[i].y<<"---";
    }
    return 0;
}
