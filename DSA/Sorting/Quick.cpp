#include<bits/stdc++.h>

using namespace std;

//BEST O(n*logn)
//WORST O(n*n)


void swap(int a[],int b,int c)
{
    int temp=a[b];
    a[b]=a[c];
    a[c]=temp;
}

int partition(int a[],int l,int r)
{
    int i=l-1;
    int pivot=r;
    for (int j = l; j <=r-1; j++)
    {
          if(a[j]<a[pivot])
          {
          i++;
          swap(a,i,j);
          }
    }

    swap(a,i+1,pivot);
    return i+1;

}


void quicksort(int*a,int l,int r)
{
    if(l<r)
    {
    int pivot=partition(a,l,r);
    quicksort(a,l,pivot-1);
    quicksort(a,pivot+1,r);
    
    }
}

void printArray(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
	auto arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);

	quicksort(arr, 0, arr_size - 1);

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
    return 0;
}