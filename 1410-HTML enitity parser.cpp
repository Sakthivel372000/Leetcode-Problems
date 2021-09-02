class Solution {
public:
    string entityParser(string s) {
        string k="";
        for (int i=0;i<s.length();i++){
            if (s[i]=='&'){
                if (i+4<=s.length() && s.substr(i+1,4)==("amp;")){
                    k+='&';
                    i+=4;
                }
                else if (i+5<=s.length() && s.substr(i+1,5)==("quot;")){
                    k.append("\"");
                    i+=5;
                }
                else if (i+5 <=s.length() && s.substr(i+1,5)==("apos;")){
                    k+="'";
                    i+=5;
                }
                else if (i+3<=s.length() && s.substr(i+1,3)==("gt;")){
                    k+='>';i+=3;
                }
                else if (i+3 <= s.length() && s.substr(i+1,3)==("lt;")){
                    k+='<';i+=3;
                }
                else if (i+6<=s.length() && s.substr(i+1,6)==("frasl;")){
                    k+="/";i+=6;
                }
                else{
                    k+=s[i];
                }
            }
            else{
                k+=s[i];
            }
        }
        return k;
    }
};