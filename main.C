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
    pontoBom = 2;
    pontoRuim = 1;
    pontoNeutro = 2;


    textoIntroducao();
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


void textoIntroducao(void) {
    const char *historia =
    "Entre becos estreitos da feira de Fhaolann, Irena seguia um caminho secreto.\n"
    "Seus passos eram precisos, como se o labirinto já estivesse gravado em sua pele.\n"
    "Ao longe, um letreiro: 'Tessituras de Kali'.\n"
    "Diante do portão de ébano, ela o empurrou e entrou. Lá dentro, o sol se apagou e a noite estrelada surgiu.\n"
    "Espelhos refletiam mais que sua imagem; refletiam algo oculto.\n"
    "De repente, uma voz sussurrou:\n"
    "'Irena! Quanto tempo, minha pequena coruja...'\n"
    "Logo outra, fria como gelo, completou:\n"
    "'Ou talvez o tempo nunca tenha passado...'\n";

    printf("%s\n", historia);
}


void finalBom() {
      printf("..........");
 

}
