#include <iostream>
using namespace std;
int main()
{
    char a[100001];
    int q,w,n,i,r1=0,b1=0,r2=0,b2=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]=='r' && i%2==1)
            r1++;
        if(a[i]=='r' && i%2==0)
            r2++;
        if(a[i]=='b' &&i%2==1)
            b1++;
        if(a[i]=='b' &&i%2==0)
            b2++;
    }
    int c=0;
    q=r1+b2;
    w=r2+b1;
    if(q>w)
    {
        while(r2>0 && b1>0)
        {
            r2--;
            b1--;
            c++;
        }
            c+=r2+b1;
    }
    if(q<w)
    {
        while(r1>0 && b2>0)
        {
            r1--;
            b2--;
            c++;
        }
            c+=r1+b2;
    }
    cout << c << endl;
    return 0;
}
