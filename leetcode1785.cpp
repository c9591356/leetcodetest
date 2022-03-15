class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        long long int diff = abs(goal - sum);
        if(diff%limit ==0)
            return (diff/limit);
        else
            return (diff/limit+1);
        
    }
};
