/* Input: arr[] = [1, 2, 3, 4, 5]
Output: [2, 1, 4, 3, 5]
Explanation: Array elements after sorting it in the waveform are 2, 1, 4, 3, 5

: arr[0] ≥ arr[1] ≤ arr[2] ≥ arr[3] ≤ arr[4] ≥ ... */



class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        int range=arr.size() / 2;
        for(int i=0;i<arr.size();i += 2){
            if(range == 0){
                break;
            }
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            range -=1;
            
        }
    }
};



// or

/* class Solution {
public:
    void convertToWave(vector<int>& arr) {
        int n = arr.size();
        
        // Traverse in steps of 2 and swap adjacent elements
        for (int i = 0; i < n - 1; i += 2) {
            std::swap(arr[i], arr[i + 1]);
        }
    }
}; */