#include <stdio.h>

int main()
{
	
	int matricula;
	
	for (int i = 1; i <= 10; i++) {
		
		printf("Matrícula %d°: ", i);
		scanf("%d", &matricula);
		
		printf("%d \n", matricula);
		
	}
	
	return 0;
	
}