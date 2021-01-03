/*Sarasvati has an array of N non-negative integers. The i-th integer of the array is
Ai
. She wants to choose a contiguous arithmetic subarray from her array that has
the maximum length. Please help her to determine the length of the longest
contiguous arithmetic subarray.*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int curr=2;
        int pd=a[i+1]-a[i];
        for(int j=i+1;j<n;j++)
        {
            if(pd==a[j+1]-a[j])
                curr++;
            else
            {
                break;
            }
        }
        ans=max(curr,ans);
    }
    cout<<ans<<endl;
}