/*Find whether there exist 2 numbers that sum to K.
Important: The Array should be sorted for two pointer approach.
Idea: keep a low and high pointer, decide which pointer to move on the basis of
arr[low] + arr[high].*/
#include<bits/stdc++.h>
using namespace std;
bool pairsum(int arr[],int n,int k)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if(arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}
int main()
{
    int a[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(a,8,k)<<endl;
}