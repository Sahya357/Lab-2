#include <stdio.h> 
#include <locale.h> 
#include <math.h>
int main() {
	setlocale(LC_ALL, "Ukrainian");
	int x;
	int y;
	int z;
	int a;
	scanf_s("%d %d %d", &x, &y, &z);
	if (x != 0 && y != 0 && z != 0) {
		a = ((sqrt(x) + 2 * sqrt(y * z)) / (sqrt(y) - 2 * sqrt(x * z)));
		printf("Відповідь : %d",a);
	}

}