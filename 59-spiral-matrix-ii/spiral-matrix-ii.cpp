class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> a(n,vector<int>(n));
        int minr = 0, minc = 0;
        int maxr= n-1, maxc=n-1;
        int count = 1;
    while(minr <=maxr && minc <=maxc){
        for(int j = minc; j <= maxc;j++){
            a[minr][j]= count;
            count++;
            
        }
        minr++;

        if(minr > maxr || minc > maxc) break;

        for(int k = minr; k<=maxr; k++){
            a[k][maxc]=count;
            count++;
        }
        maxc--;

        if(minr >maxr || minc >maxc) break;
        for(int p = maxc ;p >= minc ;p--){
            a[maxr][p]= count;
            count++;
        }
        maxr--;

        if(minr >maxr || minc >maxc) break;
        for(int l=  maxr; l >= minr; l--){
           a[l][minc]=count;
           count++;
        }
        minc++;
    }

    return a;
    }
};