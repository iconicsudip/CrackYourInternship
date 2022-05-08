class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        for(int i=cardPoints.size()-k;i<cardPoints.size();i++){
            sum = sum + cardPoints[i];
        }
        int result = sum;
        int i = 0;
        int j = cardPoints.size()-k;
        while(j<cardPoints.size()){
            sum = sum - cardPoints[j] + cardPoints[i];
            result = max(result,sum);
            i++;
            j++;
        }
        return result;
    }
};