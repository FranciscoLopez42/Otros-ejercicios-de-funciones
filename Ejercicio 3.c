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
	int a, b, opcion,n;
	printf("Ingrese el primer n�mero: ");
	scanf("%d", &a);
	printf("Ingrese el segundo n�mero: ");
	scanf("%d", &b);
	do{
	printf("\nSeleccione la operaci�n a realizar:\n");
	printf("0. DEJAR DE HACER OPERACIONES\n");
	printf("1. SUMAR\n");
	printf("2. RESTAR\n");
	printf("3. MULTIPLICAR\n");
	printf("4. DIVIDIR\n");
	printf("Ingrese el n�mero de opci�n: ");
	scanf("%d", &opcion);
	switch (opcion) {
	case 0:
		break;
	case 1:
		printf("El resultado de la suma es: %d\n", suma(a, b));
		break;
	case 2:
		resta(a, b);
		break;
	case 3:
		printf("El resultado de la multiplicaci�n es: %d\n", a*b);
		break;
	case 4:
		printf("El resultado de la divisi�n es: %f\n", divi(a,b));
		break;
	default:
		printf("Opci�n no v�lida.\n");
	}
	printf("Quiere usar nuevos valores? 1 para s� y 0 para no: ");
	scanf("%d", &n);
	if (n == 1) {
		printf("Ingrese el primer n�mero: ");
		scanf("%d", &a);
		printf("Ingrese el segundo n�mero: ");
		scanf("%d", &b);
	}
	}while(opcion!=0);

	system("pause");
	return 0;
}
