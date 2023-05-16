//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    static bool powerof5(long dec){
        if(dec==0) return false;
        if(dec==1) return true;
        if(dec%5!=0) return false;
        else
        return powerof5(dec/5);
    }
    int cuts(string s){
       int n= s.length();
       int dp[n+1];
       dp[0]=0;
       for(int i =1;i<=n;i++){
           int j=i-1;
           if(s[j]=='0')
           dp[i]=-1;
           
           else{
              
               dp[i]=-1;
               int curr=INT_MAX;
               int dec=0;
               for(int k=0;k<i;k++){
                   if(s[j-k]=='1'){
                       dec+=1<<k;
                       if(powerof5(dec) && dp[j-k]!=-1){
                           curr=min(1+dp[j-k],curr);
                           
                       }
                   }
               }
               if(curr!=INT_MAX) dp[i]=curr;
           }
       }
       return dp[n];
        
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   string s;
   while(t--)
   {
    cin>>s;
    Solution obj;
    int res=obj.cuts(s);
    cout<<res<<endl;

   }


    return 0;
}

// } Driver Code Ends