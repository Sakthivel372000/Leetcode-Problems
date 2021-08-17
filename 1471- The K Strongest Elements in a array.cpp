class Solution {
public:
    struct compare{
        bool operator()(pair<int,int> p1,pair<int,int> p2){
            if (p1.first==p2.first){
                return p1.second<p2.second;
            }
            else{
                return p1.first<p2.first;
            }
        }
    };
    vector<int> getStrongest(vector<int>& arr, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
        vector<int> v1;
        sort(arr.begin(),arr.end());
        int median= arr.size()%2!=0 ? arr[(arr.size()/2)] :arr[arr.size()/2-1];
        for (int i=0;i<arr.size();i++){
            pq.push({abs(arr[i]-median),arr[i]});
        }
        while (!pq.empty() && k--){
            v1.push_back(pq.top().second);
            pq.pop();
        }
        return v1;
    }
};