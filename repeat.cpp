#include<iostream>
#include<vector>
#include<algorithm>
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
    sort(arr.begin(),arr.end());
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(count==arr[i])
        {
            count++;
        }
    }
    cout<<count-1<<" "<<count<<endl;
    return 0;
}