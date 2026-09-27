class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0,count1 = 0,count2 = 0;
        int n = nums.size();
        for( int i = 0; i < n ; i++ ){
            if(nums[i] == 0) count0++;
            if(nums[i] == 1) count1++;
            else count2++;
        }
        int c12 = count0+count1;
        for(int i = 0; i<n ; i++ ){
            if(i<count0) nums[i]=0;
            if(i>=count0 && i< c12) nums[i]=1;
            if(i>=c12) nums[i]=2;
        }
        for(int i = 0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        
    }
};