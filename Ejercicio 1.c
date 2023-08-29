#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b){
	return a + b;
}
void resta(int a, int b){
	printf("El resultado de la resta es: %d\n", a - b);
}
float divi(int a, int b){
	if (b != 0) {
		return (float)a / b;
	} else {
		printf("No se puede dividir entre cero.\n");
		return 0;
	}
}

int main() {
	int a, b, opcion;
	printf("Ingrese el primer número: ");
	scanf("%d", &a);
	printf("Ingrese el segundo número: ");
	scanf("%d", &b);
	printf("\nSeleccione la operación a realizar:\n");
	printf("1. SUMAR\n");
	printf("2. RESTAR\n");
	printf("3. MULTIPLICAR\n");
	printf("4. DIVIDIR\n");
	printf("Ingrese el número de opción: ");
	scanf("%d", &opcion);
	switch (opcion) {
	case 1:
		printf("El resultado de la suma es: %d\n", suma(a, b));
		break;
	case 2:
		resta(a, b);
		break;
	case 3:
		printf("El resultado de la multiplicación es: %d\n", a*b);
		break;
	case 4:
		printf("El resultado de la división es: %f\n", divi(a,b));
		break;
	default:
		printf("Opción no válida.\n");
	}
	
	system("pause");
	return 0;
}
