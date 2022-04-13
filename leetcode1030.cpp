class Solution {
public:
    static bool mycompare(vector<int>& c1,vector<int>& c2){
        return c1[2] < c2[2];
    }
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        
        vector<vector<int>> ans;
        for(int i = 0;i<rows;i++)
            for(int j = 0;j < cols;j++)
                ans.push_back({i,j,abs(i-rCenter)+abs(j-cCenter)}); //算距離ans={[i,j,dist],[i2,j2,dist2]......}
        sort(ans.begin(),ans.end(),mycompare);//使用mycompare的規則排序
        for(vector<int>& d:ans) //例如d=[i,j,dist]
            d.pop_back();//pop後會變d=[i,j]
        return ans;
        
    }
};
