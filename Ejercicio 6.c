#include <stdio.h>
#include <stdlib.h>

int dias (int num){
	switch(num){
	case 1:
		printf("Su mes es enero, tiene 31 dias\n");
		break;
	case 2:
		printf("Su mes es febrero, tiene 29 dias\n");
		break;
	case 3:
		printf("Su mes es marzo, tiene 30 dias\n");
		break;
	case 4:
		printf("Su mes es abril, tiene 31 dias\n");
		break;
	case 5:
		printf("Su mes es mayo, tiene 30 dias\n");
		break;
	case 6:
		printf("Su mes es junio, tiene 31 dias\n");
		break;
	case 7:
		printf("Su mes es julio, tiene 30 dias\n");
		break;
	case 8:
		printf("Su mes es agosto, tiene 31 dias\n");
		break;
	case 9:
		printf("Su mes es septiembre, tiene 30 dias\n");
		break;
	case 10:
		printf("Su mes es octubre, tiene 31 dias\n");
		break;
	case 11:
		printf("Su mes es noviembre, tiene 30 dias\n");
		break;
	case 12:
		printf("Su mes es diciembre, tiene 31 dias\n");
		break;
	default:
		printf("Su valor no es valido\n");
	}
}
int main(){
	int num,mes;
	printf("Ingrese un numero: \n");
	scanf("%d",&num);
	mes=dias(num);
	system("pause");
	return 0;
}
