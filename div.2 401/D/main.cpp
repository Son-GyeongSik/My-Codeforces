#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
char a[500001],b[500001];
char s[500001][500001];
int n;
int main()
{
    cin>>n;
    scanf("%s",&a);
    for(int i=2; i<=n; i++)
    {
        int j;
        scanf("%s",&b);
        for(j=1; j<strlen(b); j++)
            if(a[j]>b[j])
            {
                for(int k=0; k<j; k++)
                    printf("%c",a[k]);
                cout<<endl;
                break;
            }
        if(j==strlen(b))
        {
            if(b[j-1]==a[j-1])
            {
                for(int k=0; k<strlen(b); k++)
                {
                    printf("%c",a[k]);
                    a[k]=b[k];
                }
            }
            else
            {
                for(int k=0; k<strlen(a); k++)
                {
                    printf("%c",a[k]);
                    a[k]=b[k];
                }
            }
            cout<<endl;
        }
        else
        {
            for(j=1; j<strlen(b); j++)
                a[j]=b[j];
        }
        a[strlen(b)]='\0';
    }
    printf("%s\n",b);
    return 0;
}
