class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v1;
        int minr=0,minc=0,maxr=matrix.size()-1,maxc=matrix[0].size()-1,tn=(matrix.size()*matrix[0].size()),count=0;
        cout << tn;
        while (count < tn){
            // top view
            for (int j=minc,i=minr;j<=maxc && count<tn;j++){
                v1.push_back(matrix[i][j]);
                count++;
            }
            minr++;
            // right view
            for (int i=minr,j=maxc;i<=maxr && count<tn;i++){
                v1.push_back(matrix[i][j]);
                count++;
            }
            maxc--;
            //bottom view
            for (int j=maxc,i=maxr;j>=minc && count<tn;j--){
                v1.push_back(matrix[i][j]);
                count++;
            }
            maxr--;
            // left view
            for (int i=maxr,j=minc;i>=minr && count<tn;i--){
                v1.push_back(matrix[i][j]);
                count++;
            }
            minc++;
        }
        cout << count << " ";
        return v1;
    }
};