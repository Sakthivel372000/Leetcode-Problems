class Solution {
public:
    int numDifferentIntegers(string s) {
        vector<string> v1,v2;
        int count=0;
         for (int i=0;i<s.length();i++){
             if (isdigit(s[i])){
                 if (s[i]=='0' && isdigit(s[i+1])){
                     continue;
                 }
                 else{
                     string k="";
                     while (isdigit(s[i]) && i<s.length()){
                         k+=s[i];
                         i++;
                     }
                     v1.push_back(k);
                 }
             }
         }
        sort(v1.begin(),v1.end());
        for (int i=0;i<v1.size();i++){
            while (i<v1.size()-1 && v1[i]==v1[i+1]){
                i++;
            }
            count++;
        }
       return count;
    } 
};