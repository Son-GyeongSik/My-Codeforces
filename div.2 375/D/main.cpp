#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cnt=0;
    char a[51][51];
bool cmp(int a, int b)
{
    return a<b;
}
int dfs(int x,int y)
{
    cnt++;
    a[x][y]=';';
    if(a[x+1][y]=='.')
    {
        a[x][y]=';';
        dfs(x+1,y);
    }
    if(a[x-1][y]=='.')
    {
        a[x][y]=';';
        dfs(x-1,y);
    }
    if(a[x][y+1]=='.')
    {
        a[x][y]=';';
        dfs(x,y+1);
    }
    if(a[x][y-1]=='.')
    {
        a[x][y]=';';
        dfs(x,y-1);
    }
    return 0;
}
int main()
{
    typedef pair<int,int> pa;
    vector<pa> v;
    int n,m,k,i,j,cnt2=1,q[100],x[50],y[50];
    cin>>n>>m>>k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            cin>>a[i][j];
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(a[i][j]=='.')
            {
                dfs(i,j);
                if(i==1 || i==n || j==m || j==1)
                    continue;
                q[cnt2]=cnt;
                x[cnt2]=i;
                y[cnt2]=j;
                cnt=0;
                cnt2++;
            }
        }
    }
    for(i=1; i<=cnt2-1; i++)
    {
        for(j=i; j<=cnt2-1; j++)
        {
            if(q[])
        }
    }
    int l=0;
    for(i=0; i<k; i++)
    {
        l+=v[i];
        dfs2()
    }
    cout<<l+1<<endl;
    return 0;
}
