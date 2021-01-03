//Given  array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).
#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        cout<<"Max till "<<i<<"="<<mx<<endl;
    }
}