#include <iostream>

using namespace std;
long long int n,H,t=0,d,maxx;
long long data[200001];
long long div(long long a, long long b)
{
    return a/b;
}
int main()
{
    cin>>H>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>data[i];
        d-=data[i];
        if(d>maxx)
            maxx=d;
    }
    if(d<=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    t=n*(div((H-maxx>0? H-maxx:0),d));
    H-=d*div(H,d);
    for(int i=1; i<=n; i++)
    {
        H-=data[i];
        t++;
        if(H<=0)
        {
            cout<<t<<endl;
            return 0;
        }
    }
    return 0;
}
