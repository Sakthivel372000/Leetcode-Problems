class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mymap;
        vector<vector<string>> v1;
        for (int i=0;i<strs.size();i++){
            string k=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mymap[strs[i]].push_back(k);
        }
        for (auto i: mymap){
            v1.push_back(i.second);
        }
        return v1;
    }
};