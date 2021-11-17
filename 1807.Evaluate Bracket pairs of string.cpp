class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mymap;
        string ans="";
        // store the key value with the specified eleemnt spot in map
        for (int i=0;i<knowledge.size();i++){
            for (int j=0;j<1;j++){
                mymap[knowledge[i][j]]=knowledge[i][j+1];
            }
        }
        // iterate over string if we find ( we start to add all letters in  a string until )
        for (int i=0;i<s.length();i++){
               if (s[i]=='('){
                   i++;
                   string k;
                   while (s[i]!=')'){
                       k+=s[i];
                       i++;
                   }
                   // the string is checked whether availabe in map or not
                   // if so append key value
                   if (mymap.find(k)!=mymap.end()){
                       ans.append(mymap[k]);
                   }
                   else{
                       ans+='?';
                   }
               }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};