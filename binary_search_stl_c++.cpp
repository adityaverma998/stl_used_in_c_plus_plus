/*

The prototype for binary search is :

binary_search(startaddress, endaddress, valuetofind)

startaddress: the address of the first element of the array.
endaddress: the address of the last element of the array.
valuetofind: the target value which we have to search for.

*/


#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a[] = {1,2,3,4,5,5,6,7,8,10};
    int n = sizeof(a)/sizeof(a[0]);
    
    if(binary_search(a, a + n, 3)){
        cout<<"3 is there";
    }else{
        cout<<"not present";
    }
    
    return 0;
}
