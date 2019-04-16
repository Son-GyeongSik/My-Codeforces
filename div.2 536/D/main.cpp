#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
bool cmp(int a, int b)
{
    return a<b;
}
vector<int> v[100001];
int n,m,cnt=1;
int visited[100001],out[100001];
int dfs(int no)
{
    if(visited[no]==0)
    {
        visited[no]=1;
        out[cnt++]=no;
    }
    if(cnt>n)
        return 0;
    for(int i=0; i<v[no].size(); i++)
    {
        if(visited[v[no].at(i)]==0)
            dfs(v[no].at(i));
    }
}
int main()
{

    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1; i<=n; i++)
        sort(v[i].begin(),v[i].end(),cmp);
    dfs(1);
    for(int i=1; i<=n; i++)
        printf("%d ",out[i]);
    cout<<endl;
    return 0;
}
