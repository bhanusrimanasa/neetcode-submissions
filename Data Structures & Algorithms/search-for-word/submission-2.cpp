class Solution {
public:
bool search(string& word,int i,int j,vector<vector<char>>&board,int index){
      int m=board.size();
        int n=board[0].size();
    if(index==word.length())return true;
    if(i<0||i>=m||j<0||j>=n||board[i][j]!=word[index]){return false;}
    char temp=board[i][j];
    board[i][j]='#';
            bool found=search(word,i+1,j,board,index+1)||search(word,i,j+1,board,index+1)||search(word,i-1,j,board,index+1)||search(word,i,j-1,board,index+1);
    board[i][j]=temp;
    return found;
    
}
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        if(word=="")return true;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(search(word,i,j,board,0)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
