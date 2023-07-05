#include "HeapSort.hpp"

void	print_List(int list[], int len ) {
	for ( int i = 0; i <= len; i++ )
		std::cout << list[i] << std::endl;
	std::cout << std::endl;
}

void	HeapSort::swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int	HeapSort::get_max(int list[], int kid, int tail) {
	if ( kid == tail )
		return (kid);
	return ( list[kid] > list[kid + 1] ? kid : kid + 1);
}

int	HeapSort::swap_large(int list[], int kid, int par, int tail) {
	int max = get_max(list, kid, tail);
	if ( list[max] > list[par] )
		swap(list[max], list[par]);
	return (max);
}

int	HeapSort::one_is_greater( int list[], int kid, int par, int tail) {
	int max = get_max(list, kid, tail);
	if ( list[max] > list[par] )
		return (1);
	return (0);
}

int	HeapSort::has_kids( int par, int tail ) {
	if ( par * 2 <= tail )
		return (1);
	return (0);
}

void	HeapSort::heapify( int list[], int par, int tail ) {
	int kid = par * 2 + 1;

	if (tail == 0)
		return;
	while ( has_kids(par, tail) ) {
		if ( one_is_greater(list, kid, par, tail) )
			par = swap_large(list, kid, par, tail);
		else
			break;
		kid = par * 2;
	}
}

void	HeapSort::makeMaxHeap( int list[], int len ) {	
	for (int i = len; i >= 0; i-- )
		heapify(list, i, len);
	std::cout << "Maxheap is " << std::endl;
	print_List(list, len);
}

void	HeapSort::_HeapSort(int list[], int len) {
	int tail = --len;
	makeMaxHeap(list, tail);
	while ( tail > 0 ) {
		swap( list[tail], list[0] );
		heapify( list, 0, --tail );
	}
}
