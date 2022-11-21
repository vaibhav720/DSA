class Solution {
public:
     
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> vis(isConnected.size(),false);
        vector<int> adj[isConnected.size()];
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=i+1;j<isConnected[i].size();j++)
            {
                if(isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        
        
        int co=0;
        queue<int> q;
        for(int i=0;i<isConnected.size();i++)
        {
            if(vis[i]==false){
            co++;
                //cout<<i<<" ";
            q.push(i);
                vis[i]=true;
            while(!q.empty())
            {
                int front=q.front();
                q.pop();
                for(int j=0;j<adj[front].size();j++)
                {
                    if(vis[adj[front][j]]==false)
                    {
                        q.push(adj[front][j]);
                        vis[adj[front][j]]=true;
                    }
                }
            }
            }
                  }
        return co;
        
    }
};