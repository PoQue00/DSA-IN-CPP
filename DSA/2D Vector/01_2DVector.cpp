#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v1={1,2,3,4};
    vector<int> v2={4,5};
    vector<int> v3={6};
    vector<int> v4={7,8,9};

    vector<vector<int>> v={v1,v2,v3,v4};
    for(int i=0;i<v.size();i++){
        
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
