#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float peso,altura,IMC;
	printf("Digite seu peso\n");
	scanf ("%f" ,&peso);
	printf("Digite sua altura\n");
	scanf("%f" ,&altura);
	IMC=peso/(altura*altura);
	printf("Seu IMC e %.2",IMC);
	if(IMC<=18.5){
		printf("\nMagreza");
	}
	else if (IMC>= 18.5 && IMC<=29.9){
		printf("\nNormal");
	}
	else if(IMC>= 25.0 && IMC<=29.9){
		printf ("\nSobre peso");
	}
	else if(IMC>=30 && IMC<=39.9){
		printf("\nSobre peso");
	}
	else if (IMC>=30 && IMC<=39.9){
		printf("\nObesidade");
	}
	else if(IMC>= 40){
		printf("\nGRAVE");
	}
	return 0;
}
