

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
