bool isCyclePresent(int src,vector<int> adj[],vector<int> &vis){
        queue<pair<int,int>> q; //store node and its parent;
        vis[src]=1;
        q.push({src,-1}); //0 ka parent -1 maan lo
        while(!q.empty()){
            int node= q.front().first;
            int parent= q.front().second;
            q.pop();
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(parent!=it){
                    return true;
                }
            }
            
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(isCyclePresent(i,adj,vis)){
                    return true;
                }
            }
        }
        return false;
    }
