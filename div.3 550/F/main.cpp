#include <iostream>
#include <vector>
using namespace std;
vector <int>v[200001];
int bw[200001],data[200001][2];
bool dfs(int now)
{
    for(int i=0; i<v[now].size(); i++)
    {
        if(bw[now]==bw[v[now][i]])
            return true;
        else if(bw[v[now][i]]==0)
        {
            bw[v[now][i]]=(1-(bw[now]-1))+1;
            if(dfs(v[now][i]))
                return true;
        }
    }
    return false;
}
void cleaner(int now)
{
    bw[now]=0;
    for(int i=0; i<v[now].size(); i++)
    {
        if(bw[v[now][i]]!=0)
            dfs(v[now][i]);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>data[i][0]>>data[i][1];
        v[data[i][0]].push_back(data[i][1]);
        v[data[i][1]].push_back(data[i][0]);
    }
    for(int i=1; i<=n; i++)
    {
        if(bw[i]==0)
        {
            bw[i]=1;
            if(dfs(i))
            {
                cleaner(i);
                bw[i]=2;
                if(dfs(i))
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"Yes"<<endl;
    for(int i=1; i<=m; i++)
    {
        if(bw[data[i][0]]==1)
            cout<<"1";
        else
            cout<<"0";
    }
    cout<<endl;
    return 0;
}
