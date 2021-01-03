#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

void sort012(int *input, int size)
{
    int i=0;
    int nz=0;
    int nt=size-1;
    while(i<=nt)
    {
        if(input[i]==0)
        {
            int temp=input[nz];
            input[nz]=input[i];
            input[i]=temp;
            i++;
            nz++;
        }
        else if(input[i]==1)
            i++;
        else
        {
            int temp=input[nt];
            input[nt]=input[i];
            input[i]=temp;
            nt--;
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}