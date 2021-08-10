class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mymap,tm;
        vector<int> v1;
        for (int i=0;i<p.length();i++){
            mymap[p[i]]++;
            tm[p[i]]++;
        }
        int i=0,j=0,count=mymap.size(),k=p.length(),ans=0;
        while(j<s.length()){
            if (tm[s[j]]>0){
                mymap[s[j]]--;
                if (mymap[s[j]]==0){
                    count--;
                }
            }
            if ((j-i+1)<k){
                j++;
            }
            else if ((j-i+1)==k){
                if (count==0){
                    v1.push_back(i);
                }
                if (tm[s[i]]>0){
                    mymap[s[i]]++;
                }
                if (mymap[s[i]]==1){
                    count++;
                }
                i++;
                j++;
            }
        }  
    return v1;
    }
};