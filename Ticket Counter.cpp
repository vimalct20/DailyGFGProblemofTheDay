//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
    
     int i=1,j=N;
    
     int size=N;
     int count=0;
     bool flag = 1;
     bool ans=0;
       while(size-1){
        
        if(flag){
          
            i++;
            size--;
            count++;
            ans=1;
            if(count==K){
             flag=0;
             count=0;
            }
        }
        else{
            j--;
            size--;
             count++;
             ans=0;
            if(count==K){
             flag=1;
             count=0;
            }
        }
       } 
      
     if(ans==1) return i;
     else return j;
         
     
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends