
//  Spiral traversal on a matrix

//  Input:   r = 4, c = 4
/*             matrix[][] = {{1, 2, 3, 4},
                          {5, 6, 7, 8},
                          {9, 10, 11, 12},
                          {13, 14, 15,16}}
*/
//  Output:   1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        int top=0,down=r-1;
        int left=0,right=c-1;
        int path = 0;
        while(top<=down && left<=right){
            // -------> right
            if(path==0){
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top+=1;
            }
            //  down
            if(path==1){
                for(int i=top;i<=down;i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                right-=1;
            }
            //  <------- left
            if(path==2){
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                down-=1;
            }
            //  up
            if(path==3){
                for(int i=down;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left+=1;
            }
            path=(path+1)%4;
        }
        
        return ans;
    }
};


int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}

/*
Problem:  https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
*/