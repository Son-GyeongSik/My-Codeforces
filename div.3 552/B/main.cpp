#include <iostream>
#include <math.h>
using namespace std;
int abs(int a)
{
    if(a<0)
        return -a;
    return a;
}
int main()
{
    int n;
    int a[101];
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    else if(n==2)
    {
        if(abs(a[2]-a[1])%2==0)
            cout<<(abs(a[2]-a[1]))/2<<endl;
        else
            cout<<"-1"<<endl;
        return 0;
    }
    for(int i=1; i<=n; i++)
    {
        int check=0;
        int j;
        for(j=1; j<=n; j++)
        {
            if(abs(a[i]-a[j])!=0)
            {
                if(check==0)
                    check=abs(a[i]-a[j]);
                else if(check!=abs(a[i]-a[j]))
                    break;
            }
        }
        if(j>n)
        {
            cout<<check<<endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}
