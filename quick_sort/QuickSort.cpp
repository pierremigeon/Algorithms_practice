#include "QuickSort.hpp"

void	swap(int **a, int **b) {
	int temp;

	temp = **a;
	*a = *b;
	*b = temp;
}

int	partition(int list, int left, int right, int pivot) {
	while ( i < j ) {
		if ( list[i] > list[pivot] && list[j] < list[pivot] )
			swap(&list[i], &list[j]);
		while ( list[i] < list[pivot] )
			++i;
		while ( list[j] > list[pivot] )
			--j;
	}
	swap(&list[j], &list[pivot])
}

void	quickSort(int *list, int i, int j) {
	int pivot;
	if ( i > j || i == j )
		return;
	pivot = partition(list, i, j - 1, j);
	quickSort(list, i, pivot - 1);
	quickSort(list, pivot + 1, j);
}


