class Solution {
public:
    bool check(string s,long num){  //確認下一個有沒有遞減
        if(s.empty())
            return true;
        int i = 0;
        while(i+1<s.size()&&s[i] == '0')
            ++i;
        s = s.substr(i); //去掉前面i個
        auto num_s = to_string(num);
        if(s.compare(0,num_s.size(),num_s) == 0)    // Compares num_size() characters from index number 0 of s with num_s 如果回傳=0--->S跟num_s相同，(看有沒有一樣)
            return check(s.substr(num_s.size()),num - 1);//(一樣在看下一個)
        return false;
    }
    
    bool splitString(string s) {
        auto pos = s.find_first_not_of('0');//找出不是0的位子返回位置
        if(pos != string::npos)//find函數找不到指定值時會返回string::nops
            s = s.substr(pos);
        for(int len=1;len <= (s.size()+1)/2;++len){ //不可能減一匯差到兩位數
            long num_start = stol(s.substr(0,len)); //s從第0個算起到第len個轉為int
            if(s.size() > 1 && check(s.substr(len),num_start-1))
                return true;
        }
        return false;
            
        
    }
};
