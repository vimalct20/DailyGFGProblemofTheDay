//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        int n=s.length()-1;
        int left=0;
        int right=n;
        while(left<=right){
            if(s[left]!=s[right]&&s[left]!='?' && s[right]!='?')
            return -1;
            left++;
            right--;
        }
        string str="";
        left=0;
        right=n;
          while(left<=right){
            if(s[left]!='?')
            str+=s[left];
            else if(s[right]!='?')
            str+=s[right];
            left++;
            right--;
        }
        int result=0;
        for(int i=1;i<str.length();i++){
            result+=2*abs(str[i]-str[i-1]);
            
        }
        return result;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends