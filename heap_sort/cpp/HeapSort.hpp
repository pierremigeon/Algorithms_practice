#ifndef HEAPSORT_H
# define HEAPSORT_H
#include <iostream>

class HeapSort {
	public:
	static void	swap(int &a, int &b) ;
	static int	get_max(int list[], int kid, int tail);
	static int	swap_large(int list[], int par, int kid, int tail);
	static int	one_is_greater( int list[], int kid, int par, int tail);
	static int	has_kids( int par, int tail );
	static void	heapify( int list[], int par, int tail );
	static void	makeMaxHeap( int list[], int len );	
	static void	_HeapSort(int list[], int len);
};

#endif
