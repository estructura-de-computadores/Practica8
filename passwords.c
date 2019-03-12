#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Tam 26

void inicializa (char vector_char[Tam]){
	vector_char[0]='a';
	for (int i=1;i<Tam;i++){
		vector_char[i] = vector_char[0]+i;
	}
}

int main () {
	char vector_char[Tam];
	srand(time(NULL));
	inicializa(vector_char);
	char vector_passwd[9];
	int num_rand;
	vector_passwd[8]='\0';
	for (int i=0;i<8;i++){
		num_rand=rand()%26;
		vector_passwd[i]=vector_char[num_rand];
	}
	printf("La contraseña es: %s\n",vector_passwd);
}
