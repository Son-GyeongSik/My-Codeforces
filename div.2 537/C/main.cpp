#include <iostream>
#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
long long data[100002];
int n,k,A,B;
int thanos(long long st, long long ed, int kst, int ked, int lv)
{
    if(kst>=ked)
        return A;
    if(lv==0)
        return B;
    int piv=(kst+ked-1)/2;
    int mid=st+ed/2;
    long long scorea, scoreb=0;
    scorea=B*(ed-st)*(ked-kst);
    if(data[piv]>mid)
    {
        while(data[piv]>mid)
            piv--;
        scoreb+=thanos(st,mid,kst,piv+1,lv-1);
        scoreb+=thanos(mid,ed,piv+1,ked,lv-1);
        return min(scorea,scoreb);
    }
    else
    {
        while(data[piv]<=mid)
            piv++;
        scoreb+=thanos(st,mid,kst,piv,lv-1);
        scoreb+=thanos(mid,ed,piv,ked,lv-1);
        return min(scorea,scoreb);
    }
}
bool cmp(int a, int b)
{
    return a<b;
}
int main()
{
    cin>>n>>k>>A>>B;
    for(int i=1; i<=k; i++)
        scanf("%lld",&data[i]);
    sort(data,data+n,cmp);
    cout<<thanos(0,pow(2,n),1,k+1,n)<<endl;
    return 0;
}
