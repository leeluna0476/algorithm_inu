#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	clock_t start, stop;
	double duration;
	start = clock();
	for (int i = 0; i < 10000000; i++);
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("Implementation time is %fms.\n", duration * 1000);
	return 0;
}
