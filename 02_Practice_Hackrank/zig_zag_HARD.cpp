/*
 * ===================================================================
 * PROBLEM: Zig-Zag Diagonal Matrix Traversal
 * Practice Platform: LeetCode #498 (Diagonal Traverse)
 * (Note: LC 498 starts Up-Right first; this problem starts Down-Left first)
 * ===================================================================
 * 
 * DESCRIPTION:
 * Given an M x N matrix, return an array of all its elements in a 
 * zig-zag diagonal traversal starting from top-left (0, 0).
 * 
 * TRAVERSAL PATTERN:
 * 1. Start at (0, 0) -> Move DOWN-LEFT until hitting a boundary.
 * 2. Change direction -> Move UP-RIGHT until hitting a boundary.
 * 3. Alternate directions until all M * N elements are visited exactly once.
 * 
 * -------------------------------------------------------------------
 * INPUT FORMAT:
 * Line 1: M N (Rows and Columns)
 * Next M lines: N space-separated integers per line
 * 
 * CONSTRAINTS:
 * 1 <= M, N <= 1,000
 * 1 <= Matrix[i][j] <= 1,00,000
 * 
 * OUTPUT FORMAT:
 * Single line of M * N space-separated integers.
 * -------------------------------------------------------------------
 * 
 * SAMPLE INPUT:
 * 3 3
 * 1 2 3
 * 4 5 6
 * 7 8 9
 * 
 * SAMPLE OUTPUT:
 * 1 4 2 3 5 7 8 6 9
 * 
 * VISUAL BREAKDOWN:
 * Matrix:
 *   1  2  3
 *   4  5  6
 *   7  8  9
 * 
 * Diagonal 0 (i + j = 0): [1]          -> Result: 1
 * Diagonal 1 (i + j = 1): [2, 4]       -> Down-Left: 4, 2
 * Diagonal 2 (i + j = 2): [3, 5, 7]    -> Up-Right:  3, 5, 7
 * Diagonal 3 (i + j = 3): [6, 8]       -> Down-Left: 8, 6
 * Diagonal 4 (i + j = 4): [9]          -> Up-Right:  9
 * 
 * -------------------------------------------------------------------
 * KEY LOGIC / ALGORITHM:
 * 1. All cells at (r, c) on the same diagonal share the same sum (r + c).
 * 2. Total diagonals = M + N - 1 (from sum = 0 to M + N - 2).
 * 3. If sum (r + c) is odd  -> Traversal goes UP-RIGHT.
 * 4. If sum (r + c) is even -> Traversal goes DOWN-LEFT.
 * ===================================================================
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Write your solution here
    return 0;
}