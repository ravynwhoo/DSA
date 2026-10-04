class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
         //next greatest int 
    vector<int> h3(n);
   int max = -1;

for(int i = 0; i < n; i++){
    h3[i] = max;

    if(height[i] > max)
        max = height[i];
}

    vector<int> h2(n);
    
    //previous greatest int 
    int max2 = -1;

for(int i = n-1; i >= 0; i--){
    h2[i] = max2;

    if(height[i] > max2)
        max2 = height[i];
}
    int sum = 0;
    for(int i = 0; i < n;i++){
        int water = min(h2[i], h3[i]) - height[i];

    if(water > 0)
        height[i] = water;
    else
        height[i] = 0;
        sum += height[i];
    }
    return sum;
        
    }
};