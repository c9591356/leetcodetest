class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int n = v.size();
        
        //Peak exists somewhere in between start and end
        int start = 1, end = n-2;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(v[mid] > v[mid-1] && v[mid] > v[mid+1]) return mid;
            else if(v[mid-1] > v[mid]) end = mid-1;
            else start = mid+1;
        }
        return -1;

    } 
};
