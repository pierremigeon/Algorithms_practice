

#incude "QuickSort.hpp"

void	swap(int **a, int **b) {
	int temp;

	temp = **a;
	*a = *b;
	*b = temp;
}

void	quickSort(int *list, int i, int j) {
	if ( i > j || i == j )
		return;
	int part = j;
	j -= 1;
	while ( i < j ) {
		if ( list[i] > list[part] && list[j] < list[part] )
			swap(&list[i], &list[j]);
		while ( list[i] < list[part] )
			++i;
		while ( list[j] > list[part] )
			--j;
	} 
	swap(list[i], list[part]);
	quickSort(list, i, j);
	quickSort(list, len, part, j);
}


