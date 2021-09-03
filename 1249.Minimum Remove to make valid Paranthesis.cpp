class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>> st;
        string k="",g="";
        // stack to find and store the unbalanced brackets along wth index
        for (int i=0;i<s.length();i++){
            if (s[i]=='('){
                st.push({s[i],i});
            }
            else if (!st.empty() && s[i]==')' && st.top().first=='('){
                st.pop();
            }
            else if (s[i]==')'){
                st.push({s[i],i});
            }
            k+=s[i];
        }
        // wherever te unbalanced bracket occurs mark that index with '0'
        while (!st.empty()){
            int d=st.top().second;
            k[d]='0';
            st.pop();
        }
        // ignore '0' and add it in new string to get result
        for (int i=0;i<k.length();i++){
            if (k[i]!='0'){
                g+=k[i];
            }
        }
        return g;
    }
};