#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        k=k^arr[i];
    }
    cout<<k<<endl;
    return 0;
}