#include <iostream>
using namespace std;
int n,maxx,minn=3000000,cntx,cntn,maxa;
int arr[200001],data[200001];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        data[arr[i]]++;
        if(data[arr[i]]>maxx)
        {
            maxx=data[arr[i]];
            maxa=arr[i];
        }
    }
    if(n-maxx==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    cout<<n-maxx<<endl;
    for(int i=2; i<=n; i++)
    {
        if(arr[i-1]==maxa && arr[i]!=maxa)
        {
            if(arr[i]>maxa)
                cout<<"2 "<<i<<" "<<i-1<<endl;
            else
                cout<<"1 "<<i<<" "<<i-1<<endl;
            arr[i]=maxa;
        }
    }
    for(int i=n-1; i>=1; i--)
    {
        if(arr[i+1]==maxa && arr[i]!=maxa)
        {
            if(arr[i]>maxa)
                cout<<"2 "<<i<<" "<<i+1<<endl;
            else
                cout<<"1 "<<i<<" "<<i+1<<endl;
            arr[i]=maxa;
        }
    }
    return 0;
}
