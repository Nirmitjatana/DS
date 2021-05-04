class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int t=0;
        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                t = 1;
            }
        }
        
        if(t == 1){
            return true;
        }
        else{
            return false;
        }
        
    }
};