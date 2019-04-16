#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#include <string.h>
using namespace std;
int a[6],b[6],c[6];
int main()
{
    int n,m,cnt=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>m;
        a[m]++;
    }
    for(int i=1; i<=n; i++)
    {
        cin>>m;
        b[m]++;
    }
    for(int i=1; i<=5; i++)
    {
        c[i]=(a[i]-b[i]);
    }
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(i!=j && c[i]>0 && c[j]<0)
            {
                while(1)
                {
                    c[i]-=2;
                    c[j]+=2;
                    cnt++;
                    if(c[i]<=0 || c[j]>=0)
                        break;
                }
            }
            if(i!=j && c[i]<0 && c[j]>0)
            {
                while(1)
                {
                    c[i]+=2;
                    c[j]-=2;
                    cnt++;
                    if(c[i]>=0 || c[j]<=0)
                        break;
                }
            }
        }
    }
    int i;
    for(i=1; i<=5; i++)
    {
        if(c[i]!=0)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
