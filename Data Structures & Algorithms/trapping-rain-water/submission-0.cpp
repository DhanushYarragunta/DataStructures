class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int leftMax = height[left], rightMax = height[right];
        int Result = 0;
        while(left < right)
        {
            if(leftMax < rightMax)
            {
                left += 1;
                leftMax = max(leftMax, height[left]);
                Result += leftMax - height[left];
            }
            else
            {
                right -= 1;
                rightMax = max(rightMax, height[right]);
                Result += rightMax - height[right];
            }
        }
        return Result;
    }
};
