class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        vector<int> ans;
        while(i <= j)
        {
            int a = (nums[i] * nums[i]);
            int b = (nums[j] * nums[j]);
            if(a >= b)
            {
                ans.push_back(a);
                 i += 1;
            }
            else
            {
                ans.push_back(b);
                j -= 1;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};