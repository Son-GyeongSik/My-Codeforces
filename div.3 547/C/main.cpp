#include <iostream>
#include <algorithm>
using namespace std;
int n;
int data[200001],x[200001];
int main()
{
    cin>>n;
    int d;
    for(int i=1; i<n; i++)
    {
        cin>>d;
        data[i]=data[i-1]+d;
        x[i]=data[i];
    }
    sort(data,data+n);
    for(int i=1; i<n; i++)
    {
        if(data[i]-data[i-1]!=1)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    int s=data[0];
    for(int i=0; i<n; i++)
    {
        cout<<x[i]-s+1<<" ";
    }
    cout << endl;
    return 0;
}
