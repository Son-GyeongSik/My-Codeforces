#include <iostream>
using namespace std;
int minn(int a,int b,int c)
{
    if((a<=b && b<=c) || (a<=c && c<=b))
        return a;
    else if((b<=a && a<=c) || (b<=c && c<=a))
        return b;
    return c;
}
int main()
{
    int arr[3];
    int consume[7]={0,1,2,0,2,1,0};
    cin>>arr[0]>>arr[1]>>arr[2];
    int cnt=0;
    int week;
    week=minn(arr[0]/3,arr[1]/2,arr[2]/2);
    cnt+=(week*7);
    arr[0]-=3*week;
    arr[1]-=2*week;
    arr[2]-=2*week;
    int maxx=0;
    for(int i=0; i<7; i++)
    {
        int brr[3];
        brr[0]=arr[0];
        brr[1]=arr[1];
        brr[2]=arr[2];
        int day=i;
        int cnta=0;
        while(true)
        {
            if(brr[consume[day]]==0)
                break;
            else
            {
                brr[consume[day]]--;
                cnta++;
            }
            day++;
            day%=7;
        }
        if(cnta>maxx)
            maxx=cnta;
    }
    cout << maxx+cnt << endl;
    return 0;
}
