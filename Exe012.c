#include <stdio.h>

int main(){
	
	int matriz1[2][2];
	int matriz2[2][2];
	int matrizsoma[2][2];
	
	printf("Matriz 1: \n");
	for(int x = 0; x < 2; x++){
		
		for(int y = 0; y < 2; y++){
			
			printf("[%d] [%d]: \n", x, y);
			scanf("%d", &matriz1[x][y]);
			
		}
		
	}
	
	printf("Matriz 2: \n");
	for(int x = 0; x < 2; x++){
		
		for(int y = 0; y < 2; y++){
			
			printf("[%d] [%d]: \n", x, y);
			scanf("%d", &matriz2[x][y]);
			
		}
		
	}
	
	printf("Soma entre Matrizes: \n");
	for(int x = 0; x < 2; x++){
		
		for(int y = 0; y < 2; y++){
			
			matrizsoma[x][y] = matriz1[x][y] + matriz2[x][y];
			printf("%d + %d = %d \n", matriz1[x][y], matriz2[x][y], matrizsoma[x][y]);
			
		}
		
	}

	return (0);
	
}