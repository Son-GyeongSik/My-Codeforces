#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
    char a[65000];
    int n;
    long long cnt=0;
    cin>>n;
    cin>>a;
    for(int i=0; i<n; i++)
    {
        if((a[i]-'0')%2==0)
        {
            cnt+=(i+1);
        }
    }
    cout << cnt << endl;
    return 0;
}
