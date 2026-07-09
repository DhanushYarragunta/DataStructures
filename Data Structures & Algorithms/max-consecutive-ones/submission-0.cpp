class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Result = 0, curr = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                curr += 1;
            }
            else
            {
                curr = 0;
            }
            Result = max(Result, curr);
        }
        return Result;
    }
};