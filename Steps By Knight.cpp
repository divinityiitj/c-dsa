class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int n)
	{
	    // Code here
	   int x1= KnightPos[0]; 
	   int y1=KnightPos[1];
	   int x2=TargetPos[0];
	   int y2=TargetPos[1];
	    //for 0 based indexing
	    if(KnightPos[0]==TargetPos[0] && KnightPos[1]==TargetPos[1]){
	        return 0;
	    }
	    //vector<vector<int>> vis(n,vector<int> (n));
	    int vis[n+1][n+1];
	  //  memset(vis,0,sizeof(vis));
	  for(int i=0;i<n;i++){
	      for(int j=0;j<n;j++){
	          vis[i][j]=0;
	      }
	  }
	    queue<pair<int,int>> q;
	    //queue mei x and y coordinates push kro
	    q.push({x1-1,y1-1});
	    while(!q.empty()){
	        auto cur = q.front();
	        int i=cur.first;
	        int j=cur.second;
	        q.pop();
	        //ab hm is point se sare points jo dhai ghar p h vahan jayenge ---
	        // total 8 cases bnege or hr point p hm uska distance store add kr denge by a[i_curr][j_curr]+1;
          // 1 and 2 k direction all with signs k total 8 cases 
	        
	        if((i+1)>=0 && (i+1)<n && (j+2)>=0 && (j+2)<n && vis[i+1][j+2]==0 ){
	            vis[i+1][j+2]=vis[i][j]+1;
	            q.push({i+1,j+2});
	        }
	        if((i+1)>=0 && (i+1)<n && (j-2)>=0 && (j-2)<n && vis[i+1][j-2]==0 ){
	            vis[i+1][j-2]=vis[i][j]+1;
	            q.push({i+1,j-2});
	        }
	        if((i-1)>=0 && (i-1)<n && (j+2)>=0 && (j+2)<n && vis[i-1][j+2]==0 ){
	            vis[i-1][j+2]=vis[i][j]+1;
	            q.push({i-1,j+2});
	        }
	        if((i-1)>=0 && (i-1)<n && (j-2)>=0 && (j-2)<n && vis[i-1][j-2]==0 ){
	            vis[i-1][j-2]=vis[i][j]+1;
	            q.push({i-1,j-2});
	        }
	        if((i+2)>=0 && (i+2)<n && (j+1)>=0 && (j+1)<n && vis[i+2][j+1]==0 ){
	            vis[i+2][j+1]=vis[i][j]+1;
	            q.push({i+2,j+1});
	        }
	        if((i+2)>=0 && (i+2)<n && (j-1)>=0 && (j-1)<n && vis[i+2][j-1]==0 ){
	            vis[i+2][j-1]=vis[i][j]+1;
	            q.push({i+2,j-1});
	        }
	        if((i-2)>=0 && (i-2)<n && (j+1)>=0 && (j+1)<n && vis[i-2][j+1]==0 ){
	            vis[i-2][j+1]=vis[i][j]+1;
	            q.push({i-2,j+1});
	        }
	        if((i-2)>=0 && (i-2)<n && (j-1)>=0 && (j-1)<n && vis[i-2][j-1]==0 ){
	            vis[i-2][j-1]=vis[i][j]+1;
	            q.push({i-2,j-1});
	        }
	    }
	    return vis[x2-1][y2-1];
	    
	}
};
