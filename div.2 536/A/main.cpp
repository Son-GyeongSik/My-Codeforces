#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int n,cnt=0;
    char arr[500][500];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=1; i<n-1; i++)
    {
        for(int j=1; j<n-1; j++)
        {
            if(arr[i][j]=='X' && arr[i-1][j-1]=='X' && arr[i+1][j-1]=='X' && arr[i+1][j+1]=='X' && arr[i-1][j+1]=='X')
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
