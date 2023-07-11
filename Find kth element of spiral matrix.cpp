//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 	int count=0,l=0,p=0;
 	while(l<n && p<m){
 	    
 	    for(int i=p;i<m;i++){
 	        count++;
 	        if(count==k)return a[l][i];
 	        }
 	        l++;
 	  for(int i=l;i<n;i++){
 	      count++;
 	      if(count==k) return a[i][m-1];
 	  }
 	  m--;
 	  if(l<n){
 	       for(int i=m-1;i>=p;--i){
 	        count++;
 	        if(count==k)return a[n-1][i];
 	        }
 	        n--;
 	  }
 	  if(p<m){
 	       for(int i=n-1;i>=l;--i){
 	        count++;
 	        if(count==k)return a[i][p];
 	        }
 	        p++;
 	  }
 	}	
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends
