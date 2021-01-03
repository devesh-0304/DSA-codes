/*Find the subarray in an array which has maximum sum*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int curr=0;
            for(int k=i;k<=j;k++)
            {
                curr+=a[k];
            }
            ans=max(curr,ans);
        }
    }
    cout<<ans<<endl;
}