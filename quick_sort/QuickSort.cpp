#include "QuickSort.hpp"

int	partition(int *list, int left, int right, int pivot) {
	while ( left < right ) {
		if ( list[left] > list[pivot] && list[right] < list[pivot] )
			swap(&list[left], &list[right]);
		while ( list[left] < list[pivot] )
			++left;
		while ( right > left && list[right] > list[pivot] )
			--right;
	}
	swap(&list[right], &list[pivot]);
	return pivot;
}

void	quickSort(int *list, int i, int j) {
	int pivot;
	if ( i > j || i == j )
		return;
	pivot = partition(list, i, j - 1, j);
	quickSort(list, i, pivot - 1);
	quickSort(list, pivot + 1, j);
}
