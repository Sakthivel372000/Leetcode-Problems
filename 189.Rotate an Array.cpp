Approach1 :

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       if (k>nums.size()){
           k%=nums.size();
       }
       for (int i=0,j=nums.size()-k-1;i<j;i++,j--){
           int temp=nums[i];
           nums[i]=nums[j];
           nums[j]=temp;
       }
       for (int i=nums.size()-k,j=nums.size()-1;i<j;i++,j--){
           int temp=nums[i];
           nums[i]=nums[j];
           nums[j]=temp;
       }
        reverse(nums.begin(),nums.end());
    }
};

Approach 2 (using built-in reverse):

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       if (k>nums.size()){
           k%=nums.size();
       }
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.begin()+(nums.size()-k),nums.end());
        reverse(nums.begin(),nums.end());
    }
};