#include <stdio.h>

#define SWAP(x, y, t) ((t)=(x), (x)=(y), (y)=(t))
void selection_sort(int list[], int n) {
	int i, j, least, tmp;
	for (i = 0; i < n - 1; i++) {
		least = i;
		for (j = i + 1; j < n; j++) {
			if (list[j] < list[least]) {
				least = j;
			}
		}
		SWAP(list[i], list[least], tmp);
	}
}

void print_arr(int *arr, int n) {
	for (int i = 0; i < n; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(void) {
	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, n);
	selection_sort(arr, n);
	print_arr(arr, n);
}
