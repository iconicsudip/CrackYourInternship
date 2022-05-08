class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0;
        int right = matrix[0].size() - 1;
        int top = 0;
        int down = matrix.size()-1;
        vector<int>ans;
        while(left<=right && top<=down){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=down;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[down][i]);
            }
            down--;
            for(int i=down;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        ans.assign(ans.begin(),ans.begin()+(matrix[0].size()*matrix.size()));
        return ans;
    }
};