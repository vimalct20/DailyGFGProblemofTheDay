//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
       sort(range.begin(),range.end());
       vector<int> ans;
      
       int idx=0;
       for(int i=1;i<range.size();i++){
           if(range[idx][1]>=range[i][0]){
               range[idx][1]=max(range[idx][1],range[i][1]);
              
           }
           else{
              idx++;
              range[idx]=range[i];
           }
       }
       for(int j=0;j<q;j++){
           int k=queries[j];
           int result=-1;
       for(int i=0;i<=idx;i++){
           if((range[i][1]-range[i][0]+1)>=k){
              result=range[i][0]+k-1;
              break;
           }
           else{
               k=k-(range[i][1]-range[i][0]+1);
           }
       }
       ans.push_back(result);
       }
       return ans;
    } 
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(n, range, q, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends