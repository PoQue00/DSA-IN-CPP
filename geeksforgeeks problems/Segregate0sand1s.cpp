/* Input: arr[] = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1]
Explanation:  After segregation, all the 0's are on the left and 1's are on the right. Modified array will be [0, 0, 0, 0, 0, 1, 1, 1, 1, 1].
 */

 
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int numberOfZero=std::count(arr.begin(),arr.end(),0);
        for(int i=0;i<arr.size();i++){
            if(numberOfZero == 0){
                arr[i]=1;
            }
            else{
                arr[i]=0;
                numberOfZero -=1;
            }
            
            
        }
    }
};