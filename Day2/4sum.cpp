class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>ans;
        if(nums.size()<4){
            return {};
        }
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                int f = target - (nums[i]+nums[j]);
                int first = j+1;
                int last = nums.size()-1;
                while(first<last){
                    int sum = nums[first]+nums[last];
                    if(sum==f){
                        s.insert({nums[i],nums[j],nums[first],nums[last]});
                        first++;
                        last--;
                    }else if(sum>f){
                        last--;
                    }else{
                        first++;
                    }
                }
            }
        }
        for(auto c:s){
            ans.push_back(c);
        }
        return ans;
    }
};