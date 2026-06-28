class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, ans = 0;
        int temp = k;
        for(int right = 0; right < nums.size(); right++)
        {
            if(nums[right] == 0)
            {
                temp -= 1;
            }
            while(temp < 0)
            {
                if(nums[left] == 0) temp += 1;
                left += 1;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};