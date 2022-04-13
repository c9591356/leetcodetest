class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> res;
        if(mat.size()==0)
            return res;
        int M =mat.size();
        int N=mat[0].size();
        for(int i=0;i<=(M+N-2);i++)
        {
            for(int x=0;x<=i;x++)
            {
                
                if(i%2!=0)
                {
                    if(x >= M|| i-x>=N)
                        continue;
                    res.push_back(mat[x][i-x]);

                }
                else
                {
                    if(i-x >= M|| x>=N)
                        continue;
                    res.push_back(mat[i-x][x]);

                }
            }
        }
        return res;
    }
};
