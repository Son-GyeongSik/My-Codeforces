#include <iostream>
#include <algorithm>
using namespace std;
int arr[200001],data[200001],ar2[200001];
bool cmp(int a, int b)
{
    return a>b;
}
int main()
{
    int n;
    int cnt=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>data[i];
        arr[data[i]]++;
        if(arr[data[i]]==3)
        {
            cout<<"No"<<endl;
            return 0;
        }
        if(arr[data[i]]==2)
        {
            ar2[cnt]=data[i];
            data[i]=300000;
            cnt++;
        }
    }
    cout<<"Yes"<<endl;
    sort(ar2,ar2+cnt,cmp);
    sort(data+1,data+n+1);
    cout<<n-cnt<<endl;
    for(int i=1; i<=n-cnt; i++)
        cout<<data[i]<<" ";
    cout<<endl<<cnt<<endl;
    for(int i=0; i<cnt; i++)
        cout<<ar2[i]<<" ";
    cout<<endl;
    return 0;
}
