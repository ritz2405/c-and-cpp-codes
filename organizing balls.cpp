#include <bits/stdc++.h>

using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> M(n);
        for (int i = 0; i < n; i++) 
        {
            M[i].resize(n);

            for (int j = 0; j < n; j++)
            {
                cin >> M[i][j];
            }
        }
        vector<int> col(n,0),row(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                col[i]+=M[i][j];
                row[i]+=M[j][i];
            }
        }
        sort(col.begin(),col.end());
        sort(row.begin(),row.end());

        if(col==row)
            cout<<"Possible"<<endl;
        else 
            cout<<"Impossible"<<endl;
    }
        return 0;
    
}