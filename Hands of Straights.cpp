//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
    multiset<int> s;
    for(auto i:hand){
        s.insert(i);
    }
    while(s.size()){
        int ele = *s.begin();
        for(int i=0;i<groupSize;i++){
            if(s.count(ele+i)==0){
                return 0;
            }
            s.erase(s.find(ele+i));
        }
    }
    return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends