/*
 * LeetCode 73: Set Matrix Zeroes
 * https://leetcode.com/problems/set-matrix-zeroes/
 * 
 * Problem Statement:
 * Given an m x n integer matrix 'matrix', if an element is 0, 
 * set its entire row and column to 0's.
 * You must do it in-place.
 * 
 * Example 1:
 * Input: matrix = [
 *   [1,1,1],
 *   [1,0,1],
 *   [1,1,1]
 * ]
 * Output: [
 *   [1,0,1],
 *   [0,0,0],
 *   [1,0,1]
 * ]
 * 
 * Example 2:
 * Input: matrix = [
 *   [0,1,2,0],
 *   [3,4,5,2],
 *   [1,3,1,5]
 * ]
 * Output: [
 *   [0,0,0,0],
 *   [0,4,5,0],
 *   [0,3,1,0]
 * ]
 * 
 * Constraints:
 * - m == matrix.length
 * - n == matrix[0].length
 * - 1 <= m, n <= 200
 * - -2^31 <= matrix[i][j] <= 2^31 - 1
 */


class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();


        vector<bool> row(m,false);
        vector<bool> coln(n,false);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] == 0){
                    row[i]=true;
                    coln[j]=true;
                }
            }
        }

        for(int i=0;i<m;i++){
            if(row[i] == true){
                for(int j=0;j<n;j++){
                    mat[i][j] =0;
                }
            }
        }

        for(int j=0;j<n;j++){
            if(coln[j] == true){
                for(int i=0;i<m;i++){
                    mat[i][j] =0;
                }
            }
        }
    }
};