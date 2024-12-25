#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void unionarray(vector<int>&a,vector<int>&b)
{
    vector<int>result;
    int i=0;
    int j=0;
    while(i<a.size()&&j<b.size())
    {
        if(a[i]<b[j])
        {
            if(find(result.begin(),result.end(),a[i])==result.end())
            {
                result.push_back(a[i]);
            }
            i++;
        }
        else if(a[i]>b[j])
        {
            if(find(result.begin(),result.end(),b[j])==result.end())
            {
                result.push_back(b[j]);
            }
            j++;
        }
        else if(a[i]==b[j])
        {
            if(find(result.begin(),result.end(),a[i])==result.end())
            {
                result.push_back(a[i]);
            }
            i++;
            j++;
        }
    }
    while(i<a.size())
    {
        if(find(result.begin(),result.end(),a[i])==result.end())
        {
                result.push_back(a[i]);
        }
        i++;
    }
    while(j<b.size())
    {
        if(find(result.begin(),result.end(),b[j])==result.end())
        {
            result.push_back(b[j]);
        }
        j++;
    }
    for(auto b:result)
    {
        cout<<b<<" ";
    }
    cout<<endl;
}
void intersectionarray(vector<int>&a,vector<int>&b)
{
    vector<int>result;
    int i=0;
    int j=0;
    while(i<a.size()&&j<b.size())
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else if(a[i]==b[j])
        {
            if(find(result.begin(),result.end(),b[j])==result.end())
            {
                result.push_back(b[j]);
            }
            i++;
            j++;
        }
    }
    for(auto b:result)
    {
        cout<<b<<" ";
    }
    cout<<endl;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    unionarray(a,b);
    intersectionarray(a,b);
    return 0;
}