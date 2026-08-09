/* ONLY N*N MARIX MULTIPLIUCATION
 */

class Solution {
  public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        int row1=mat1.size();
        
        vector<vector<int>> result(row1, vector<int>(row1, 0));
        
        for(int i=0;i<row1;i++){
            for(int j=0;j<row1;j++){
                for(int k=0;k<row1;k++){
                    result[i][j] += mat1[i][k]*mat2[k][j];
                }
            }
        }
        return result;
        
    }
};