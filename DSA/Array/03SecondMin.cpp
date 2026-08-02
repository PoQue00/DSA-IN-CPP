#include <iostream>
#include <climits> // For INT_MAX

void printSecondMin(int arr[], int n) {
    if (n < 2) {
        std::cout << "Array needs at least 2 elements.\n";
        return;
    }

    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            // Catches values between min1 and min2, skipping duplicates of min1
            min2 = arr[i];
        }
    }

    if (min2 == INT_MAX) {
        std::cout << "No distinct second minimum found (all elements might be identical).\n";
    } else {
        std::cout << "Second min element: " << min2 << "\n";
    }
}

int main() {
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

    printSecondMin(arr, size);

    // Clean up allocated memory
    delete[] arr;

    return 0;
}