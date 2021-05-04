class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n>1){
            int t = n/2;
        sort(nums.begin(),nums.end());
        int count = 1;
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                count++;
                if(count > t){
                return nums[i];
                }
            }
            else{
                count = 1;
            }
            
            
            // else{
            //     count
            // }
//             while(count < t){
                
//             }
        }
        
        return 0;
        }
        else{
            return nums[0];
        }
        
    }
};