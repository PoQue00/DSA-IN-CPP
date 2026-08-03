#include<iostream>
#include<vector>

int main(){
    std:: vector<int> arr(5);   // arr size 5 with 0 in all index     we can also write like arr(5,-1) or any another no to put them in indices instead of 0 

    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Capacity: "<<arr.capacity()<<" Size:" <<arr.size();
    std::cout<<std::endl;

    arr.push_back(5);
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Capacity: "<<arr.capacity()<<" Size:" <<arr.size();  // Now the capacity becomes double (5 to 10) and size becomes 6 

}

// Every time its capacity get double(btw we can control it can be 1.5x 2x 3x---) if it becomes full