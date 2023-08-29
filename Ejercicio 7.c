#include <stdio.h>
#include <stdlib.h>

int descuento(int uni, int pre){
	int prefin;
	if(uni>6 && uni<=12){
		prefin=pre*4/100;
		prefin=pre+prefin;
		printf("Su precio final es: %d\n",prefin);
	}
	else if(uni>12){
		prefin=pre*10/100;
		prefin=pre+prefin;
			printf("Su precio final es: %d\n",prefin);
	}
	return prefin;
}
int main(){
	int uni, precio, prefin;
	printf("Ingrese la cantidad de unidades: \n");
	scanf("%d",&uni);
	printf("Ingrese el precio: \n");
	scanf("%d",&precio);
	prefin=descuento(uni,precio);
	system("pause");
	return 0;
}
