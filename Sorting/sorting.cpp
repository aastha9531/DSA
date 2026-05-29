#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) 
{
    for (int i = 0; i < n-1; i++) 
    {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
           {
             if (arr[j] < arr[min_idx])
               {
               min_idx = j;
               }
        swap(arr[min_idx], arr[i]);
    }
} }

void bubbleSort(int arr[], int n) 
{
    for (int i = n-1; i > 0; i--) 
    {
        for (int j = 0; j <= i; j++) 
        {
            if (arr[j] > arr[j+1]) 
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void insertionSort(int arr[], int n) 
{
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


int main()
{
 cout <<"Enter no. of elements in the array: ";
    int n;
 cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}