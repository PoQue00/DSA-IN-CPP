/*
 * ===================================================================
 * PROBLEM: Intersection of Two Sorted Arrays
 * Practice Platforms:
 *   - LeetCode #350: Intersection of Two Arrays II (Pre-sorted variant)
 *   - GeeksforGeeks: Intersection of Two Sorted Arrays
 * ===================================================================
 * 
 * DESCRIPTION:
 * Given two sorted arrays A (size N) and B (size M) in non-decreasing order,
 * find their intersection (common elements).
 * Each element must appear in the output as many times as it appears
 * in BOTH arrays simultaneously.
 * 
 * RESTRICTION:
 * Must solve using strictly O(1) auxiliary space (excluding output).
 * 
 * -------------------------------------------------------------------
 * INPUT FORMAT:
 * Line 1: N M (Sizes of array A and array B)
 * Line 2: N space-separated sorted integers (Array A)
 * Line 3: M space-separated sorted integers (Array B)
 * 
 * CONSTRAINTS:
 * 1 <= N, M <= 100,000
 * 1 <= A[i], B[i] <= 1,000,000,000
 * Array A and B are sorted in non-decreasing order.
 * Space Complexity: Strictly O(1) auxiliary space.
 * 
 * OUTPUT FORMAT:
 * Print intersecting elements separated by space.
 * If no common elements exist, print -1.
 * -------------------------------------------------------------------
 * 
 * SAMPLE INPUT 1:
 * 4 4
 * 1 3 5 7
 * 2 3 5 8
 * 
 * SAMPLE OUTPUT 1:
 * 3 5
 * 
 * SAMPLE INPUT 2:
 * 7 6
 * 1 2 2 2 3 4 4
 * 2 2 3 4 4 5
 * 
 * SAMPLE OUTPUT 2:
 * 2 2 3 4 4
 * 
 * -------------------------------------------------------------------
 * ALGORITHM / LOGIC (Two-Pointer Technique):
 * Since both arrays are already sorted, we can use two pointers:
 * 
 * 1. Initialize pointer i = 0 (for Array A) and pointer j = 0 (for Array B).
 * 2. Loop while i < N and j < M:
 *    - If A[i] == B[j]: 
 *        Found a common element! Print/save it, then increment both (i++, j++).
 *    - Else if A[i] < B[j]:
 *        A[i] is too small to match B[j], so move forward in A (i++).
 *    - Else (A[i] > B[j]):
 *        B[j] is too small to match A[i], so move forward in B (j++).
 * 3. Track if any common element was printed. If none, print -1.
 * 
 * TIME COMPLEXITY:  O(N + M) -> Single linear scan
 * SPACE COMPLEXITY: O(1)     -> Only two integer pointers used
 * ===================================================================
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    // Write your solution here using the Two-Pointer technique

    return 0;
}