class Solution {
public:
    string arrangeWords(string text) {
        priority_queue<pair<pair<int,string>,int>,vector<pair<pair<int,string>,int>>,compare> pq;
        vector<string> v1;
        string l="";
        for (int i=0;i<text.length();i++){
            string k="";
            while (text[i]!=' ' && i<text.length()){
                k+=tolower(text[i]);
                i++;
            }
            v1.push_back(k);
        }
        for (int i=0;i<v1.size();i++){
            int len=v1[i].length();
            pq.push({{len,v1[i]},i});
        }
        while (!pq.empty()){
             l+=pq.top().first.second;
             if (pq.size()>1){
                 l+=" ";
             }
             pq.pop();
        }
        l[0]=toupper(l[0]);
        return l;
    }
    struct compare{
         bool operator()(pair<pair<int,string>,int> p1,pair<pair<int,string>,int> p2){
             if (p1.first.first==p2.first.first){
                 return p1.second>p2.second;
             }
             else{
                 return p1.first.first>p2.first.first;
             }
             
         }
    };  
};