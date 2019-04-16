#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[255];
    int k;
    cin>>k;
    cin>>a;
    int s=0,d=0,i,maxx=0,cnt1=0,cnt2=0;
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='(')
        {
           if(cnt1>maxx)
           {
               maxx=cnt1;
           }
           cnt1=0;
           d=1;
           continue;
        }
        if(a[i]==')')
        {
            s=0;
            d=0;
            continue;
        }
        if(d==1)
        {
            if(a[i]!='_' && s==0)
            {
                cnt2++;
                s=1;
            }
            else if(a[i]=='_')
            {
                s=0;
            }
        }
        if(d==0)
        {
            if(a[i]!='_')
            {
                cnt1++;
                if(i+1==strlen(a))
                {
                    if(cnt1>maxx)
                        maxx=cnt1;
                }
            }
            else
            {
                if(cnt1>maxx)
                    maxx=cnt1;
                cnt1=0;
            }
        }
    }
    cout << maxx <<" "<<cnt2<< endl;
    return 0;
}
