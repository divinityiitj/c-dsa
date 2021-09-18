class Solution{
    public:
    vector<string >v;
    void dfs(int i,int j,vector<vector<int>> &m,int n,vector<vector<int>> &vis,string s){
        //check for boundary conditions;
        if(i<0 ||j<0 ||i>=n || j>=n){
            //we have crossed the matrix 
            return;
        }
        //if the block is not accessible or we have visited it already
        if(m[i][j]==0 || vis[i][j]==1){
            return;
        }
        //when reach the dest push the ans in string;
        if(i==n-1 && j==n-1){
            v.push_back(s);
            return;
        }
        //agar teeno condn nhi hui then dfs krenge uspe;
        vis[i][j]=1;//ab ye block visited ho gaya na 
        dfs(i+1,j,m,n,vis,s+'D');
        dfs(i,j+1,m,n,vis,s+'R');
        dfs(i-1,j,m,n,vis,s+'U');
        dfs(i,j-1,m,n,vis,s+'L');
        //after all the iteration ab ye next path k liye unmarked hoga
        vis[i][j]=0;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        v.clear(); //string should be empty for each tc;
        vector<vector<int>> vis(m.size(),vector<int> (m.size()));
        //int n= m.size();
        //if the source is blocked return
        if(m[0][0]==0){
            return v;
        }
        //if dest is blocked then also return;
        if(m[n-1][n-1]==0){
            return v;
        }
        string s="";
        dfs(0,0,m,n,vis,s);
        sort(v.begin(),v.end()); //as this qn demands it;
        return v;
        
    }
};
