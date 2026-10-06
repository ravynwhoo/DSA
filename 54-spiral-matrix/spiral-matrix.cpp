class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> a;
        
    int minr = 0, minc = 0;
        int maxr= n-1, maxc=m-1;
        int count = 0, end= n*m;
    while(minr <= maxr && minc <= maxc){
        for(int j = minc; j <= maxc && count <end ;j++, count++){
            a.push_back(matrix[minr][j]);
        }
        minr++;

        for(int k = minr; k<=maxr && count<end ; k++, count++){
            a.push_back(matrix[k][maxc]);
        }
        maxc--;

        for(int p = maxc ;p >= minc &&count<end ;p--, count++){
           a.push_back(matrix[maxr][p]);
        }
        maxr--;

        for(int l =  maxr; l >=  minr && count<end ; l--,count++){
            a.push_back(matrix[l][minc]);
        }
        minc++;
    }

    return a;
    }
        
    
};