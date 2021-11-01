class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mymap;
        string k="balloon";
        int ans=0;
        for (int i=0;i<text.length();i++){
            mymap[text[i]]++;
        }
        ans=mymap[k[0]];
        for (int i=1;i<k.length();i++){
            if (k[i]=='l'|| k[i]=='o'){
                if (mymap[k[i]]>=2*ans){
                    continue;
                }
                else{
                    if(mymap[k[i]]%2!=0)
                        ans-=((2*ans)-mymap[k[i]])/2+1;
                    else
                        ans-=((2*ans)-mymap[k[i]])/2;
                }
            }
            else if (mymap[k[i]]>=ans){
                continue;
            }
            else if (mymap[k[i]]<ans){
                ans-=1;
            }
        }
       return ans;        
    }
};