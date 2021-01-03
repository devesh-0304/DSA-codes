#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int n)
{
    int i=0;
    int j=n-1;
    while(i<(n/2))
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Reverse of the given array is "<<endl;
    reverse(a,n);
}