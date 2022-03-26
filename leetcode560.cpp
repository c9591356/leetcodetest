class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum = 0,ans = 0;
        mp[sum] = 1;
        for(auto it:nums){
            sum += it;
            int find = sum - k; //扣掉target看要的數是否在累加中
            if(mp.find(find) != mp.end()){ //mp.find=end的話就是不存在
                ans += mp[find];    //如果存在
            }
            mp[sum]++;  //有可能超過1會有負數或0
        }
        return ans;
    }
};
