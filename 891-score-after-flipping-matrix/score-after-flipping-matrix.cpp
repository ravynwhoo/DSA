class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
         int c0 = 0, c1 = 0;
         int n = grid.size();
         int m = grid[0].size();
    for(int i = 0; i< n ; i++){
        if(grid[i][0]== 0 ){
        for(int j = 0 ; j < m ; j++){
            if( grid[i][j] == 0) grid[i][j] = 1;
            else grid[i][j] = 0;
        }
        }
    }


    for(int i = 0; i<m ; i++){
        int c0=0, c1=0;
        for(int j = 0 ; j<n;j++){
            if(grid[j][i]==0) c0++;
            else c1++;
        }

        if(c0>c1){
             for(int j = 0; j<n; j++){
            if(grid[j][i] == 0) grid[j][i] = 1;
            else grid[j][i] = 0;
          }}
    }

    int sum = 0;
    for(int i = 0; i< n; i++){
        int k = 1;
        for(int j = m-1; j>=0;j--){
            sum += grid[i][j]*k;
            k*= 2;
        }
    }

        
    return sum;

    }
};