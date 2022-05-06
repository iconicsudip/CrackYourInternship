class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,vector<int>>mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            count++;
            if(mp.find(nums[i])!=mp.end()){
                count--;
            }
            mp[nums[i]].push_back(i);
        }
        int pos = 0;
        for(auto i:mp){
            int k = nums[i.second[0]];
            nums[pos] = k;
            pos++;
        }
        return count;
    }
};