#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i,n,flag=0;
    char a[100];
    cin>>n;
    cin>>a;
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='o' && a[i+1]=='g' && a[i+2]=='o')
        {
            a[i]=a[i+1]=a[i+2]='*';
            cout<<a[i]<<a[i+1]<<a[i+2];
            i++;
        }
        else if(a[i]=='*' || a[i]=='/')
        {
            if(a[i+1]=='g' && a[i+2]=='o')
            {
                a[i+1]=a[i+2]='/';
                i++;
            }
        }
        else
        {
            cout<<a[i];
        }
    }
    return 0;
}
