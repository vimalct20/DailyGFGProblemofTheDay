//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long counts(long long N){
        long long x=0;
        while((1<<x)<=N){
            x++;
        }
        return x-1;
    }
  long long countBits(long long N) {
      if(N==0) return 0;
  long long x=counts(N);
  long long y=x*(1<<(x-1));
  long long z=N-(1<<x);
  return y+z+countBits(z)+1;
    }
  
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends