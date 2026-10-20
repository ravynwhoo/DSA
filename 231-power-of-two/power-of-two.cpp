class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag = false;
        if(n<=0) flag = false ;
        else if(n==1) flag = true ;
        else if(n%2 != 0) flag = false;
        else if(n%2 == 0) {
            flag = isPowerOfTwo(n/2);
            }
       

        return flag;
         
    }
};