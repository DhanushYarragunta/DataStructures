class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int left = 0, ans = 0;
        long long mul = 1;
        for(int right = 0; right < nums.size(); right++)
        {
            mul *= nums[right];
            while(mul >= k)
            {
                mul /= nums[left];
                left += 1;
            }


            ans += right - left + 1;
        }
        return ans;
    }
};