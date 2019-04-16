#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,b,a;
    int ca,cb;
    int in;
    cin>>n>>b>>a;
    ca=a;
    cb=b;
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&in);
        if(in==1)
        {
            if(ca<a && cb>0)
            {
                cb--;
                ca++;
                cnt++;
            }
            else if(ca>0)
            {
                ca--;
                cnt++;
            }
        }
        if(in==0)
        {
            if(ca>0)
            {
                ca--;
                cnt++;
            }
            else if(cb>0)
            {
                cb--;
                cnt++;
            }
        }

    }
    cout << cnt << endl;
    return 0;
}
