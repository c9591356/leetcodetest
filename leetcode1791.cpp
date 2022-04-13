class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        for(int i=1;i<edges.size();i++)
        {
            if(edges[0][0]!=edges[i][0] && edges[0][0]!=edges[i][1])
                return edges[0][1];
                
        }
        return edges[0][0];
    }
};
