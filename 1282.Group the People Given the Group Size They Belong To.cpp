class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> map;
        vector<vector<int>> v1;
        for (int i=0;i<groupSizes.size();i++){
            map[groupSizes[i]].push_back(i);
            if (map[groupSizes[i]].size()==groupSizes[i]){
                v1.push_back(map[groupSizes[i]]);
                map[groupSizes[i]].clear();
            }
        }
        return v1;
    }
};