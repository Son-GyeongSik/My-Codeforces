#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int arr[100001];
int n,m,k,d;
int a[100001];
int minn;
bool cmp(int a, int b)
{
    return a>b;
}
int main()
{
    cin>>n>>m>>k;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        if(i>1)
            arr[i-1]=a[i]-a[i-1];
    }
    sort(arr+1,arr+n,cmp);
    d=a[n]-a[1]+1;
    minn=d;
    for(int i=1; i<k; i++)
    {
        d=d-arr[i]+1;
        if(minn>d)
            minn=d;
    }
    cout<<d<<endl;
    return 0;
}
