#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num = 1, i, sum;
	while (num <= 10000) {
		sum = 0;
		for (i = 1; i < num; i++) {
			if (num % i == 0) {
				sum += i;
			}
		}
		if (sum == num) {
			printf("%d\n", num);
		}
		num++;
	}
	return 0;
}