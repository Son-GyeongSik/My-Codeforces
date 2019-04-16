#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
typedef struct st
{
    int s;
    int n;
};
bool cmp(st a, st b)
{
    return a.s<b.s;
}
int main()
{
    int e[30001],i,cnts=1,cnte=1,sum,n,k,kal;
    st s[30001];
    cin>>n>>k;
    for(i=1; i<=n; i++)
        cin>>s[i]>>e[i];
    sort(s+1,s+n+1,cmp);
    sort(e+1,e+n+1,cmp);
    wq=s[1].s;
    while(cnts<=n && cnte<=n)
    {
        if(s[cnts].s<s[cnte].s)
        {
            if(wq==0)
                wq=s[cnts].s
            cnts++;
            kal++;
        }
        else
        {
            if(kal>=k)
            {
                m=e[cnte]-s[wq].s;
                if(m>maxx)
                    maxx=m;
            }
        }

    }
    cout << maxx << endl;
    return 0;
}
