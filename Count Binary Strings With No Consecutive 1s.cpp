//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   const int MOD=1e9+7;
    int countStrings(long long int N) {
        vector<vector<int>> matrix={{1,1},{1,0}};
        vector<vector<int>> res=matrixresult(matrix,N+1);
        return res[0][0];
    }
    
    
     
    vector<vector<int>> multiplymatrix(vector<vector<int>> &a,vector<vector<int>> &b){
        vector<vector<int>> result(2,vector<int>(2));
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                for(int k=0;k<2;k++){
                    result[i][j]=(result[i][j]+(long long)a[i][k]*b[k][j]) % MOD;
                }
            }
        }
        return result;
    }
    
    
    
    
    
    vector<vector<int>> matrixresult(vector<vector<int>> &a,long long int n){
        
        vector<vector<int>> result={{1,0},{1,0}};
        while(n>0){
            if(n%2==1){
                result=multiplymatrix(result,a);
            }
            a=multiplymatrix(a,a);
            n/=2;
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int N;
        cin >> N;
        Solution obj;
        cout << obj.countStrings(N) << endl;
    }
}
// } Driver Code Ends