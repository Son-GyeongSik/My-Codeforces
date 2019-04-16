#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int n,k,m;
double maxx;
int a[100001];
long long dp[100001];
bool cmp(int a, int b)
{
    return a<b;
}
int main()
{
    cin>>n>>k>>m;
    for(int i=1; i<=n; i++)
        scanf("%d",&a[i]);
    sort(a+1,a+n+1,cmp);
    for(int i=1; i<=n; i++)
        dp[i]=a[i]+dp[i-1];
    for(int i=0; i<n; i++)
    {
        long double avg;
        int mi;
        if(k*(n-i)>m-i)
            mi=m-i;
        else
            mi=(k*(n-i));
        avg=(double)(dp[n]-dp[i]+mi)/(double)(n-i);
        if(maxx<avg)
            maxx=avg;
    }
    printf("%.9lf\n",maxx);
    return 0;
}
