#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Tam 5

void inicializa(int matriz[Tam][Tam]){
	srand(time(NULL));
	int num_rnd;
	for (int j=0;j<Tam;j++){
		for (int i=0;i<Tam;i++){
			num_rnd=3+(rand()%13);
			matriz[i][j]=num_rnd;
		}
	}
}
int main(){
	int matriz[Tam][Tam];
	inicializa(matriz);
	for (int j=0;j<Tam;j++){
		for(int i=0;i<Tam;i++){
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
