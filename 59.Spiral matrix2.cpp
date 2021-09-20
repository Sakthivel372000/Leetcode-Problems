class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int arr[n][n];
        vector<vector<int>> v1;
        int minr=0,minc=0,maxr=n-1,maxc=n-1,tn=(n*n)+1;
        int count=1;
        while (count < tn){
            // top view
            for (int j=minc,i=minr;j<=maxc && count<tn;j++){
                arr[minr][j]=count;
                count++;
            }
            minr++;
            // right view
            for (int i=minr,j=maxc;i<=maxr && count<tn;i++){
                arr[i][maxc]=count;
                count++;
            }
            maxc--;
            //bottom view
            for (int j=maxc,i=maxr;j>=minc && count<tn;j--){
                arr[maxr][j]=count;
                count++;
            }
            maxr--;
            // left view
            for (int i=maxr,j=minc;i>=minr && count<tn;i--){
                arr[i][minc]=count;
                count++;
            }
            minc++;
        }
        for (int i=0;i<n;i++){
            vector<int> v2;
            for (int j=0;j<n;j++){
                v2.push_back(arr[i][j]);
            }
            v1.push_back(v2);
        }
        return v1;
    }
};