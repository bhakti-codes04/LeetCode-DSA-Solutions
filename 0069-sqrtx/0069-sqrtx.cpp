class Solution {
public:
    long long int mySqrt(int x) {

        int strt = 0 ;
        int end = x;
        long long int mid = strt + (end - strt )/2;
        long long int ans = -1;
        while(strt<=end){
            long long int square = mid * mid ;
            if(square  == x){
                return mid;
            }
            if(square < x ){
                ans = mid;
                strt = mid + 1;
            }
            else{
                end = mid - 1; 
            }

            mid = strt + (end - strt )/2;
        }
        return ans ;
    }
};