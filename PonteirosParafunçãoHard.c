#include <stdio.h>
#include <stdlib.h>

typedef void (*tipoRetorno)(float);

typedef tipoRetorno(*tipoAcao)(void);

void cafe(float f){
	printf("\nTotal de ml's de Cafe %.2f",f);
}
void cha(float f){
	printf("\nTotal de ml's de Cha %.2f",f);
}

tipoRetorno escolherBebida(){
	int resposta;
	printf("\nEscolha a bebida (1) cafe (2) Cha: ");
	scanf("%d",&resposta);
	
	if(resposta == 1){	
		return cafe;
	}
	else{
		return cha;
	}
}
int main(){
	
	tipoRetorno ponteiroParaRetorno;
	tipoAcao ponteiroParaAcao;
	 
	ponteiroParaAcao = escolherBebida;
	ponteiroParaRetorno = ponteiroParaAcao();
	
	ponteiroParaRetorno(250); //Número de gramas da babida
	
	return 0;
}


