#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Tam1 3
#define Tam2 6

void inicializa(int matriz[Tam1][Tam2]){
	int num_rnd;
	srand(time(NULL));
	for (int i=0;i<Tam1;i++){
		for (int j=0;j<Tam2;j++){
			num_rnd=1+(rand()%11);
			matriz[i][j]=num_rnd;
		}
	}
}
int sumaColumnas(int matriz[Tam1][Tam2],int vector_suma[Tam2]){
	for (int i=0;i<Tam1;++i){
		for (int j=0;j<Tam2;++j){
			vector_suma[j]=vector_suma[0]+matriz[i][j];
		}
	}
	return vector_suma[Tam2];
}
int main (){
	int matriz[Tam1][Tam2];
	int vector_suma[Tam2];
	inicializa(matriz);
	for (int i=0;i<Tam1;i++){
		for (int j=0;j<Tam2;j++){
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}
	vector_suma[Tam2] = sumaColumnas(matriz,vector_suma);
	printf("La suma es: \n");
	for (int j=0;j<Tam2;j++){
		printf("%i ",vector_suma[j]);
	}
	printf("\n");
}
