#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int a[200001],b[200001],oll[200001];
struct css{
    int ss,no;
}c[200001];
bool cmp(css a, css b)
{
    return a.ss<b.ss;
}
int main()
{
    int n,k,money=0;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        scanf("%d",&a[i]);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&b[i]);
        c[i].ss=(a[i]-b[i]);
        c[i].no=i;
        if(a[i]<b[i])
        {
            money+=a[i];
            k--;
            oll[i]=1;
            c[i].ss=99999;
        }
    }
    sort(c+1,c+n+1,cmp);
    for(int i=1; i<=k; i++)
    {
        money+=a[c[i].no];
        oll[c[i].no]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(oll[i]==0)
            money+=b[i];
    }
    cout << money << endl;
    return 0;
}
