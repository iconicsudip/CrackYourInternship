class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            int dist = j-i;
            int amount;
            if(height[i]<height[j]){
                amount = height[i];
                i++;
            }else{
                amount = height[j];
                j--;
            }
            ans = max(ans,amount*dist);
        }
        return ans;
    }
};