class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
         m =M.size(); //no of rows
         n=M[0].size(); // no of col
        // we traverse from 2nd last col and go to the 1st col by considering
        //the maximum value that would be obtained in the rightward column
        for(int col=n-2;col>=0;col--){
            for(int row =0;row<m;row++){
               // M[row][col]
               int right = M[row][col+1];
               int rightup = (row==0)? 0: M[row-1][col+1]; //checking the boundary cases 
               int rightdown = (row==m-1) ? 0 :M[row+1][col+1]; 
               M[row][col]+= max(right,max(rightup,rightdown));
            }
        }
        //no the maximum gold ans will be found in the first col;
        int ans = M[0][0];
        for(int i=1;i<m;i++){
            ans =max(ans,M[i][0]);
        }
        return ans;
    }
};
