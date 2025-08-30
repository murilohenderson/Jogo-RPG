#include <stdio.h>

// Variáveis globais
int pontoBom = 0;
int pontoNeutro = 0;
int pontoRuim = 0;

void resultado();
void receberResposta();
void textoIntroducao();
void finalBom();

int main () {

printf("Oi, testando\n");
 pontoBom = 2;
    pontoRuim = 1;
    pontoNeutro = 2;

    resultado(); 

return 0;
}


void resultado() {
    if (pontoBom > pontoRuim && pontoBom > pontoNeutro || pontoBom == pontoNeutro) {
       printf("Final bom");
} else if (pontoNeutro > pontoBom && pontoNeutro > pontoRuim || pontoBom == pontoRuim) {
        printf("Final neutro");    
} else if (pontoRuim > pontoNeutro && pontoRuim > pontoBom || pontoRuim == pontoNeutro) {
        printf("Final ruim");
    }
}

void receberResposta() {


}


void textoIntroducao() {


}

void finalBom() {
      printf("..........");
 

}
