class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string> myset;
        vector<string> v1,v3,v2;
        string ans;
        for (int i=0;i<dictionary.size();i++)
             myset.insert(dictionary[i]);
        for (int i=0;i<sentence.length();i++){
            string k="";
            while (sentence[i]!=' ' && i<sentence.length()){
                k+=sentence[i];
                i++;
            }
            v1.push_back(k);
        }
        for (int i=0;i<v1.size();i++){
            string replace="";
            vector<string> v2;
            for (int j=0;j<v1[i].size();j++){
                replace=v1[i].substr(0,j);
                if (myset.find(replace)!=myset.end()){
                    v2.push_back(replace);
                }
            }
            if (v2.size()>0){
                if (v3.size()!=0) v3.push_back(" ");
                v3.push_back(v2[0]);
            }
            else {
               if (v3.size()!=0) v3.push_back(" ");
                v3.push_back(v1[i]);
            }
        }
        for (auto i : v3)
             ans+=i;
        return ans;
    }
};