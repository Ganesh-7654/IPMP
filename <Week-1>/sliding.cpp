#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long long n,m,r,c;
        cin>>n>>m>>r>>c;
        long long k=m*(n-r)+(m-1)*(n-r)+(m-c);
        cout<<k<<endl;
        t--;
    }
    return 0;
}