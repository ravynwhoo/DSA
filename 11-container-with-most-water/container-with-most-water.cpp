class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0; 
        int j = n-1;
        int answer = 0;

        while(i<j){
           int gap = j-i;
           int area =  min(height[i],height[j])*gap ;

           answer = max(area,answer);

           if(height[i]<height[j]) i++;
           else j--;
        }

        return answer;
    }
}; 


