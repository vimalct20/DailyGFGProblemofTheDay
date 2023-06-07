//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
       vector<int> ans;
        vector<int> prime;
         if(n>=0) ans.push_back(0);
         if(n>=1) ans.push_back(1);
         if(n>=2) ans.push_back(2);
         if(n>=3) ans.push_back(3);

             prime.push_back(3);
        for(int i=5;i<=n;i+=6){
            bool flag=0;
            bool flag1=0;
        for(int j=5;j*j<=i;j+=6){
            if(i%j==0 || i%(j+2)==0 ) flag=1;
            if((i+2)%j==0 || (i+2)%(j+2)==0 || (i+2>n)){
            flag1=1;
           
            }
        }
        
        if(flag==0) prime.push_back(i);
        if(flag1==0) prime.push_back(i+2);
        }
         
       
        for(int i=4;i<=n;i++){
          int flag=1;
          if(i%2==0)  ans.push_back(2);
          else{ 
                for(int j=0;j<prime.size();j+=1){
                    if(i%prime[j]==0 && flag){
                      ans.push_back(prime[j]);
                      flag=0;
                    } 
                 
                }
          }
            }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends