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
    int ans=2;
    int curr=2;
    int pd=a[1]-a[0];
    int j=2;
    while(j<n)
    {
        if(pd==a[j]-a[j-1])
            curr++;
        else
        {
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
}