#include <iostream>
#include <cstdio>
using namespace std;
int s1[10],m1[10],n,s2[10],m2[10];
int main()
{
    int d,a=0,b=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        scanf("%1d",&d);
        s1[d]++;
        s2[d]++;
    }
    for(int i=1; i<=n; i++)
    {
        scanf("%1d",&d);
        m1[d]++;
        m2[d]++;
    }
    for(int i=9; i>=0; i--)
    {
        if(m1[i]==0)
            continue;
        for(int j=i; j>=0; j--)
        {
            if(m1[i]==0)
                break;
            while(1)
            {
                if(m1[i]==0 || s1[j]==0)
                    break;
                if(s1[j]!=0)
                {
                    s1[j]--;
                    m1[i]--;
                }
            }
        }
    }
    for(int i=0; i<=9; i++)
        a+=s1[i];
    for(int i=8; i>=0; i--)
    {
        if(s2[i]==0)
            continue;
        for(int j=i+1; j<=9; j++)
        {
            if(s2[i]==0)
                break;
            while(1)
            {
                if(s2[i]==0 || m2[j]==0)
                    break;
                if(m2[j]!=0)
                {
                    m2[j]--;
                    s2[i]--;
                    b++;
                }
            }
        }
    }
    cout<<a<<endl<<b<<endl;
    return 0;
}
