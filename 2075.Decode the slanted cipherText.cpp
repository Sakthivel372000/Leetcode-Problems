class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        string last_string="",ans="",anss="";
        if (encodedText.length()==0) 
            return "";
        int col= encodedText.size()/rows;
        if (col==0 || rows==1) return encodedText;
        char mat[rows][col];
        // to keep track of the visited diagonals
        vector<vector<int>> visited(rows, vector<int>(col, 0));
        int k=0;
        for (int i=0;i<rows;i++){
            for (int j=0;j<col;j++){
                mat[i][j]=encodedText[k];
                k++;
            }
        }
        // once we visit a diagonal mark all the elements as in visited matrix 1 to ensure we dont visit same diagonal to reuce time complexity
        for (int i=0;i<rows;i++){
            for (int j=0;j<col;j++){
                int a=i,b=j;
                if (visited[a][b]==0){
                   while (a< rows && b < col){
                         ans+=mat[a][b];
                         visited[a][b]=1;
                         a++;
                         b++;
                    }
                }
            }
        }
        int i=ans.length()-1;
        // to erase trailing spaces in answer
        while (ans[i]==' '){
            ans.pop_back();
            i--;
        }
        return ans;
    }
};