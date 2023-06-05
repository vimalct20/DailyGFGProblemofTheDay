//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            stack<string> m;
        string str="";
        string ans="";
           for(int i=0;i<s.length();i++){
             
               if(s[i]!='+' && s[i]!='-' && s[i]!='*' && s[i]!='/' ){
                   str+=s[i];
               }
               else{
               
                   m.push(str);
                   string str2="";
                   str2+=s[i];
                    m.push(str2);
                    
                str="";
               }
           }
           m.push(str);
             while(!m.empty()){
             
              ans+=m.top();
              m.pop();
           }
           return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends