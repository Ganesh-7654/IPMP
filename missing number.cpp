#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n-1);
    int x=1;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        x=x|(1<<arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(!(x&1<<i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}