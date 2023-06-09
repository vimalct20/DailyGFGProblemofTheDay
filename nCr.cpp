//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
  
    int nCr(int n, int r){
        int dp[r+1];
        for(int i=0;i<(r+1);i++)
        dp[i]=0;
        dp[0]=1;
        if(r>n) return 0;
        if(n==r || r==0) return 1;
        if(r>n-r) r=n-r;
        const int mod=1e9+7;
        for(int i=0;i<=n;i++){
            for(int j=min(i,r);j>0;j--){
                dp[j]=(dp[j]%mod + dp[j-1]%mod)%mod;
            }
        }
        return dp[r];
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends