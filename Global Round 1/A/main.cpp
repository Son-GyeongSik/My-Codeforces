#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int b, k, a[100001];
    int o=0,e=0;
    cin>>b>>k;
    for(int i=k-1; i>=0; i--)
    {
        scanf("%d",&a[k-i]);
    }
    if(b%2==0 && a[k]%2==0)
    {
        cout<<"even"<<endl;
        return 0;
    }
    for(int i=k-1; i>=0; i--)
    {
        if(a[k-i]%2==0 || (b%2==0 && i>0) || (i==0 && a[k]%2==0))
            e++;
        else
            o++;
    }
    if(o%2==0)
        cout<<"even"<<endl;
    else
        cout<<"odd"<<endl;
    return 0;
}
