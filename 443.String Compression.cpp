class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> v1;
        int j=0;
        for (int i=0;i<chars.size();i++){
            j=i;
             while (j<chars.size() && chars[i]==chars[j]){
                 j++;
             }
            int  min=abs(j-i);
            string k=to_string(min);
            v1.push_back(chars[i]);
            if (k.length()==1 && min==1) continue;
            else if (k.length()==1) v1.push_back(k[0]);
            else {
                int l=0;
                while (l<k.length()){
                    v1.push_back(k[l]);
                    l++;
                }
            }
            i=j;
            i--;
        }
        for (int i=0;i<v1.size();i++){
            chars[i]=v1[i];
        }
        return v1.size();
    }
};