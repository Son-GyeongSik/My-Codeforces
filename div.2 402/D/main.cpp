#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
char a[200001],b[200001];
int main()
{
    scanf("%s %s",&a,&b);
    int s=strlen(a);
    int n,p=0,cnt=0;
    while(1)
    {
        if(s<strlen(b))
            break;
        cin>>n;
        a[n-1]='0';
        int k=0;
        int i;
        for(i=p; i<strlen(a); i++)
        {
            if(a[i]==b[k])
            {
                k++;
                if(k==1 && i>p)
                    p=i;
            }
            if(k==strlen(b))
                break;
        }
        if(i==strlen(a))
            break;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
