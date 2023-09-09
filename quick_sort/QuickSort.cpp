#include "QuickSort.hpp"

int	partition(int *list, int left, int right) {
	int pivot = list[right];
	--left;

	for (int j = left + 1; j < right; j++ ) {
		if ( list[j] < pivot )
			swap(&list[++left], &list[j]);
	}
	swap(&list[++left], &list[right]);
	return left;
}

void	quickSort(int *list, int i, int j) {
	int pivot;
	if ( i < j ) {
		pivot = partition(list, i, j);
		quickSort(list, i, pivot - 1);
		quickSort(list, pivot + 1, j);
	}
}
