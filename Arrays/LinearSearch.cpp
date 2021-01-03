#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
            return i;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n],key;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>key;
    cout<<linearSearch(a,n,key)<<endl;
}