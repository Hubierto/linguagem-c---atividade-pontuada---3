#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	
	char disciplina[3][200];
	float media[3], soma = 0, peso[3] = {3, 3, 4}, nota[3][3], multiplicar;
	int i, j;
	
	for(i = 0; i < 3; i++){
		printf("Digite o nome da %dª matéria: ", i + 1);
		scanf("%s",&disciplina[i]);
		
		for(j = 0; j < 3; j++){
			do{
			   printf("Digite a %dª nota: ", j + 1);
			   scanf("%f",&nota[i][j]);
			if(nota[i][j] < 0 || nota [i][j] > 10){
				printf("Nota inválida\n");
				sleep(2);}
			} while (nota[i][j] < 0 || nota [i][j] > 10);
			
			multiplicar = nota[i][j] * peso[j];
			soma += multiplicar;
			media[i] = soma / 10;
	
	}
		soma = 0;
	}
		
		
    
    
    system("clear||cls");
    printf("===Exibindo resultados===\n");
    for(i = 0; i < 3; i++){
    	printf("%dª disciplina: %s\n", i + 1, disciplina[i]);
    	for(j = 0; j < 3; j++){
    		printf("%dª nota: %.1f\n", j + 1, nota[i][j]);
		}
		printf("Média: %.1f\n", media[i]);
		printf("\n");
	}
	return 0;
}


	
