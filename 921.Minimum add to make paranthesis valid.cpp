class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans=0;
        for (int i=0;i<s.length();i++){
            if (s[i]=='(')
                st.push(s[i]);
            // we only keep opening brace '(' in the stack when we encounter a closing brace and stack is not empty we pop the element (its matching pair)
            else{
                if (st.size()>0)
                    st.pop();
                // as there is no matching pair we increment ans (to count the non matching braces)
                else
                    ans++;
            }
        }
        // we add stack size to count non matching open braces
        return ans+st.size();
    }
};