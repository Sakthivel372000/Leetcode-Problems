class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int> mymap1,mymap2;
        vector<int> v1,v2;
        for (char c : word1)
            mymap1[c]++;
        for (char c : word2)
            mymap2[c]++;
        for (auto c : mymap1)
            v1.push_back(c.second);
        for (auto c : mymap2)
            v2.push_back(c.second);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for (int i=0;i<word1.length();i++){
            if (mymap2.find(word1[i])==mymap2.end())
                return false;
        }
        return v1==v2;
    }
};