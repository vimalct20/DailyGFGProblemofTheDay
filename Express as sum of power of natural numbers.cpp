//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int mod=1000000007;
    int numOfWays(int n, int x)
    {
      vector<int> a;
      for(int i=1;i<=n;i++){
          if(pow(i,x)<=n) a.push_back(pow(i,x));
          else break;
      }
      vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
      return help(n,a,0,a.size(),dp);
    }
    int help(int n ,vector<int> &a,int i,int size,  vector<vector<int>> &dp){
        if(n<0) return 0;
        if(i==size){
            if(n==0) return dp[i][n]=1;
            else return dp[i][n]=0;
        }
        if(dp[i][n]!=-1) return dp[i][n];
        return dp[i][n]= ((help(n,a,i+1,size,dp) %mod + help(n-a[i],a,i+1,size,dp) %mod) %mod);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends