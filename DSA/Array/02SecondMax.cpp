#include<iostream>
#include <climits> // For INT_MAX

void SecondMax(int arr[],int size);
int main(){
    int size;
    std::cout << "Enter the size of array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid array size.\n";
        return 1;
    }

    // Standard dynamic array allocation
    int* arr = new int[size];

    std::cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    SecondMax(arr, size);

    // Clean up allocated memory
    delete[] arr;

    return 0;
}

void SecondMax(int arr[],int size){
    if (size < 2) {
        std::cout << "Array needs at least 2 elements.\n";
        return;
    }

    int max1=INT_MIN;
    int max2=INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i] != max1 && arr[i] > max2){
            max2=arr[i];
        }
    }
    if (max2 == INT_MIN) {
        std::cout << "No distinct second minimum found (all elements might be identical).\n";
    } else {
        std::cout << "Second min element: " << max2 << "\n";
    }

}