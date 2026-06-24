class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while(i <= j)
        {
            int a = nums[i];
            int b = nums[j];
            if(a % 2 != 0 && b % 2 == 0)
            {
                swap(nums[i], nums[j]);
                i += 1;
                j -= 1;
            }
            else if(b % 2 == 0)
            {
                i += 1;
            }
            else
            {
                j -= 1;
            }
        }
        return nums;
    }
};