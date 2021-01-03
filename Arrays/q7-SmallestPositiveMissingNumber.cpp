/*Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int N=100;
    bool check[N];
    for(int i=0;i<N;i++)
        check[i]=false;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
            check[a[i]]=true;
    }
    for(int j=1;j<N;j++)
    {
        if(check[j]==false)                
        {
            ans=j;
            break;
        }
    }
    cout<<ans<<endl;
}