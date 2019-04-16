#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int cnt,kcnt;
long long d;
vector <int>v[100001];
int visit[100001];
int dfs(int now)
{
    kcnt++;
    visit[now]=1;
    for(int i=0; i<v[now].size(); i++)
    {
        if(v[now][i]/10000000==0 && visit[v[now][i]]==0)
        {
            dfs(v[now][i]);
        }
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1; i<n; i++)
    {
        int u,d,x;
        cin>>u>>d>>x;
        int s=d+x*10000000;
        v[u].push_back(s);
        s=u+x*10000000;
        v[d].push_back(s);
    }
    for(int i=1; i<=n; i++)
    {
        if(visit[i]==0)
        {
            dfs(i);
            int q=1;
            if(kcnt==1)
                d++;
            else
            {
                d+=(long long)pow(kcnt,k)%1000000007;
                d%=1000000007;
            }
            kcnt=0;
        }
    }
    cout<<((long long)pow(n,k)-d)%1000000007<<endl;
    return 0;
}
