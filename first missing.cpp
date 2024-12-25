#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    int count=1;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==count)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
