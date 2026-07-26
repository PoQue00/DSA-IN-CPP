#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //dereferenceOperator
    int x=5;
    int* p=&x;
    cout<<*p<<endl;  // print x

    *p=10;
    cout<<x<<endl; // see change value of x
    //dereferenceOperator end

    // but 

    cout<<p<<endl;// address of x
    cout<<&p;//address of p


    return 0;
}