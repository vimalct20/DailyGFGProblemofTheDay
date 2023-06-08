//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
   
      int fact=1;
      vector<int> ans;
      for(int i=1;i<=n;i++){
          ans.push_back(i);
     
      }
      for(int i=1;i<n;i++){
         
          fact*=i;
      }
      k--;
      string ans1="";
      for(int i=n-1;i>=0;i--){
          int divn=k/fact;
          ans1.push_back(ans[divn]+'0');
          ans.erase(ans.begin()+divn);
          k=k%fact;
          if(i==0) break;
          fact=fact/i;
          }
          return ans1;
      
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends