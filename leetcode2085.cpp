class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count = 0;
        
        
        set<string> w1 ;
        
        set<string> w2;
        
        set<string> Trash;
        for(int i=0;i<words1.size();i++)
        {
            if(w1.find(words1[i])!=w1.end() )
            {
                Trash.insert(words1[i]);
            }
            
            w1.insert(words1[i]);
        }
        for(int i=0;i<words2.size();i++)
        {
             if(w2.find(words2[i])!=w2.end()){
                Trash.insert(words2[i]);
             }
                
            w2.insert(words2[i]);
        }
        for(auto i=Trash.begin();i!=Trash.end();i++)
        {
            w1.erase(*i);
            w2.erase(*i);
        }
        for(auto i=w1.begin();i!=w1.end();i++)
        {
            for(auto j=w2.begin();j!=w2.end();j++)
            {
                if(*i==*j)
                    count++;
            }
        }
        return count;
    }
};
