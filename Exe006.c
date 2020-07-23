#include <stdio.h>

// Check Examples


//Compiler version gcc  6.3.0

int main()
{
	
	float n1, n2;
	
	printf("1° valor: \n");
	scanf("%f", &n1);
	
	printf("2° valor: \n");
	scanf("%f", &n2);
	
	if (n2 != 0) {
		
		float res = n1/n2;
		printf("%.2f ÷ %.2f = %.2f", n1, n2, res);
		
	} else {
		
		printf("Não é possível realizar essa divisão");
		
	}
	
}