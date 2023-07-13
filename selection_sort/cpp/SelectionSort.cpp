#include "SelectionSort.hpp"

void	swap( int &a, int &b ) {
	int temp = a;
	a = b;
	b = temp;
}

void	SelectionSort_old(int list[], int len) {
	int track[] = { 0, list[0] };

	int border = 0;
	while (border < len) {
		track[0] = border;
		track[1] = list[border];
		for ( int i = border; i < len; i++ ) {
			if ( list[i] < track[1] ) {
				track[0] = i;
				track[1] = list[i];
			}
		}
		swap(list[border], list[track[0]]);
		border++;
	}
}


void	SelectionSort( int list[], int len ) {
	int min;

	for (int i = 0; i < len - 1; i++ ) {
		min = i;
		for (int j = i + 1; j < len; j++) {
			if ( list[j] < list[min] )
				min = j;
		}
		swap(list[i], list[min]);
	}
}
