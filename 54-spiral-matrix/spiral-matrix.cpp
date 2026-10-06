class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> a;
        
    int minr = 0, minc = 0;
        int maxr= n-1, maxc=m-1;

    while(minr <= maxr && minc <= maxc){
        for(int j = minc; j <= maxc  ;j++){
            a.push_back(matrix[minr][j]);
        }
        minr++;
        
        if(minr > maxr || minc > maxc) break;
        for(int k = minr; k<=maxr ; k++){
            a.push_back(matrix[k][maxc]);
        }
        maxc--;

        if(minr > maxr || minc > maxc) break;
        for(int p = maxc ;p >= minc ;p--){
           a.push_back(matrix[maxr][p]);
        }
        maxr--;
        
        if(minr > maxr || minc > maxc) break;
        for(int l =  maxr; l >=  minr ; l--){
            a.push_back(matrix[l][minc]);
        }
        minc++;
    }

    return a;
    }
        
    
};