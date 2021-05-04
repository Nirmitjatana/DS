class Solution {
public:
        int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans;
        int count = 0;
        for(int i=0; i<n; i++){
            if(i != nums[i]){
                count = 1;
                ans = i;
                break;
            }
        }
        if(count == 1){
            return ans;    
        }
        else{
            return n;
        }

    }
    
};