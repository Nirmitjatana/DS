class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        // int i=0;
        int ln = nums.size();
        // cout << ln;
        int min = INT_MAX;
        // cout <<min;
        for(int i = 0;i<ln;i++){
            if(nums[i] == target){
                
                if(abs(i-start)<min){
                    // cout<<"in ";
                    min = abs(i-start);
                }
            }
        }
        // while(nums[i] != target){
        //     i++;
        // }
        return min;
    }
};