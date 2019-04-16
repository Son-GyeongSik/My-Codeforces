#include <iostream>
using namespace std;
char a[10][15];
int main()
{
    int i,j;
    for(i=3; i<=6; i++)
    {
        for(j=3; j<=6; j++)
            cin>>a[i][j];
    }
    for(i=3; i<=6; i++)
    {
        for(j=3; j<=6; j++)
        {
            if(a[i][j]=='x')
            {
                if(a[i-2][j]=='x' && a[i-1][j]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i-1][j]=='x' && a[i-2][j]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i+2][j]=='x' && a[i+1][j]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i+1][j]=='x' && a[i+2][j]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i][j-2]=='x' && a[i][j-1]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i][j-1]=='x' && a[i][j-2]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i][j+1]=='x' && a[i][j+2]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i][j+2]=='x' && a[i][j+1]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i-2][j-2]=='x' && a[i-1][j-1]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i-1][j-1]=='x' && a[i-2][j-2]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i+2][j+2]=='x' && a[i+1][j+1]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i+1][j+1]=='x' && a[i+2][j+2]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i-2][j+2]=='x' && a[i-1][j+1]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i-1][j+1]=='x' && a[i-2][j+2]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i+2][j-2]=='x' && a[i+1][j-2]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i+1][j-1]=='x' && a[i+2][j-2]=='.')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
