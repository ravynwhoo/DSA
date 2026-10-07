class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<vector<int>> v;
    int n = rowIndex;
    for(int i = 1; i<=n+1 ; i++){
        vector<int> a(i);
        v.push_back(a);
    }

    vector<int> a1;

    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=i; j++){
            if(j==0 || i==j){
                v[i][j] = 1;
            }

            else{
                v[i][j] = v[i-1][j-1] + v[i-1][j];
            }

            if(i == n){
              a1.push_back(v[i][j]);
            }

           
        }
    }

    return a1; 
    }
};