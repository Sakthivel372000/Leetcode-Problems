class Solution {
public:
    string recurse (int id,int n,string ans,string final_ans1){
        if (id==n-1){
            return final_ans1;
        }
        final_ans1 = ans+"1"+ invert(ans);
        string k=recurse(id+1,n,final_ans1,final_ans1);
        return k;
    }
    string invert(string s){
        for (int i=0;i<s.length();i++){
            if (s[i]=='0') s[i]='1';
            else s[i]='0';
        }
        reverse(s.begin(),s.end());
        return s;
    }
    char findKthBit(int n, int k) {
        string str,ans="0",ans1="";
        str= recurse(0,n,ans,ans1);
        if (n==1) return '0';
        return str[k-1];
    }
};