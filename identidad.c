#include <stdio.h>
#include <stdlib.h>
#define Tam 9

void inicializa (int matriz[Tam][Tam]){

	for (int i=0;i<Tam;i++){
		for (int j=0;j<Tam;j++){
			if (i==j){
				matriz[i][j]=1;
			}
			else{
				matriz[i][j]=0;
			}
		}
	}
}
int main(){
	int matriz[Tam][Tam];
	inicializa(matriz);
	for (int i=0;i<Tam;i++){
		for (int j=0;j<Tam;j++){
			printf("%i",matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
