class Solution {
public:
    int findNthDigit(long long int n) {
        if(n<10)
            return n;
        long long int digit=1;
        long long int number=9;
        n = n-digit*number;
        while(n>0){
            digit++;
            number*=10;
            n = n-digit*number;
        }
        n= n+digit*number;
        long long int th =  pow(10,digit-1)-1+n/digit;
        if(n%digit!=0){
            th++;
            long long int tmp=pow(10,(digit-n%digit));
            return (th/tmp)%10;
        }
        
        return th%10;
    }
};
