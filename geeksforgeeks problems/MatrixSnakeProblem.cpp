/* Given a matrix mat[][] of size n x n. Print the elements of the matrix in the snake like pattern depicted below.


Examples :

Input: n = 3, 
mat[][] = [[45, 48, 54],
           [21, 89, 87], 
           [70, 78, 15]]
Output: [45, 48, 54, 87, 89, 21, 70, 78, 15] 
Explanation: Printing it in snake pattern will lead to the output as [45, 48, 54, 87, 89, 21, 70, 78, 15.
*/

class Solution {
  public:
    vector<int> snakePattern(vector<vector<int>> matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> result;

        for (int i = 0; i < rows; i++) {
            if (i % 2 == 0) {
                // Even row: Left -> Right
                for (int j = 0; j < cols; j++) {
                    result.push_back(matrix[i][j]);
                }
            } else {
                // Odd row: Right -> Left
                for (int j = cols - 1; j >= 0; j--) {
                    result.push_back(matrix[i][j]);
                }
            }
        }

        return result;
    }
};