#include <iostream>
#include <math.h>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m==2)
    {
        if(n%2==0)
        {
            if(n%6==0 || n%6==5)
                cout<<"2"<<endl;
            if(n%6==1 || n%6==4)
                cout<<"1"<<endl;
            if(n%6==2 || n%6==3)
                cout<<"0"<<endl;
        }
        else
        {
            if(n%6==0 || n%6==1)
                cout<<"2"<<endl;
            if(n%6==5 || n%6==2)
                cout<<"1"<<endl;
            if(n%6==3 || n%6==4)
                cout<<"0"<<endl;
        }
    }
    if(m==1)
    {
        if(n%2==0)
        {
            if(n%6==1 || n%6==2)
                cout<<"2"<<endl;
            if(n%6==0 || n%6==3)
                cout<<"1"<<endl;
            if(n%6==5 || n%6==4)
                cout<<"0"<<endl;
        }
        else
        {
            if(n%6==5 || n%6==4)
                cout<<"2"<<endl;
            if(n%6==0 || n%6==3)
                cout<<"1"<<endl;
            if(n%6==2 || n%6==1)
                cout<<"0"<<endl;
        }
    }
    if(m==0)
    {
        if(n%2==0)
        {
            if(n%6==3 || n%6==4)
                cout<<"2"<<endl;
            if(n%6==2 || n%6==5)
                cout<<"1"<<endl;
            if(n%6==0 || n%6==1)
                cout<<"0"<<endl;
        }
        else
        {
            if(n%6==2 || n%6==3)
                cout<<"2"<<endl;
            if(n%6==4 || n%6==1)
                cout<<"1"<<endl;
            if(n%6==0 || n%6==5)
                cout<<"0"<<endl;
        }
    }
    return 0;
}
