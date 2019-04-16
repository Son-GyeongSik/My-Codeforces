#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
struct food{
    int ing;
    int v;
    int no;
}f[100001];

bool cmp(food a, food b)
{
    if(a.v<b.v)
        return true;
    else if(a.v==b.v)
    {
        if(a.no<b.no)
            return true;
    }
    return false;
}
int main()
{
    int n,m,remain=0,lst[100001];
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&f[i].ing);
        f[i].no=i;
        remain+=f[i].ing;
    }
    for(int i=1; i<=n; i++)
        scanf("%d",&f[i].v);
    sort(f+1,f+n+1,cmp);
    for(int i=1; i<=n; i++)
        lst[f[i].no]=i;
    for(int i=1; i<=m; i++)
    {
        int d,a,cost=0;
        scanf("%d %d",&d,&a);
        int r=a;
        if(remain==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        cost+=f[lst[d]].v*min(f[lst[d]].ing,a);
        r-=min(f[lst[d]].ing,a);
        remain-=min(f[lst[d]].ing,a);
        f[lst[d]].ing-=min(f[lst[d]].ing,a);
        a=r;
        int j=1;
        while(r>0)
        {
            if(remain==0)
            {
                cost=0;
                break;
            }
            cost+=f[j].v*min(f[j].ing,a);
            r-=min(f[j].ing,a);
            remain-=min(f[j].ing,a);
            f[j].ing-=min(f[j].ing,a);
            a=r;
            j++;
        }
        cout<<cost<<endl;
    }
    return 0;
}
