/*
 * ===================================================================
 * PROBLEM: Minimum Adjacent Swaps to Segregate 0s and 1s
 * Practice Platforms:
 *   - GeeksforGeeks: Minimum adjacent swaps to segregate 0s and 1s
 *   - LeetCode Variant: Similar to Inversion Count / Binary Swaps
 * ===================================================================
 * 
 * DESCRIPTION:
 * Given a binary array containing only 0s and 1s, find the minimum number
 * of adjacent swaps needed to group all 0s together on one side and all 1s
 * on the other side.
 * 
 * Two valid final configurations exist:
 *   Option 1: All 0s on the left, all 1s on the right (e.g., [0, 0, 1, 1])
 *   Option 2: All 1s on the left, all 0s on the right (e.g., [1, 1, 0, 0])
 * 
 * Return the minimum swaps needed between Option 1 and Option 2.
 * 
 * -------------------------------------------------------------------
 * INPUT FORMAT:
 * Line 1: N (Size of array)
 * Line 2: N space-separated integers (0 or 1)
 * 
 * CONSTRAINTS:
 * 1 <= N <= 100,000
 * A[i] is either 0 or 1
 * 
 * OUTPUT FORMAT:
 * Print a single integer representing the minimum adjacent swaps needed.
 * -------------------------------------------------------------------
 * 
 * SAMPLE INPUT 0:
 * 5
 * 0 0 1 1 1
 * SAMPLE OUTPUT 0:
 * 0
 * 
 * SAMPLE INPUT 1:
 * 4
 * 0 0 1 0
 * SAMPLE OUTPUT 1:
 * 1
 * 
 * SAMPLE INPUT 2:
 * 4
 * 1 1 0 1
 * SAMPLE OUTPUT 2:
 * 1
 * 
 * -------------------------------------------------------------------
 * ALGORITHM / LOGIC:
 * To move an element across others using adjacent swaps, the number of
 * swaps equals the number of elements it has to cross (Inversion Count).
 * 
 * Case 1: Move all 0s to the LEFT (all 1s to the right)
 * - Iterate through the array and keep a count of '1's seen so far.
 * - Every time you encounter a '0', it must cross all previous '1's.
 * - Add `count_ones` to `swaps_0_left`.
 * 
 * Case 2: Move all 1s to the LEFT (all 0s to the right)
 * - Iterate through the array and keep a count of '0's seen so far.
 * - Every time you encounter a '1', it must cross all previous '0's.
 * - Add `count_zeros` to `swaps_1_left`.
 * 
 * Result = min(swaps_0_left, swaps_1_left)
 * 
 * TIME COMPLEXITY:  O(N) -> Single pass through the array
 * SPACE COMPLEXITY: O(1) -> Extra variables only (Use long long for swaps)
 * ===================================================================
 */

#include <iostream>
#include <vector>
#include <algorithm>

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

    // Write your solution here:
    // Calculate swaps for 0s to left and 1s to left, then print min().

    return 0;
}