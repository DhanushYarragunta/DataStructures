class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int ans = 0;
        while(left < right)
        {
            int currWater = min(heights[left], heights[right]) * (right - left);
            ans = max(ans, currWater);
            if(heights[left] <= heights[right])
            {
                left += 1;
            }
            else
            {
                right -= 1;
            }
        }
        return ans;
    }
};
