class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
  for(int i = n-2; i>=0;i--){
    if(nums[i]<nums[i+1]){
      idx = i;
      break;
  }}
  if(idx ==-1){
    reverse(nums.begin(),nums.end());
    return;
  }
   
    int j = n-1;
      while(nums[j] <= nums[idx]) {
            j--;
        }
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
        reverse(nums.begin()+idx+1,nums.end());
    }
     
};