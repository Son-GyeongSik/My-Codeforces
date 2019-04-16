#include <iostream>

using namespace std;
short db[10000001];
int n,data[51];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>data[i];
        data[i]+=data[i-1];
    }
    int maxa=0,maxt;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            db[data[j]-data[i]+5000000]++;
            if(db[data[j]-data[i]+5000000]>maxa)
            {
                maxa=db[data[j]-data[i]+5000000];
                maxt=data[j]-data[i];
            }
        }
    }
    cout<<maxa<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(data[j]-data[i]==maxt)
            {
                cout<<i+1<<" "<<j<<endl;
            }
        }
    }
    return 0;
}
