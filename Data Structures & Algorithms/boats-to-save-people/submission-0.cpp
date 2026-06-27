class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i = 0, j = people.size() - 1;
        int count = 0;
        while(i <= j)
        {
            int sum = people[i] + people[j];
            if(sum <= limit)
            {
                i += 1;
                j -= 1;
                count += 1;
            }
            else if(people[j] <= limit)
            {
                j -= 1;
                count += 1;
            }
            else if(people[i] <= limit)
            {
                i += 1;
                count += 1;
            }
        }
        return count;
    }
};