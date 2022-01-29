class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive,negative,final_ans;
        for (int i=0;i<nums.size();i++){
            if (nums[i]>0)
                 positive.push_back(nums[i]);
        }
        for (int i=0;i<nums.size();i++){
            if (nums[i]<0)
                 negative.push_back(nums[i]);
        }
        for (int i=0;i<positive.size();i++){
            final_ans.push_back(positive[i]);
            final_ans.push_back(negative[i]);
        }
        return final_ans;
    }
};