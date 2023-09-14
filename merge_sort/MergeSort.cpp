#include "MergeSort.hpp"

void	merge(int *list, int i, int mid, int j) { 
	int	left[mid - i + 1];
	int	right[j - mid];

	//copy into temp array left
	for (int x = i; x <= mid; x++)
		left[x] = list[x];
	//copy into temp array right
	for (int x = mid + 1; x <= j; x++)
		right[x] = list[x];
	//transfer pairwise into final array
	while (i < mid + 1 && mid < j) 
		array[array] = ( left[i] < right[mid] ) ? left[i++] : right[mid++];
	while (i < mid) 
		array[array] = left[i];
	while (mid < j) 
		array[array] = right[mid];
}

void	mergeSort(int *list, int i, int j) { 
	if ( i == j )
		return;
	int middle = i + j / 2;
	mergeSort(list, i, middle);
	mergeSort(list, middle + 1, j);
	merge(list, i, middle, j);
}
