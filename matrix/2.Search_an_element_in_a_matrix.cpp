
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int val;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++)
        {
            if(target<=matrix[i][m-1]){
                val=i;
                for(int j=0;j<m;j++)
                {
                    if(matrix[val][j]==target){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

/*
Problem:  https://leetcode.com/problems/search-a-2d-matrix/
sol:  https://leetcode.com/problems/search-a-2d-matrix/submissions/
*/