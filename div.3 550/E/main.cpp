#include <iostream>

using namespace std;
char a[200001],b[200001];
int d[200002];
int main()
{
    int n;
    cin>>n;
    cin>>a;
    cin>>b;
    int c=0;
    for(int i=n-1; i>=0; i--)
    {
        d[i+1]+=a[i]-'a'+1+b[i]-'a'+1;
        if(a[i]-'a'+1+b[i]-'a'+1>26)
        {
            d[i]++;
            d[i+1]-=26;
        }
    }
    for(int i=1; i<=n; i++)
    {
        int s=(d[i])/2;
        cout<<(char)(s+'a'-1);
        c=(d[i])%2;
    }
    return 0;
}
