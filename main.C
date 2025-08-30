#include <stdio.h>

// Variáveis globais
int pontoBom = 0;
int pontoNeutro = 0;
int pontoRuim = 0;

void resultado(void);
void receberResposta(void);
void textoIntroducao(void);
void finalBom(void);

int main () {
    printf("Oi, testando\n");
    pontoBom = 2;
    pontoRuim = 1;
    pontoNeutro = 2;

    resultado(); 
    receberResposta();

    return 0;
}
    
void resultado() {
    if ((pontoBom > pontoRuim && pontoBom > pontoNeutro) || (pontoBom == pontoNeutro)) {
        printf("Final bom");
    } 
    else if ((pontoNeutro > pontoBom && pontoNeutro > pontoRuim) || (pontoNeutro == pontoRuim)) {
        printf("Final neutro");    
    } 
    else if ((pontoRuim > pontoNeutro && pontoRuim > pontoBom) || (pontoRuim == pontoNeutro)) {
        printf("Final ruim");
    }
}

void receberResposta(void) {
    int opcao;
    
	do{
	    printf("\nOpcao escolhida: ");
	    scanf("%d", &opcao);
	    
	}while(opcao != 1 && opcao != 2 && opcao != 3);
	
	if(opcao == 1){
	   printf("funcionando 1");
	}else if(opcao == 2){
	    printf("funcionando 2");
	}else if(opcao == 3){
	    printf("funcionando 3");
	}
}


void textoIntroducao() {


}

void finalBom() {
      printf("..........");
 

}
