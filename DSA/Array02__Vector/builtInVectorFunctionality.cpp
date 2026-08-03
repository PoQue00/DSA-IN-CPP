#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    std::vector <int> v ={5,4,3,2,1};
    std::sort(v.begin(),v.end());    //sorting array
    for(int ele : v) std::cout<<ele<<" ";

    std::cout<<std::endl;


    std::vector <int> v2 ={2,45,2,64,23};
    std::reverse(v2.begin(),v2.end());     // now to start sort from specific position we can do like std::reverse(v2.begin()+1,v2.end());   // now it will leave first element and sort other
    for(int ele : v2) std::cout<<ele<<" ";

}