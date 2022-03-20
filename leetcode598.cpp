class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        
        int minrow = m;
        int mincol = n;

        for(int i=0;i<ops.size();i++){
            if(minrow>ops[i][0])
                minrow = ops[i][0];
            if(mincol>ops[i][1])
                mincol = ops[i][1];
        }
        return minrow*mincol;
    }
};
