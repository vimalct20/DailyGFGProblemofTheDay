//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<string> addOperators(string S, int target) {
        vector<string> ans;
        if(S.empty()) return ans;
        helper(S,target,0,0,0,ans,"");
        return ans;
    }
    void helper(string S,int target,int num,int val,int prev,vector<string> &ans,string store){
        if(num==S.length()){
            if(val==target) ans.push_back(store);
            return;
        }
        for(int i=num;i<S.length();i++){
            if(i!=num && S[num]=='0') break;
            long long curr=stoll(S.substr(num,i-num+1));
          
            if(num==0){
               helper(S,target,i+1,val+curr,curr,ans,store+to_string(curr)); 
            }
            else{
                helper(S,target,i+1,val+curr,curr,ans,store+"+"+to_string(curr)); 
                 helper(S,target,i+1,val-curr,-curr,ans,store+"-"+to_string(curr)); 
                  helper(S,target,i+1,val-prev+prev*curr,prev*curr,ans,store+"*"+to_string(curr)); 
            }
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int target;
        string S;
        cin >> S >> target;

        Solution obj;
        vector<string> ans = obj.addOperators(S, target);
        sort(ans.begin(), ans.end());
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends