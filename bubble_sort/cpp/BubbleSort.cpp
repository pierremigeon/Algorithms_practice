#include "BubbleSort.hpp"

void	swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void	_BubbleSort(int list[], int len) {
	int flag = 1;

	while( flag != 0 ) {
		flag = 0;
		for (int i = 0; i < len - 1; i++ ) {
			if (list[i] > list[i + 1]) {
				swap(list[i], list[i + 1]);
				flag = 1;
			}
		}
	}
}
