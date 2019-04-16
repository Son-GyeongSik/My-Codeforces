#include <iostream>
#include <vector>
using namespace std;
int b[2001];
int main()
{
    vector <int> r[2001];
    vector <int> h;
    int cnt=0,cnt2=0,n,m,a[2001],i,q[2001],w=1,s;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];

        if(a[i]>m)
        {
            cnt++;
            h.push_back(i);
            continue;
        }
        if(a[i]>2000)
        {
            continue;
            cnt++;
            h.push_back(i);
        }
        r[a[i]].push_back(i);
        b[a[i]]++;
    }
    cout<<n/m<<" ";
    s=n%m;
    for(i=1; i<=m; i++)
    {
        b[i]=b[i]-(n/m);
        while(b[i]>0)
        {
            h.push_back(r[i].back());
            r[i].pop_back();
            cnt++;
            b[i]--;
        }
    }
    for(i=1; i<=m; i++)
    {
        while(b[i]<0)
        {
            cnt--;
            a[h.back()]=i;
            h.pop_back();
            b[i]++;
            cnt2++;
        }
    }
    cout << cnt2 << endl;
    for(i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
