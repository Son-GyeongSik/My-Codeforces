#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using namespace std;
bool cmp(int a, int b)
{
    return a<b;
}

int main()
{
    int n,arr[300001];
    long long sum=0;
    cin>>n;
    for(int i=1; i<=n; i++)
        scanf("%d",&arr[i]);
    sort(arr+1,arr+n+1,cmp);
    for(int i=1; i<=n/2; i++)
        sum+=(arr[i]+arr[n-i+1])*(arr[i]+arr[n-i+1]);
    cout<<sum<<endl;
    return 0;
}
