#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int even[2001],odd[2001],ec=0,oc=0;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a%2==0)
        {
            even[ec]=a;
            ec++;
        }
        else
        {
            odd[oc]=a;
            oc++;
        }
    }
    int s=0;
    if(ec==oc || oc+1==ec || oc==ec+1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    else
    {
        if(oc>ec)
        {
            sort(odd,odd+oc);
            for(int i=0; i<oc-ec-1; i++)
                s+=odd[i];
        }
        else
        {
            sort(even,even+ec);
            for(int i=0; i<ec-oc-1; i++)
                s+=even[i];
        }
    }
    cout << s<< endl;
    return 0;
}
