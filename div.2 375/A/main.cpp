#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
int as(int a)
{
    if(a>0)
        return a;
    else
        return -a;
}
int main()
{
    int j,i,a[4],s;
    cin>>a[1]>>a[2]>>a[3];
    if(a[1]>a[2])
    {
        if(a[1]<=a[3])
            s=a[1];
        else
        {
            if(a[3]>=a[2])
                s=a[3];
            else
                s=a[2];
        }
    }
    else
    {
        if(a[2]<=a[3])
            s=a[2];
        else
        {
            if(a[3]>=a[1])
                s=a[3];
            else
                s=a[1];
        }
    }
    int c=as(a[1]-s)+as(a[2]-s)+as(a[3]-s);
    cout<<c;
    return 0;
}
