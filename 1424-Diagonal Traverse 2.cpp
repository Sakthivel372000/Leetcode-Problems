class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,compare> pq;
        vector<int> v1;
        for (int i=0;i<mat.size();i++){
            for (int j=0;j<mat[i].size();j++){
                pq.push({i,{i+j,mat[i][j]}});
            }
        }
        while (!pq.empty()){
            v1.push_back(pq.top().second.second);
            pq.pop();
        }
        return v1;
    }
    struct compare{
        bool operator()(pair<int,pair<int,int>> p1,pair<int,pair<int,int>>p2){
            if (p1.second.first==p2.second.first){
                return p1.first<p2.first;
            }
            else{
                return p1.second.first>p2.second.first;
            }
        }
    };  
};