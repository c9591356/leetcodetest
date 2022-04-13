class Solution {
public:
    const string HEX = "0123456789abcdef";
    string toHex(int num) {
        if(num ==0)
            return "0";
        string result;
        int count=0;
        while(num&&count++<8)
        {
            result=HEX[(num&0xf)]+result; //保留後四位(binary)
            num=num >> 4;   //位移4位
        }
        return result;
    }
};
