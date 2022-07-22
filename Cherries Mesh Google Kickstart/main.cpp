#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll ans;

void dfs(ll i, bool v[], vector<ll> adj[])
{
    v[i]=true;

    ll j, l=adj[i].size();

    for(j=0; j<l; j++)
    {
        if(v[adj[i][j]]==false)
        {
            dfs(adj[i][j], v, adj);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, m, i, j, v1, v2;

    cin>>t;

    for(j=1; j<=t; j++)
    {
        cin>>n>>m;

        ans=0;

        bool v[n+1];

        for(i=1; i<=n; i++)
        {
            v[i]=false;
        }

        vector<ll> adj[n+1];

        for(;m--;)
        {
            cin>>v1>>v2;

            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }

        for(i=1; i<=n; i++)
        {
            if(v[i]==false)
            {
                ans++;
                dfs(i, v, adj);
            }
        }

        cout << "Case #" << j << ": " << n+ans-2 << "\n";

    }
}