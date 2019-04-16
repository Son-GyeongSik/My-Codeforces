#include <iostream>
#include <cstdio>
using namespace std;
int a[100001],n,m,b[100001],c[100001],g[100001];
int main()
{
    int s,k;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%d",&s);
            if(b[j]>s)
                a[j]=1;
            else
                a[j]++;
            b[j]=s;
            if(c[i]<a[j])
                c[i]=a[j];
        }
    }
    cin>>k;
    int l,r;
    for(int i=1; i<=k; i++)
    {
        scanf("%d %d",&l,&r);
        if(c[r]-1>=r-l)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
