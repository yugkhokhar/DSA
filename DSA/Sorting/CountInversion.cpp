
#include <iostream>
using namespace std;


long long merge(int array[], int const left, int const mid,
		int const right)
{
    long long inv=0;
	auto const subArrayOne = mid - left + 1;
	auto const subArrayTwo = right - mid;

	auto *leftArray = new int[subArrayOne],
		*rightArray = new int[subArrayTwo];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (auto i = 0; i < subArrayOne; i++)
		leftArray[i] = array[left + i];
	for (auto j = 0; j < subArrayTwo; j++)
		rightArray[j] = array[mid + 1 + j];

	auto indexOfSubArrayOne
		= 0, 
		indexOfSubArrayTwo
		= 0; 
	int indexOfMergedArray
		= left; 

	while (indexOfSubArrayOne < subArrayOne
		&& indexOfSubArrayTwo < subArrayTwo) {
		if (leftArray[indexOfSubArrayOne]
			<= rightArray[indexOfSubArrayTwo]) {
			array[indexOfMergedArray]
				= leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		}
		else {
			array[indexOfMergedArray]
				= rightArray[indexOfSubArrayTwo];
                inv+=subArrayOne-indexOfSubArrayOne;
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}

	while (indexOfSubArrayOne < subArrayOne) {
		array[indexOfMergedArray]
			= leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}

	while (indexOfSubArrayTwo < subArrayTwo) {
		array[indexOfMergedArray]
			= rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}

	delete[] leftArray;
	delete[] rightArray;
    return inv;
}


long long mergeSort(int array[], int const begin, int const end)
{
    long long inv=0;
	if (begin<end){
        auto mid = (begin+end) / 2;
        inv+=mergeSort(array, begin, mid);
        inv+=mergeSort(array, mid + 1, end);
        inv+=merge(array, begin, mid, end);
    }
        return inv;
		
}





int main()
{
	int arr[] = {3,2,1};
	auto arr_size = sizeof(arr) / sizeof(arr[0]);

	cout<<mergeSort(arr, 0, arr_size - 1)<<endl;;

	return 0;
}

