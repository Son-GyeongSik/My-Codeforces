#include <iostream>
using namespace std;
int main()
{
    int n,m,i;
    char a;
    cin>>n>>m;
    for(i=1; i<=n*m; i++)
    {
        cin>>a;
        if(a=='B' || a=='W' || a=='G')
            continue;
        else
        {
            cout<<"#Color"<<endl;
            return 0;
        }
    }
    cout << "#Black&White" << endl;
    return 0;
}