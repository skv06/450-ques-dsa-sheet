#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int row = 0;
	    int col = m-1;
	    int ans = -1;
	    while(row<n && col>=0)
	    {
	        if(arr[row][col]==1){
	            col--;
	            ans=row;
	        }
	        else{
	            row++;
	        }
	    }
	    return ans;
	}

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

/*
Problem:  https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#
*/