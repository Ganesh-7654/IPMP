#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n+2);
    for(int i=0;i<n+2;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int>m;
    for(int i=0;i<n+2;i++)
    {
        m[arr[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(m[i]==2)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}