class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;

        if(nums.size()==0)
            return ans;
        int first=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1]+1)
            {
                if(first==i-1)
                    ans.push_back(std::to_string(nums[first]));
                else
                    ans.push_back(std::to_string(nums[first])+"->"+std::to_string(nums[i-1]));
                first=i;
            }
        }
        if(first==nums.size()-1)
            ans.push_back(std::to_string(nums[first]));
        else
            ans.push_back(std::to_string(nums[first])+"->"+std::to_string(nums[nums.size()-1]));
        return ans;
    }
};
