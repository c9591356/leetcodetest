class Solution {
public:
    bool check(string s,long num){  //�T�{�U�@�Ӧ��S������
        if(s.empty())
            return true;
        int i = 0;
        while(i+1<s.size()&&s[i] == '0')
            ++i;
        s = s.substr(i); //�h���e��i��
        auto num_s = to_string(num);
        if(s.compare(0,num_s.size(),num_s) == 0)    // Compares num_size() characters from index number 0 of s with num_s �p�G�^��=0--->S��num_s�ۦP�A(�ݦ��S���@��)
            return check(s.substr(num_s.size()),num - 1);//(�@�˦b�ݤU�@��)
        return false;
    }
    
    bool splitString(string s) {
        auto pos = s.find_first_not_of('0');//��X���O0����l��^��m
        if(pos != string::npos)//find��Ƨ䤣����w�Ȯɷ|��^string::nops
            s = s.substr(pos);
        for(int len=1;len <= (s.size()+1)/2;++len){ //���i���@�׮t�����
            long num_start = stol(s.substr(0,len)); //s�q��0�Ӻ�_���len���ରint
            if(s.size() > 1 && check(s.substr(len),num_start-1))
                return true;
        }
        return false;
            
        
    }
};
