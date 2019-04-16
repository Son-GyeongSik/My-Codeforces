#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[93];
    cin>>n;
    int i,d=0;
    cin>>a[1];
    for(i=2; i<=n; i++)
    {
        cin>>a[i];
    }
    if(a[n]==0)
        cout<<"UP"<<endl;
    else if(a[n]==15)
        cout<<"DOWN"<<endl;
    else if(n==1)
        cout<<"-1"<<endl;
    else if(a[n]>a[n-1])
        cout<<"UP"<<endl;
    else if(a[n]<a[n-1])
        cout<<"DOWN"<<endl;
    return 0;
}
