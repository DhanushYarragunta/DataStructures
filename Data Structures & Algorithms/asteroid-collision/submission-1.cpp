class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       stack<int> st;
       vector<int> ans;
       for(int i = 0; i < asteroids.size(); i++) 
       {
            if(asteroids[i] < 0)
            {
                int maxi = 0;
                while(!st.empty() && abs(asteroids[i]) >= st.top())
                {
                    maxi = max(maxi, st.top());
                    st.pop();
                    if(maxi == abs(asteroids[i])) break;
                }
                if(st.empty() && maxi < abs(asteroids[i]))
                {
                   ans.push_back(asteroids[i]);
                }
            }
            else
            {
                st.push(asteroids[i]);
            }
       }
       vector<int> temp;
       while(!st.empty())
       {
            int x = st.top();
            st.pop();
            temp.push_back(x);
       }
       if(temp.empty()) return ans;
       for(int i =  temp.size() - 1; i >= 0; i--)
       {
            ans.push_back(temp[i]);
       }
       return ans;
    }
};