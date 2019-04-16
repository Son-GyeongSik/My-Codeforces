#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int k=m/n;
    if(m%n!=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    int cnt=0;
    while(k>1)
    {
        if(k%2==0)
        {
            k/=2;
            cnt++;
        }
        else if(k%3==0)
        {
            k/=3;
            cnt++;
        }
        else
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout << cnt << endl;
    return 0;
}
