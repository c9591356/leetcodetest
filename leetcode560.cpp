class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum = 0,ans = 0;
        mp[sum] = 1;
        for(auto it:nums){
            sum += it;
            int find = sum - k; //����target�ݭn���ƬO�_�b�֥[��
            if(mp.find(find) != mp.end()){ //mp.find=end���ܴN�O���s�b
                ans += mp[find];    //�p�G�s�b
            }
            mp[sum]++;  //���i��W�L1�|���t�Ʃ�0
        }
        return ans;
    }
};
