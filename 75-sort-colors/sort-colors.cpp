class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n0 = 0,n1 = 0,n2 = 0;
        int n = nums.size();
        for( int i = 0; i < n ; i++ ){
            if(nums[i] == 0) n0++;
            else if(nums[i] == 1) n1++;
            else n2++;
        }
        int n12 = n0+n1;
        for(int i = 0; i<n ; i++ ){
            if(i<n0) nums[i]=0;
            else if(i< n12) nums[i]=1;
            else nums[i]=2;
            cout<<nums[i]<<" ";
        }
        
        
    }
};