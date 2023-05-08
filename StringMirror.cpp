//Solution for 07/05/2023
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
     string ans="";
        ans+=str[0];
        for(int i=1;i<str.length();i++){
            if(str[i-1]>str[i] || (i>1 && str[i-1]==str[i]))
            ans+=str[i];
            else
            break;
        }
        string curr=ans;
        reverse(curr.begin(),curr.end());
        return ans+curr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends