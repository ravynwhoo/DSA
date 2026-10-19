class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0; 
        int j = n-1;

        while(i<=j){
            if(nums[j] == val){
                j--;
             
            }
            else if(nums[i] == val){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                
            }
            else i++;
            
            
        }

        return i;
        
    }
};