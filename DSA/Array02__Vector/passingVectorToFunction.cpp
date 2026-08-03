#include<iostream>
#include<vector>

int change(std:: vector <int> v){              // 2->To make it pass by reference also write std:: vector <int>& v
    
    v[2]=9;     // 1-> change here does not affect its og vector coz vector is PASS BY VALUE unlike array which is PASS BY REFERENCE
}
int main(){
    std:: vector<int> v={5,4,3,2,1};
    change(v);
    std::cout<<v[2];   
    
}