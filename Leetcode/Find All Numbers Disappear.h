class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int m,i;
        for(i=0;i< nums.size();i++){
            m = abs(nums[i])-1;
            nums[m] = nums[m]>0 ? -nums[m] : nums[m];
        }
        vector<int> res;
        for(i=0;i<nums.size();i++)
            if(nums[i]>0)
                res.push_back(i+1);
        return res;
        
    }
};