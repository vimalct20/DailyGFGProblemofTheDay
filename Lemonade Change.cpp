//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        if(bills[0]==10 || bills[0]==20 || bills[1]==20) return false;
        int n=bills.size();
        int count5=0,count10=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                count5++;
            }
            else if(bills[i]==10){
                count10++;
                count5--;
            }
            else if(count10>=1 && count5>=1){
                count10--;
                count5--;
            }
            else{
                count5-=3;
            }
            if(count5<0) return false;
        }
        return true;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends