#include <stdio.h>

int main() {
	int first_num = 2;
	int secord_num = 3;
	int sum = first_num + secord_num; // wrong variable names by default, fixed FirstNum -> first_num, second_num -> secord_num
	printf("%d\n", sum);
}