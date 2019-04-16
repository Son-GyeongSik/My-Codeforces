#include <iostream>

using namespace std;
int ladd[150001][27];
int radd[150001][27];
int main()
{
    int n;
    int p[150001][2];
    char l[150000],r[150000];
    cin>>n;
    cin>>l;
    cin>>r;
    int lc[27],rc[27];
    int lt=n,rt=n;
    for(int i=0; i<n; i++)
    {
        if(l[i]=='?')
        {
            ladd[lc[0]][0]=i;
            lc[0]++;
        }
        else if(l[i]!='?')
        {
            ladd[lc[l[i]-'a'+1]][l[i]-'a'+1]=i;
            lc[l[i]-'a'+1]++;
        }

        if(r[i]=='?')
        {
            radd[rc[0]][0]=i;
            rc[0]++;
        }
        else if(r[i]!='?')
        {
            radd[rc[r[i]-'a'+1]][r[i]-'a'+1]=i;
            rc[r[i]-'a'+1]++;
        }
    }
    int cnt=0;
    for(int i=1; i<=26; i++)
    {
        while(lc[i]>0 && rc[i]>0)
        {
            lc[i]--;
            rc[i]--;
            lt--;
            rt--;
            p[cnt][0]=ladd[lc[i]][i];
            p[cnt][1]=radd[rc[i]][i];
            cnt++;
        }
        while(lc[0]>0 && rc[i]>0)
        {
            lc[0]--;
            rc[i]--;
            lt--;
            rt--;
            p[cnt][0]=ladd[lc[0]][0];
            p[cnt][1]=radd[rc[i]][i];
            cnt++;
        }
        while(lc[i]>0 && rc[0]>0)
        {
            lc[i]--;
            rc[0]--;
            lt--;
            rt--;
            p[cnt][0]=ladd[lc[i]][i];
            p[cnt][1]=radd[rc[0]][0];
            cnt++;
        }
    }
    while(lc[0]>0 && rc[0]>0)
    {
        lc[0]--;
        rc[0]--;
        p[cnt][0]=ladd[lc[0]][0];
        p[cnt][0]=radd[rc[0]][0];
        cnt++;
    }
    cout<<cnt<<endl;
    for(int i=0; i<cnt; i++)
    {
        cout<<p[i][0]+1<<" "<<p[i][1]+1<<endl;
    }
    return 0;
}
