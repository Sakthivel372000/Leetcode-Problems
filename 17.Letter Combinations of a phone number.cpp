static string codes[10]= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
class Solution {
public:
    vector<string> letterCombinations(string digits){
        if (digits.size()==0){
            return {};
        }
        return letter_Combinations(digits);
    }
    vector<string> letter_Combinations(string str){
        if (str.length()==0){
            vector<string> v2;
            v2.push_back("");
            return v2;
        }
        char s= str[0];
        string ros = str.substr(1);
        vector<string> v3 =letter_Combinations(ros);
        vector<string> v4;
        string codeslength= codes[s-'0'];
        for (int i=0;i<codeslength.length();i++){
            char res= codeslength[i];
            for (string res1 : v3){
                v4.push_back(res+res1);
            }
        }
        return v4;
    }  
};