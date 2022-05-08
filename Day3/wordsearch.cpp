class Solution {
public:
    bool checkword(vector<vector<char>>& board,int rowpos,int colpos,string word,int wordpos){
        if(wordpos >= word.size()){
            return true;
        }
        if( (rowpos<0 || rowpos>=board.size()) || (colpos<0||colpos>=board[0].size()))return false;
        if(board[rowpos][colpos]!=word[wordpos]){
            return false;
        }
        board[rowpos][colpos] = '1';
        bool right = checkword(board,rowpos,colpos+1,word,wordpos+1);
        bool down = checkword(board,rowpos+1,colpos,word,wordpos+1);
        bool top = checkword(board,rowpos-1,colpos,word,wordpos+1);
        bool left = checkword(board,rowpos,colpos-1,word,wordpos+1);
        board[rowpos][colpos] = word[wordpos];
        
        return top||down||left||right;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int k = 0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(word[0]==board[i][j]){
                    if(checkword(board,i,j,word,k)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};