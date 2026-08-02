#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int arr[100];
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int search,found=0,i;
    cout<<"Enter element to search in array:";
    cin>>search;
    for(i=0;i<n;i++){
        if (search == arr[i]){
            found=1;
            break;
        }
    }
    if(found==1){
        cout<<"Element found at index :"<<i;
    }
    else cout<<"Not found";
    return 0;
}