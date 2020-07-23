#include <stdio.h>

int main()
{
	
	float n1, n2;
	
	printf("1° valor: \n");
	scanf("%f", &n1);
	
	printf("2° valor: \n");
	scanf("%f", &n2);
	
	if (n1 > 0 && n2 > 0) {
		
		printf("Valores são válidos");
		
	} else {
		
		printf("Valores inválidos");
		
	}
	
}