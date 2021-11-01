class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> v1,v2;
        vector<int> v3;
        int a=0,min1=INT_MIN;
		// adding each token in the string in the vector
        for (int i=0;i<s.length();i++){
            string k="";
            while(s[i]!=' ' && i<s.length()){
                k+=s[i];
                i++;
            }
            v1.push_back(k);
        }
		// finding largest token length in the vector
        for (int i=0;i<v1.size();i++){
            int size=v1[i].size();
            if (size>min1){min1=size;}
        }
		//iterating to the size of the largets token 
		// as the size of it will be te same as answer vector size
        for (int i=0;i<min1;i++){
            string ans="";
            for (int j=0;j<v1.size();j++){
                string k=v1[j];
                if (k.length()>a) ans+=k[a];
                else{ans+=' ';}
            }
			// to remove trailing spaces in the string ans
            for (int b=ans.length()-1;!isalpha(ans[b]);b--){
                ans.erase(ans.begin()+b);
            }
            a++;
            v2.push_back(ans);
        }
        return v2;
    }
};