class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int r=mat.size();
        int c= mat[0].size();
        // initialisng a 2d vector with 0 so we can use this vector to mark the all visieted elements of that particular
        vector<vector<int>> visited(r, vector<int>(c, 0));
        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                int a=i,b=j;
                // max heap is used to store the largest value of that diagonal at top followed by smaller  values
                priority_queue<int,vector<int>,greater<int>> pq;
                if (visited[a][b]==0){
                    while (a<r && b< c){
                        pq.push(mat[a][b]);
                        a++;
                        b++;
                    }
                    a=i;
                    b=j;
                }
                // top value of the heap is stored in ith row and jth col and corresponding other values are stored
                if (visited[a][b]==0){
                    while ( a < r && b <c){
                        mat[a][b]=pq.top();
                        pq.pop();
             // marking the visited array with 1 so we dont repeat the process if we come across same element again to reduce time complexity
                        visited[a][b]=1;
              // here we fix value as 1 in all the elements of that particular diagonal we visted so even if we reach the other element of the same diagonal as the sorting process is complete for that diagonal we ignore that element
                        a++;b++;
                    }
                }          
            }
        }
        return mat;   
    }
};