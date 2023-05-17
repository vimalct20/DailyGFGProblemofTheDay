//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isPossible(int n, int m, string s){
       
        int a=0,b=0,c=0,d=0;
        int left=0,right=0;
       
              for(int k=0;k<s.length();k++){
                  if(s[k]=='L'){
                  left--;
                  }
                  else  if(s[k]=='R'){
                    left++;
                  }
                 else if(s[k]=='D'){
                   right--;
                  }
                  else  if(s[k]=='U'){
                  right++;
                  }
                  if(left>=0)
                  a=max(a,left);
                  else
                  b=min(b,left);
                  if(right>=0)
                  c=max(c,right);
                  else
                  d=min(d,right);
              }
              if(a-b <m && c-d<n) return 1;
        return 0;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends