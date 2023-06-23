//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
       vector<int> v(26,0);
       for(int i=0;i<N;i++){
           v[tasks[i]-'A']+=1;
       }
       int count=0;
       int ans=0;
       int intr=-1;
       
       for(int i=0;i<26;i++){
           if(v[i]==intr)
           count++;
           else if(v[i]>intr){
               intr=v[i];
               count=1;
           }
       }
       ans=max(N,intr+(intr-1)*(K)+count-1);
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends