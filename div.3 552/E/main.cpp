#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
typedef struct student{
    int v;
    int idx;
};
bool cmp(student a, student b)
{
    return a.v<b.v;
}
int in[200001],res[200001];
student r[200001];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&in[i]);
        r[i].idx=i;
        r[i].v=in[i];
    }
    sort(r+1,r+n+1,cmp);
    int t=0,cnt=0;
    for(int i=n; i>=1; i--)
    {
        if(cnt==n)
            break;
        if(res[r[i].idx]!=0)
            continue;
        else
        {
            int ri,li;
            ri=li=r[i].idx;
            res[ri]=t+1;
            ri++;
            li--;
            cnt++;
            for(int j=1; j<=k; j++)
            {
                while(res[ri]!=0 && ri<=n)
                    ri+=(2*k)+1;
                if(ri<=n)
                {
                    res[ri]=t+1;
                    cnt++;
                }
                ri++;
                while(res[li]!=0 && li>0)
                    li-=(2*k)+1;
                if(li>0)
                {
                    res[li]=t+1;
                    cnt++;
                }
                li--;
            }
        }
        t=1-t;
    }
    for(int i=1; i<=n; i++)
        cout << res[i];
    cout<<endl;
    return 0;
}
