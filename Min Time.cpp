//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    long long minTime(int n, vector<int> &locations, vector<int> &types) {
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            if(mp.find(types[i]) != mp.end() ){
                mp[types[i]][0]=min(locations[i], mp[types[i]][0]);
                mp[types[i]][1]=max(locations[i], mp[types[i]][1]);
            }
            else{
                mp[types[i]].push_back(locations[i]);
                mp[types[i]].push_back(locations[i]);
            }
        }
        vector<vector<int>> v;
        vector<int> zero={0,0};
        v.push_back(zero);
         
        for(auto it:mp){
            v.push_back(it.second);
        }
         v.push_back(zero);
         n=v.size();
         vector<vector<long long>> dp(n,vector<long long> (2,0));
          for(int i=1;i<n;i++){
           dp[i][0]=dp[i-1][0]+abs(v[i-1][1]-v[i][0])+abs(v[i][1]-v[i][0]);
              dp[i][0]=min(dp[i][0],dp[i-1][1]+abs(v[i-1][0]-v[i][0])+abs(v[i][1]-v[i][0]));
             dp[i][1]=dp[i-1][0]+abs(v[i-1][1]-v[i][1])+abs(v[i][1]-v[i][0]);
             dp[i][1]=min(dp[i][1],dp[i-1][1]+abs(v[i-1][0]-v[i][1])+abs(v[i][1]-v[i][0]));
         }
         return dp[n-1][0];
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> locations(n);
        for(int i=0;i<n;i++){
            cin>>locations[i];
        }
        
        
        vector<int> types(n);
        for(int i=0;i<n;i++){
            cin>>types[i];
        }
        
        Solution obj;
        long long res = obj.minTime(n, locations, types);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends