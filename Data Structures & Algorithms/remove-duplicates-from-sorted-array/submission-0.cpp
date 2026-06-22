class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1, l = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] != nums[i - 1])
            {
                nums[l] = nums[i];
                l += 1;
                k += 1;
            }
        }
        return k;
    }
};