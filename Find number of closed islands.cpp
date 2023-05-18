//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
    void dfs(int i,int j,vector<vector<int>>& matrix){
        if(i<0|| i>= matrix.size() ||j<0 || j>= matrix[0].size() || matrix[i][j]==0){
            return;
        }
        matrix[i][j]=0;
        dfs(i+1,j,matrix);
        dfs(i-1,j,matrix);
        dfs(i,j+1,matrix);
        dfs(i,j-1,matrix);
    }
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
             
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(i*j==0 || i==(N-1) || j==(M-1)){
                if (matrix[i][j]==1)
                dfs(i,j,matrix);
                
            }
        }
    }
    int ans=0;
      for(int i=0;i<N-1;i++){
        for(int j=0;j<M-1;j++){
            if(matrix[i][j]==1){
                dfs(i,j,matrix);
                ans++;
            }
        }
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends