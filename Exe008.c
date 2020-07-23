#include <stdio.h>

int main()
{
	
	int cargo;
	float salario, aumento, novoSalario;
	
	printf("Salário: \n");
	scanf("%f", &salario);
	
	printf("Cargo: \n [1] - Técnico, \n [2] - Gerente, \n [Qualquer outro número] - Funcionário \n");
	scanf("%d", &cargo);
	
	if (cargo == 1) {
		
		aumento = 50;
		
	} else if (cargo == 2) {
		
		aumento = 30;
		
	} else {
		
		aumento = 20;
		
	}
	
	aumento = (salario*aumento) / 100;
	novoSalario = salario + aumento;
	
	printf("Salário atual: %.2f", novoSalario);
	
	return 0;
}