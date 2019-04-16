#include <iostream>
using namespace std;
int c[101];
int main()
{
    int n,cnt=0;
    char a[101];
    cin>>n;
    int i;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]=='W' && a[i-1]=='B')
            cnt++;
        if(a[i]=='B')
            c[cnt]++;
        if(i==n && a[i]=='B')
            cnt++;
    }
    cout<<cnt<<endl;
    for(i=0; i<cnt; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}
