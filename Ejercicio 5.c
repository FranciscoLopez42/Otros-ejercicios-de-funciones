#include <stdio.h>
#include <stdlib.h>

int main() {
	int numlineas;
	printf("Ingrese el numero de lineas: ");
	scanf("%d",&numlineas);
	for (int i = 1; i <= numlineas; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
