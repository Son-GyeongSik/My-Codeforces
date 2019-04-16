#include <iostream>
using namespace std;
int main()
{
    int i,n,a[101]={0,},sum=0,k=1,s[102][3];
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    s[1][1]=1;
    for(i=1; i<=n; i++)
    {
        if(sum+a[i]==0)
        {
            s[k][2]=i-1;
            k++;
            s[k][1]=i;
        }
        else
            sum+=a[i];
    }
    s[k][2]=n;
    if(k==1 && n>1)
    {
        s[1][2]=n-1;
        s[2][1]=s[2][2]=n;
        k++;
    }
    if(n==1 && a[1]==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    cout<<k<<endl;
    for(i=1; i<=k; i++)
        cout<<s[i][1]<<" "<<s[i][2]<<endl;
    return 0;
}
