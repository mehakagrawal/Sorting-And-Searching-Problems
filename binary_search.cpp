#include <iostream>
using namespace std;

int binary_search(int a[], int k, int r, int l)
{
    if(r >= l)
    {
        int mid = l + (r + l)/2;

        if(k == a[mid])
        {
            cout<<"Element "<<k<<" is present at location "<<(mid+1);
        }

        else if(k > a[mid])
        {
            binary_search(a, k, r, mid+1);
        }
        
        else if(k < a[mid])
        {
            binary_search(a, k, mid-1, l);
        }

        else
        {
            cout<<"Element "<<k<<" is not present in the given array.";
        }
    }
}

int main()
{
    int arr[10000], N, K;

    cout<<"Enter the size of array: ";
    cin>>N;

    cout<<"Enter the elements of array: ";
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the key element you want to search: ";
    cin>>K;

    binary_search(arr, K, N-1, 0);

    return 0;
}