class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int size = queries.size();
        int sum = 0;
        vector<int> answer;
        
        for(int num : nums)
            if(num % 2 ==0)
                sum += num;
        for(int i = 0;i < size;i++){
            int val = queries[i][0],index = queries[i][1];
            if(nums[index]%2 ==0)
            {
                if((nums[index]+val)%2 ==0)
                {                
                    nums[index]+=val;
                    sum+=val;
                    answer.push_back(sum);
                }
                else
                {
                    
                    sum-=nums[index];
                    nums[index]+=val;
                    answer.push_back(sum);
                }
            }
            else
            {
                if((nums[index]+val)%2 ==0)
                {
                    nums[index]+=val;
                    sum+=nums[index];
                    answer.push_back(sum);
                }
                else
                {
                    nums[index]+=val;
                    answer.push_back(sum);
                }

            }
        }
        return answer;
    }
};
