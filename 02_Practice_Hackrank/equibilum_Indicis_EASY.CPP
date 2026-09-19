/*
 * ===================================================================
 * PROBLEM: Count Equilibrium Indices in an Array
 * Practice Platforms:
 *   - LeetCode #724: Find Pivot Index (Finds first index)
 *   - GeeksforGeeks: Equilibrium Point
 * ===================================================================
 * 
 * DESCRIPTION:
 * Given an array A of N integers, an index i (0-indexed) is an "equilibrium index"
 * if the sum of elements strictly to its left equals the sum of elements 
 * strictly to its right.
 * 
 * Rules:
 *   - If i == 0, left sum = 0
 *   - If i == N - 1, right sum = 0
 * 
 * Write a program to count the total number of equilibrium indices.
 * 
 * -------------------------------------------------------------------
 * INPUT FORMAT:
 * Line 1: N (Size of the array)
 * Line 2: N space-separated integers
 * 
 * CONSTRAINTS:
 * 1 <= N <= 100,000
 * -10,000 <= A[i] <= 10,000
 * 
 * OUTPUT FORMAT:
 * Print a single integer representing the total count of equilibrium indices.
 * -------------------------------------------------------------------
 * 
 * SAMPLE INPUT 0:
 * 6
 * -7 1 5 2 -4 3
 * SAMPLE OUTPUT 0:
 * 1
 * 
 * SAMPLE INPUT 1:
 * 4
 * 0 0 0 0
 * SAMPLE OUTPUT 1:
 * 4
 * 
 * -------------------------------------------------------------------
 * ALGORITHM / LOGIC (Prefix Sum Optimization):
 * Naive checking takes O(N^2) time. We can optimize it to O(N) using Total Sum:
 * 
 * 1. Compute the `total_sum` of the entire array.
 * 2. Maintain a running `left_sum`, initialized to 0.
 * 3. Iterate through each element A[i] from i = 0 to N - 1:
 *    - `right_sum` can be calculated instantly as:
 *      right_sum = total_sum - left_sum - A[i]
 *    - If `left_sum == right_sum`, then i is an equilibrium index. Increment count.
 *    - Update `left_sum += A[i]` before moving to the next element.
 * 4. Print the total count.
 * 
 * TIME COMPLEXITY:  O(N) -> Two linear passes (one for total sum, one for check)
 * SPACE COMPLEXITY: O(1) -> Uses long long counters for sum tracking
 * ===================================================================
 */

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Write your solution here using Total Sum & Running Left Sum logic

    return 0;
}