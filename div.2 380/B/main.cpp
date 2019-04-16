#include <iostream>
using namespace std;
int a[1001][1001],b[1001][1001],c[1001][1001],d[1001][1001],e[1001][1001];
int main()
{
    int k,i,j,n,m,cnt=0;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                if(b[i][j]==2)
                {
                    b[i][j]=1;
                    cnt--;
                }
                if(c[i][j]==2)
                {
                    c[i][j]=1;
                    cnt--;
                }
                if(d[i][j]==2)
                {
                    c[i][j]=1;
                    cnt--;
                }
                if(e[i][j]==2)
                {
                    c[i][j]=1;
                    cnt--;
                }
                e[i][j]=c[i][j]=d[i][j]=b[i][j]=1;
                    for(k=j+1; k<=m; k++)
                    {
                        if(b[i][k]==2)
                            break;
                        if(b[i][k]==0)
                        {
                            b[i][k]=2;
                            cnt++;
                        }
                    }
                    for(k=j-1; k>=1; k--)
                    {
                        if(c[i][k]==2)
                            break;
                        if(c[i][k]==0)
                        {
                            c[i][k]=2;
                            cnt++;
                        }
                    }
                    for(k=i-1; k>=1; k--)
                    {
                        if(d[k][j]==2)
                            break;
                        if(d[k][j]==0)
                        {
                            d[k][j]=2;
                            cnt++;
                        }
                    }
                    for(k=i+1; k<=n; k++)
                    {
                        if(e[k][j]==2)
                            break;
                        if(e[k][j]==0)
                        {
                            e[k][j]=2;
                            cnt++;
                        }
                    }
                }
            }
        }
    cout<<cnt<<endl;
    return 0;
}
