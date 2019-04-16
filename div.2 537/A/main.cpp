#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;

int main()
{
    char a[1001],b[1001];
    cin>>a;
    cin>>b;
    if(strlen(a)!=strlen(b))
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
                continue;
        }
        else
        {
            if(b[i]!='a' && b[i]!='e' && b[i]!='i' && b[i]!='o' && b[i]!='u')
                continue;
        }
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    return 0;
}
