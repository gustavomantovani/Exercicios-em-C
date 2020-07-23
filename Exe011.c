#include <stdio.h>

int main()
{
	
	float numero[10], escalar[10];
	
	for(int i = 0; i < 10; i++){
		
		printf("\n Número %d°: ", i+1);
		scanf("%f", &numero[i]);
		
	}
	
	for(int i = 0; i < 10; i++){
		
		printf("\n Escalar %d°: ", i+1);
		scanf("%f", &escalar[i]);
		
	}
	
	for(int i = 0; i < 10; i++){
		
		printf("\n %.2f × %.2f = %.2f", numero[i], escalar[i], numero[i] * escalar[i]);
		
	}
	
}