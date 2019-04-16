#include <iostream>
#include <stdio.h>
using namespace std;
int n;
long long cnt;
int arr[200001];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        scanf("%d",&arr[i]);
    cnt+=arr[n];
    for(int i=n-1; i>=1; i--)
    {
        if(arr[i+1]==0)
        {
            arr[i]=0;
            continue;
        }
        if(arr[i]>=arr[i+1])
        {
            cnt+=(long long)(arr[i+1]-1);
            arr[i]=(arr[i+1]-1);
        }
        else
        {
            cnt+=(long long)arr[i];
        }
    }
    cout << cnt << endl;
    return 0;
}
