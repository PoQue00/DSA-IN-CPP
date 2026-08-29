#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string name="Raxit Tripathi";
    name.pop_back();
    cout<<name<<endl;
    
    name.push_back('i');     // Only character push_back Allowed
    cout<<name<<endl;
    
    sort(name.begin(),name.end());     // Sort Based on Ascii Value;
    cout<<name<<endl;

    return 0;
}