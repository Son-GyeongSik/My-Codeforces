#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
bool cmp(int a, int b)
{
    return a<b;
}
int main()
{
    char a[101];
    char b[101];
    int c[101];
    int n,k,i;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a;
        c[i]=strlen(a);
    }
    cin>>b;
    sort(c,c+n, cmp);
    int time=0;
    int g,t=0;
    for(i=0; i<n; i++)
    {
        time++;
        if(t==0 && c[i]==strlen(b))
        {
            cout<<time<<" ";
            t=1;
        }
        else if((c[i]==strlen(b)&&c[i+1]>strlen(b)) || i==n-1)
        {
            cout<<time<<endl;
            return 0;
        }
        if(i%k==0)
        {
            time+=5;
            continue;
        }
    }
    return 0;
}
