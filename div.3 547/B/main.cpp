#include <iostream>

using namespace std;
int n;
int data[200001];
int main()
{
    cin>>n;
    int d,cnt=0,fd,maxx=0;
    for(int i=1; i<=n; i++)
    {
        cin>>data[i];
        if(data[i]==0)
        {
            if(cnt>maxx)
                maxx=cnt;
            cnt=0;
        }
        else
            cnt++;
    }
    int i=1;
    while(data[i]==1)
    {
        i++;
    }
    if(maxx<=cnt+i-1)
        maxx=cnt+i-1;
    cout << maxx << endl;
    return 0;
}
