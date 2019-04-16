#include <iostream>
#include <string.h>
using namespace std;
int alp[26];
char a[200];
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        int t=0;
        for(int i=0; i<strlen(a); i++)
        {
            if(alp[a[i]-'a']!=0)
            {
                t=1;
                break;
            }
            alp[a[i]-'a']++;
        }
        if(t)
        {
            cout<<"No"<<endl;
            for(int i=0; i<26; i++)
                alp[i]=0;
            continue;
        }
        int ss=0;
        for(int i=0; i<26; i++)
        {
            if(ss && alp[i-1]==0 && alp[i]==1)
            {
                cout<<"No"<<endl;
                t=1;
                break;
            }
            if(alp[i]==1)
                ss=1;
        }
        if(!t)
            cout<<"Yes"<<endl;
        for(int i=0; i<26; i++)
            alp[i]=0;
    }
    return 0;
}
