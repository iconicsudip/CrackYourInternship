class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto c:mp){
            if(c.second>=nums.size()/2 && c.second>mp[ans]){
                ans=c.first;
            }
        }
        return ans;
    }
};