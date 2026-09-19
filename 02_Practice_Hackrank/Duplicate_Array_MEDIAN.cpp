/*
 * ===================================================================
 * PROBLEM: Find All Duplicates in Array (In Ascending Order)
 * Practice Platforms:
 *   - LeetCode #442: Find All Duplicates in an Array
 *   - GeeksforGeeks: Find duplicates in an array
 * ===================================================================
 * 
 * DESCRIPTION:
 * Given an array of N integers where each element is between 1 and 100,000,
 * find all elements that appear at least twice. Print these elements in
 * ascending (increasing) order. If no elements repeat, print -1.
 * 
 * -------------------------------------------------------------------
 * INPUT FORMAT:
 * Line 1: N (Size of array)
 * Line 2: N space-separated integers
 * 
 * CONSTRAINTS:
 * 1 <= N <= 200,000
 * 1 <= A[i] <= 100,000
 * 
 * OUTPUT FORMAT:
 * Print repeated integers separated by spaces in ascending order.
 * If no duplicates exist, print -1.
 * -------------------------------------------------------------------
 * 
 * SAMPLE INPUT 0:
 * 5
 * 4 2 4 1 5
 * SAMPLE OUTPUT 0:
 * 4
 * 
 * SAMPLE INPUT 1:
 * 9
 * 7 1 2 1 7 3 2 9 7
 * SAMPLE OUTPUT 1:
 * 1 2 7
 * 
 * -------------------------------------------------------------------
 * ALGORITHM / LOGIC (Frequency Array Technique):
 * Since the max value of elements is capped at 100,000, we can use a
 * frequency/count array to achieve optimal O(N) performance.
 * 
 * 1. Create a frequency vector `freq` of size 100001, initialized to 0.
 * 2. Traverse the input array and count occurrences: `freq[val]++`.
 * 3. Loop through indices from 1 to 100,000:
 *    - If `freq[i] >= 2`, print `i`.
 *    - Automatically guarantees output is in ascending order!
 * 4. Keep a boolean flag `foundDuplicate`. If false after checking, print -1.
 * 
 * TIME COMPLEXITY:  O(N + MAX_VAL) -> Linear pass over input and frequency array
 * SPACE COMPLEXITY: O(MAX_VAL)     -> Fixed vector size of 100,001 integers
 * ===================================================================
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Write your solution here using Frequency Array approach

    return 0;
}