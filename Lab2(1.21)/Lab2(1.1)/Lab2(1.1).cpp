#include <stdio.h> 
#include <locale.h> 
#include <math.h>
int main() {
	setlocale(LC_ALL, "Ukrainian");
	int a;
	int b;
	printf("Ведіть 1 число:");
	scanf_s("%d", &a);
	printf("Ведіть 2 число:");
	scanf_s("%d", &b);
	
		printf("Ділення другого числа на перше, залишок: %d\n", b % a);
		printf("Ділення першого числа на друге: %d\n", a / b);
		printf("Множення двох чисел: %d\n", a * b);
	
}
