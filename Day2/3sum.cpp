class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        set<vector<int>> s;
        if (nums.size() >= 3) {
            sort(nums.begin(), nums.end());
            int i = 0;
            while (i < nums.size() - 2) {
                int j = i + 1, k = nums.size() - 1;
                while (j < k) {
                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum < 0) {
                        j++;
                    }
                    else if (sum > 0) {
                        k--;
                    }
                    else {
                        s.insert({ nums[i], nums[j], nums[k] });
                        j++;
                        k--;
                    }
                }
                i++;
            }
			for(auto i:s){
                result.push_back(i);
            }
        }
        return result;
    }
};