class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int k = x;
        long long n = 0;
        while(x != 0){
            int rev = x%10;
            n = n*10 + rev;
            x /=10;
        }
        return k==n;
    }
};