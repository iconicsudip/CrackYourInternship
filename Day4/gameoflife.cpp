class Solution {
public:
    bool valid(int r,int c,int R,int C){
        return (r>=0 && r<R && c>=0 && c<C);
    }
    void gameOfLife(vector<vector<int>>& board) {
        int row = board.size();
        int col = board[0].size();
        vector<vector<int>>copy(row,vector<int>(col,0));
        for (int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                copy[i][j] = board[i][j];
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int count = 0;
                int dx[]={1,1,0,-1,-1,-1,0,1};
                int dy[]={0,1,1,1,0,-1,-1,-1};
                for(int k=0;k<8;k++){
                    if(valid(i+dx[k],j+dy[k],row,col) && copy[i+dx[k]][j+dy[k]]==1){
                        count++;
                    }
                }
                if(count==3 && board[i][j]==0){
                    board[i][j]=1;
                }
                if((count<2 || count>3 )&&board[i][j]==1){
                    board[i][j]=0;
                }
            }
        }
    }
};