#include <stdio.h> 
#include <locale.h> 
#include <math.h>
int main() {
	setlocale(LC_ALL, "Ukrainian");
	const int a = 4;
	const int b = -2;
	const int c = 20;
	int y = (((a * b * c) / a + b + c) - ((a - b - c) / (a*b*c)));
	printf("значенням функції є : %d", y);


}
