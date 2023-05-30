//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool isWordExist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]==word[0]&& help(board,word,i,j,0))
                return true;
            }
        }
        return false;
    }
    bool help(vector<vector<char>>& board,string word,int i,int j,int len){
        if(len==word.size()) return true;
        if(i<0 || j<0 || i>=board.size()|| j >=board[0].size()){
            return false;
        }
        if(board[i][j]!=word[len])
        return false;
        board[i][j]='*';
        return help(board,word,i+1,j,len+1) 
        || help(board,word,i-1,j,len+1) || 
        help(board,word,i,j+1,len+1)
        || help(board,word,i,j-1,len+1);
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends