//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   string palindrome(string S,int start,int end){
      int n=S.length()-1;
      while(start>=0 && end<=n){
          if(S[start]==S[end]){
              start--;
              end++;
          }
          else{
             break; 
          }
      }
      return S.substr(start+1,end-start-1);
      
  }
    string longestPalin (string S) {
      string ans="";
      int len=0;
      for(int i=0;i<S.length();i++){
       string curr=palindrome(S,i,i);
        if(curr.length()>len){
            ans=curr;
            len=curr.length();
        }
         curr=palindrome(S,i,i+1);
        if(curr.length()>len){
            ans=curr;
            len=curr.length();
        }
          
      }
      return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends