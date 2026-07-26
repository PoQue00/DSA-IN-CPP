/*
===========================
        ARRAY IN C++
===========================

Definition:
An array is a collection of elements of the same data type
stored in contiguous memory locations.

Syntax:
data_type array_name[size];

Example:
int arr[5];

Advantages:
1. Fast access using index (O(1))
2. Easy to traverse
3. Stores multiple values in one variable

Disadvantages:
1. Fixed size
2. Stores only same data type
3. Insertion and deletion are difficult

Time Complexity:
Access    : O(1)
Traversal : O(n)
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 5 elements: ";
    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "\nArray Elements: ";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}