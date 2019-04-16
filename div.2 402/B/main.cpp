#include <iostream>
#include <string.h>
using namespace std;
char a[20];
int k;
int main()
{
    int cnt=0;
    cin>>a>>k;
    for(int i=strlen(a)-1; i>=0; i--)
    {
        if(a[i]=='0')
            k--;
        else
            cnt++;
        if(k==0)
        {
            cout<<cnt<<endl;
            return 0;
        }
    }
    cout << strlen(a)-1 << endl;
    return 0;
}
