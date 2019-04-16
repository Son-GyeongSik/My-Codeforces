#include <iostream>
#include <vector>
using namespace std;
vector <int> a[5001];
vector <int> b[5001];
int ui,vi,ti,i,n,m,t,maxx=-1;
int solve(int bef, int now, int time, int p)
{
    if(maxx<p)
        maxx=p;
    int i=0;
    while(a[now][i]>0)
    {
        if(bef!=a[now][i])
            solve(now,a[now][i],time+b[now][i],p+1);
        i++;
    }
    return 0;
}
int main()
{
    cin>>n>>m>>t;
    for(i=1; i<=m; i++)
    {
        cin>>ui>>vi>>ti;
        a[ui].push_back(vi);
        a[vi].push_back(ui);
        b[ui].push_back(ti);
        b[vi].push_back(ti);
    }
    solve(0,1,0,1);
    cout << maxx << endl;
    return 0;
}
