#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>g[],int u,int v)
{
    g[u].emplace_back(v);
}

vector<int>ts(vector<int>g[],int size)
{
    vector<int>r;
    queue<int>q;
    vector<int>id(size,0);

    for (int i = 0; i < size; i++)
    {
    for(int j=0;i<g[i].size();i++)
    {
        id[g[i][j]]++;
    }
    }
    for(int i=0;i<id.size();i++)
    {
        if(id[i]==0)
        {
            q.push(id[i]);
        }
        while(!q.empty())
        {
            int v=q.front();
            q.pop();
            r.emplace_back(v);
        for (auto i = g[v].begin(); i!=g[v].end(); i++)
        {
            id[*i]--;
            if(id[*i]==0)
            {
                q.push(*i);
            }
        }
        
    }
    }
    return r;
}
int main()
{
      
    int n;cin>>n;
    int e;cin>>e;
    vector<int>g[n]; 
    for (int i = 0; i < n; i++)
    {
        int u;cin>>u;
        int v;cin>>v;
        addEdge(g,u,v);
    }
    int size;
    
    vector<int>r=ts(g,size);
    if(r.size()!=size)
    {
        cout<<"No";
    }
    else{
        cout<<"Sort"<<endl;
    }
    for(int i: r)
    {
        cout<<i<<endl;
    }
    return 0;
}
