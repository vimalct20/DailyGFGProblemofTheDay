//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void find(string &S,int l,int r,vector<string> &ans){
	        if(l==r){
	            ans.push_back(S);
	        }
	        for(int i=l;i<=r;i++){
	            swap(S[i],S[l]);
	            find(S,l+1,r,ans);
	             swap(S[i],S[l]);
	            
	        }
	        
	    }
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		   find(S,0,S.length()-1,ans);
		   sort(ans.begin(),ans.end());
		   ans.erase(unique(ans.begin(),ans.end()),ans.end());
		   return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends