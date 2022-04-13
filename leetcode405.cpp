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
            result=HEX[(num&0xf)]+result; //�O�d��|��(binary)
            num=num >> 4;   //�첾4��
        }
        return result;
    }
};
