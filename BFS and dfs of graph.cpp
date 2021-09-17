vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> vis(V,false);
        vector<int>bfs;
        queue<int> q;
        q.push(0);
        vis[0]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            bfs.push_back(node);
            for(auto i:adj[node]){
                if(!vis[i]){
                    q.push(i);
                    vis[i]=true;
                }
            }
        }
        return bfs;
    }
void dfshelper(vector<int> adj[],vector<int> &dfs,int node,vector<int> &vis){
        dfs.push_back(node);
        vis[node]=1;
        for(auto i:adj[node]){
            if(!vis[i]){
                dfshelper(adj,dfs,i,vis);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        vector<int> dfs;
        for(int i=0;i<=V;i++){
            if(!vis[i]){
                dfshelper(adj,dfs,i,vis);
            }
        }
        return dfs;
    }
