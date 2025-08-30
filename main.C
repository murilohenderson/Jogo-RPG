#include <stdio.h>

// Variáveis globais
int pontoBom = 0;
int pontoNeutro = 0;
int pontoRuim = 0;

void resultado(void);
void receberResposta(void);
void textoIntroducao(void);
void primeiraConversa(void);
void finalBom(void);
void finalNeutro(void);
void finalRuim(void);

int main () {
    int resposta = 0;
    pontoBom = 2;
    pontoRuim = 1;
    pontoNeutro = 2;


    textoIntroducao();
    do {
        printf("Digite 1 para prosseguir\n");
        scanf("%d", &resposta);
    } while (resposta != 1);
    primeiraConversa();
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
    "De repente, uma voz sussurrou:\n\n"
    "'Irena! Quanto tempo, minha pequena coruja...'\n\n"
    "Logo outra, fria como gelo, completou:\n\n"
    "'Ou talvez o tempo nunca tenha passado...'\n\n";

    printf("%s\n", historia);
}
void primeiraConversa(void) {
    const char *historia =
    "As portas se fecharam atrás de Irena.\n" 
    "O silêncio caiu, quebrado apenas pela chuva e pelo miado distante de um gato.\n"
    "Das sombras surgiu Liora: alta, envolta em véus, olhos como brasas ocultas.\n\n" 
    "'E não é que a coruja voltou ao ninho?', disse, sua voz ecoando na penumbra.\n\n"
    "Logo Soraya apareceu, risonha, cheia de cores e anéis tilintando.\n\n" 
    "'Ah, a menina voltou! Ainda com segredos nos bolsos.'\n\n"
    "As duas a cercaram, lembranças e provocações no ar.\n" 
    "Então Liora estendeu a mão para uma mesa com cartas presas por fita vermelha.\n\n"
    "'Diga, minha coruja... como deseja abrir a mesa desta vez?'\n\n"
    "Soraya riu e insistiu:\n" 
    "'Passado, presente e futuro em linha?'\n" 
    "'Duas chaves para uma porta?'\n" 
    "'Ou o espelho dos desejos e medos?'\n\n"
    "Irena sentiu o peso do olhar das duas, uma chama viva e uma sombra eterna.\n\n"
    "'Agora, a escolha é sua...'\n";

    printf("%s\n", historia);
}

void finalBom() {
      printf("..........");
 

}
