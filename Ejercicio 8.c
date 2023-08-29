#include <stdio.h>
#include <stdlib.h>

int calcularResultado(int numero) {
	return numero*numero-2*numero;
}
int main() {
	int num, resultado;
	printf("Ingrese un número: ");
	scanf("%d", &num);
	resultado=calcularResultado(num);
	printf("El resultado de restar el doble del número a su cuadrado es: %d\n", resultado);
	system("pause");
	return 0;
}




