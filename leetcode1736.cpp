class Solution {
public:
    string maximumTime(string time) {
        string s=time;
        if(time[0]=='?')
        {
            if(time[1]=='1' || time[1]=='0' || time[1]=='2'|| time[1]=='3'|| time[1]=='?')
                s[0]='2';
            else
                s[0]='1';
        }
        if(time[1]=='?')
        {
            if(s[0]=='2')
                s[1]='3';
            else
                s[1]='9';
        }
        s[2]=':';
        if(time[3]=='?')
            s[3] ='5';
        if(time[4]=='?')
            s[4]='9';
        return s;
            
    }
};
