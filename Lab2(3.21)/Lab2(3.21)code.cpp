#include <stdio.h> 
#include <locale.h> 
#include <math.h>
int main() {
	setlocale(LC_ALL, "Ukrainian");
	int x;
	int y;
	int z;
	int a;
	printf("Введіть 3 числа : ");
	scanf_s("%d %d %d", &x, &y, &z);
	
	a = ((sqrt(x) + 2 * sqrt(y * z)) / (sqrt(y) - 2 * sqrt(x * z)));
	printf("Відповідь : %d",a);
	

}
