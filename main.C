#include <stdio.h>

// Variáveis globais
int pontoBom = 0;
int pontoNeutro = 0;
int pontoRuim = 0;

// Funções
int receberResposta(int numOpcoes);
void resultado(void);
void textoIntroducao(void);
void primeiraConversa(void);
void decisaoBaralho(void);
void finalBom(void);
void finalNeutro(void);
void finalRuim(void);
void continuar(void);
void continuacaoTresCaminhos();

int main () {

    textoIntroducao();
    primeiraConversa();
    decisaoBaralho();

    resultado();

    return 0;
}

// Função genérica para respostas
int receberResposta(int numOpcoes) {
    int opcao;
    do {
        printf("Digite sua escolha (1-%d): ", numOpcoes);
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > numOpcoes);
    
    return opcao;
}

void resultado() {
    if ((pontoBom > pontoRuim && pontoBom > pontoNeutro) || (pontoBom == pontoNeutro)) {
        finalBom();
    } 
    else if ((pontoNeutro > pontoBom && pontoNeutro > pontoRuim) || (pontoNeutro == pontoRuim)) {
        finalNeutro();    
    } 
    else {
        finalRuim();
    }
}

// Função para continuar a história
void continuar(void) {
    int resposta;
    do {
        printf("=================================================================================\n");
        printf("Digite 1 para prosseguir: ");
        scanf("%d", &resposta);
    } while (resposta != 1);
}

// Texto introdutório
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
    "'Ou talvez o tempo nunca tenha passado...'\n";

    printf("%s\n", historia);
}

// Primeira conversa
void primeiraConversa(void) {
    continuar();

    const char *historia =
    "\nAs portas se fecharam atrás de Irena.\n" 
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

// Decisão do baralho
void decisaoBaralho(void) {
    const char *historia =
    "\nSobre a mesa repousa o baralho amarrado por fita vermelha. As duas feiticeiras aguardam em silêncio, enquanto os gatos observam cada movimento.\n\n"
    "Liora sussurra: 'A forma como abrir as cartas é também a forma como abrirá o seu destino.'\n\n"
    "Soraya ri e bate palmas: 'Então, pequena, escolha o caminho!'\n\n"
    "1 - Três Caminhos: passado, presente e futuro.\n"
    "2 - A Porta de Três Chaves: bloqueio, impulso e algo inesperado.\n"
    "3 - O Espelho em Três Partes: desejo, medo e caminho possível.\n";
    
    printf("%s\n", historia);

    int escolha = receberResposta(3); // chama a função genérica

    switch (escolha) {
        case 1:
            continuacaoTresCaminhos();
            pontoBom++;  
            break;
        case 2:
            pontoNeutro++;
            break;
        case 3:
            pontoRuim++;
            break;
    }
}
void continuacaoTresCaminhos(void) {
    const char *historia1 =
    "\nIrena respirou fundo. O peso da decisão caiu sobre ela.\n"
    "'Quero os Tres Caminhos', disse firme, embora em voz baixa.\n\n"

    "Soraya bateu palmas, sorrindo como uma crianca: 'Sabia! Passado, presente e futuro: simples e belo!'\n"
    "Liora nao sorriu. Com um gesto lento, desfez a fita vermelha do baralho.\n"
    "As cartas deslizaram pela mesa como se respirassem. O silencio da sala era absoluto.\n\n"

    "Primeira carta: O Passado. Era A Arvore.\n"
    "Raizes profundas sustentavam o tronco, mas os galhos pareciam se contorcer em dor.\n"
    "Liora murmurou: 'Tuas origens sao fortes, mas tambem feridas. Sempre acreditou que precisava se defender... ate mesmo daqueles que a amavam.'\n"
    "A lembranca dos pais atingiu Irena: discussoes, olhares frios, silencias que pesavam mais que palavras.\n\n"

    "Soraya quebrou o clima com riso leve: 'Ate dentro de casa, coruja, voce mostrava as garras.'\n\n";

    const char *historia2 =
    "Segunda carta: O Presente. As Encruzilhadas.\n"
    "Uma estrada que se dividia em varias. Todas levavam a destinos ocultos.\n"
    "'Aqui voce esta', disse Liora. 'Cada escolha exige um preco. O medo de decidir e o que a paralisa.'\n"
    "Irena engoliu seco, sentindo a verdade no peito.\n\n";

    const char *historia3 =
    "Terceira carta: O Futuro. A Serpente.\n"
    "Suas escamas brilhavam como ouro e veneno.\n"
    "Liora falou em voz grave: 'A Serpente traz perigo, mas tambem renascimento. Quem recusa a mudanca e devorado. Quem aceita, encontra nova forca.'\n\n";

    const char *historia4 =
    "As chamas das lamparinas vacilaram. Soraya inclinou-se, olhos faiscando:\n"
    "'Entao, pequena coruja... vai ficar presa as raizes que doem? Vai parar nas encruzilhadas? Ou tera coragem de encarar a Serpente?'\n\n"

    "Irena tocou as cartas. Nelas viu fragmentos de si: a filha orgulhosa, a mulher silenciosa, a feiticeira que precisava mudar.\n"
    "Soraya sorriu: 'O destino pode ser tecido de novo! Um fio puxado e todo bordado se transforma.'\n"
    "Liora a interrompeu: 'Mas cuidado. Se ignorar o passado, o novo destino pode nascer doente.'\n\n"

    "O silencio voltou. Os olhos de ambas ardiam sobre Irena, e ate os gatos a observavam.\n"
    "A jovem ergueu o rosto, decidida: 'Se o destino e um tecido, quero segurar a agulha desta vez. Quero ver como meu destino pode ficar dependendo de como eu agir.'\n\n"

    "Liora embaralhou novamente, suas maos rapidas como sombras. Tres cartas foram colocadas viradas sobre a mesa.\n"
    "'Tres portas, tres caminhos. Escolha o fio que deseja puxar.'\n";

    const char *historia5 =
    "\nDiante de Irena, tres cartas brilham sobre a mesa.\n"
    "Liora e Soraya aguardam em silencio, observando cada gesto.\n\n"
    "1 - A Carta do Sol – Soraya sorri: 'Este e o caminho da vitoria e da clareza. "
    "Uma estrada de conquistas, onde nada pode esconder-se da luz.'\n\n"
    "2 - A Carta da Estrela – Liora fala suavemente: 'Aqui esta o caminho do conselho e da esperanca. "
    "Uma estrela que guia sem pressa, apenas mostra como seguir em frente.'\n\n"
    "3 - A Carta do Caixao – A voz ecoa: 'E aqui esta o caminho da transformacao. "
    "O fim de um ciclo e o nascimento de outro. Um caminho que exige coragem diante dos proprios medos.'\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);

    int escolha = receberResposta(3); 

    switch (escolha) {
        case 1:
            printf("\nVoce escolheu o Caixao: um ciclo termina, outro comeca. "
                            "Mudanca profunda te aguarda.\n");
            pontoBom++;  
            break;
        case 2:
            printf("\nVoce escolheu a Estrela: o caminho da esperanca e da guia calma.\n");
            pontoNeutro++;
            break;
        case 3:
            printf("\nVoce escolheu o Sol: a estrada da vitoria e da luz!\n");
            pontoRuim++;
            break;
    }
}


void finalBom(void) {
    printf("\n========== FINAL BOM ==========\n");
    printf("O destino de Irena se revelou cheio de esperança e luz.\n");
}

void finalNeutro(void) {
    printf("\n========== FINAL NEUTRO ==========\n");
    printf("O destino de Irena permaneceu equilibrado, sem grandes vitórias nem grandes perdas.\n");
}

void finalRuim(void) {
    printf("\n========== FINAL RUIM ==========\n");
    printf("O destino de Irena se revelou sombrio e cheio de desafios.\n");
}
