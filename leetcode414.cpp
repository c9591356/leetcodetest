class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> myset;
        for(int i=0;i<nums.size();i++)
        {
            myset.insert(nums[i]);
            if(myset.size()>3)
                myset.erase(myset.begin());
        }
        if(myset.size()==3)
            return *myset.begin();
        else
            return *myset.rbegin();
        
    }
};
