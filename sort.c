#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void insertion_sort(int list[], int n) {
	int i, j, key;
	for (i = 1; i < n; ++i) {
		key = list[i];
		for (j = i - 1; j >= 0 && list[j] > key; --j) {
			list[j + 1] = list[j];
		}
		list[j + 1] = key;
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
//	selection_sort(arr, n);

	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		arr[i] = rand() % 100;
	}
	printf("UNSORTED list is \n\n");
	print_arr(arr, n);
	insertion_sort(arr, n);
	printf("SORTED list is \n\n");
	print_arr(arr, n);
}
// TA session에서 쪽지시험 볼 수도 있음. 오픈채팅이랑 lms에 공지할거다.
