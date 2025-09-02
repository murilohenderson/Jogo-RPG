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
void decisao1(void);
void decisao1_1(void);
void decisao1_2(void);
void decisao1_3(void);
void decisao1_1_1(void);
void decisao1_1_2(void);
void decisao1_1_3(void);
void decisao1_1_1_1(void);
void decisao1_1_1_2(void);
void decisao1_1_1_3(void);


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
    "2 - A Porta de Três Chaves: bloqueio, impulso e algo inesperado.\n";
    
    printf("%s\n", historia);

    int escolha = receberResposta(2); 

    switch (escolha) {
        case 1:
            decisao1();
            break;
        case 2:
            decisao2();
            break;
    }
}

// =======================================================================================================================
// CAMINHO 1_1_1_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1
// =======================================================================================================================

void decisao1(void) {
    const char *historia =
    "\nIrena fechou os olhos por um instante. O coração pulsava rápido, como se ecoasse dentro do salão fechado.\n"
    "Quando ergueu a voz, não havia tremor: 'Quero os Tres Caminhos.'\n\n"

    "Soraya deu um salto, batendo palmas como uma criança que acaba de ganhar um presente:\n"
    "'Sabia! Passado, presente e futuro. Simples, direto, mas perigoso...'\n\n"

    "Liora, ao contrário, não sorriu. Com lentidão quase cruel, passou a unha sobre a fita vermelha que prendia as cartas.\n"
    "O laço se desfez sozinho, deslizando como uma serpente morta, e o baralho respirou.\n"
    "Cartas deslizaram pela mesa como se fossem vivas, espalhando um frio que apagou até o som da chuva lá fora.\n\n";

    const char *historia1 =
    "A primeira carta foi virada: O Passado. Era A Árvore.\n"
    "Raízes fundas, mas retorcidas, sufocadas em sua própria densidade. Liora murmurou:\n"
    "'Tuas origens são fortes, mas também feridas. Sempre acreditou que precisava se defender... "
    "até mesmo daqueles que a amavam.'\n\n";

    const char *historia2 =
    "A segunda carta foi aberta: O Presente. As Encruzilhadas.\n"
    "Um emaranhado de estradas que se perdiam no horizonte. Todas pareciam levar a algum lugar, mas nenhuma mostrava a chegada.\n"
    "Liora ergueu os olhos, frios:\n"
    "'Aqui você está. Diante de escolhas que exigem preço. "
    "O medo de errar a mantém parada. O silêncio não é proteção, é corrente.'\n\n";

    const char *historia3 =
    "Por fim, a terceira carta caiu sobre a mesa: O Futuro. A Serpente.\n"
    "Dourada e sinuosa, reluzia como promessa e ameaça ao mesmo tempo.\n"
    "Liora falou grave:\n"
    "'Quem recusa a mudança é devorado. Quem aceita, renasce com nova força.'\n\n";

    const char *historia4 =

    "Soraya se inclinou sobre a mesa, os olhos faiscando com uma alegria estranha:\n"
    "'Então, pequena coruja... vai ficar enraizada no passado? Vai se perder nas estradas? "
    "Ou terá coragem de encarar a Serpente?'\n\n"

    "Liora não esperou resposta. Suas mãos rápidas como sombras abriram três novas cartas diante de Irena.\n"
    "As figuras brilharam, como se respirassem:\n\n"
    "1 - O Sol (vitória e clareza, mas nenhuma mentira pode sobreviver sob sua luz).\n"
    "2 - A Estrela (esperança, guia suave que aponta, mas nunca força).\n"
    "3 - O Caixão (fim e renascimento, transformação inevitável).\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);

    int escolha = receberResposta(3);

    switch (escolha) {
        case 1:
            decisao1_1();
            pontoRuim++;
            break;
        case 2:
            decisao1_2();
            pontoNeutro++;
            break;
        case 3:
            decisao1_3();
            pontoBom++;
            break;
    }
}

// =======================================================================================================================
// CAMINHO 1_1
// =======================================================================================================================

void decisao1_1(void) {
    const char *historia =
    "\nIrena sentiu a garganta apertada, mas ergueu a mão sobre a primeira carta.\n"
    "— Quero o Sol, disse firme, e sua voz ecoou como se a sala inteira tivesse ouvido.\n\n"

    "No mesmo instante, as lamparinas explodiram em clarões dourados. A sombra recuou, e a sala mostrou cada detalhe:\n"
    "os espelhos quebrados, os gatos atentos, a poeira que brilhava suspensa no ar.\n\n";

    const char *historia1 =
    "Soraya bateu palmas e riu alto:\n"
    "'Clareza! A estrada de quem não teme a verdade! Mas cuidado, coruja: a luz não perdoa. "
    "Ela mostra até aquilo que você preferiria esconder de si mesma.'\n\n"

    "Liora, porém, permaneceu imóvel, apenas encarando-a com olhos de ferro:\n"
    "'Se for realmente a luz que deseja, terá de atravessar cada chama até o fim. "
    "Não peça piedade às revelações.'\n\n"

    "Novas cartas foram abertas sobre a mesa, cintilando na claridade intensa:\n\n"
    "1 - A Lua (ilusões expostas pela luz do Sol).\n"
    "2 - A Torre (a queda que antecede qualquer reconstrução).\n"
    "3 - O Mundo (plenitude e encerramento de um ciclo).\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);

    int escolha = receberResposta(3);

    switch (escolha) {
        case 1:
            decisao1_1_1();
            pontoRuim++;
            break;
        case 2:
            decisao1_1_2();
            pontoNeutro++;
            break;
        case 3:
            decisao1_1_3();
            pontoBom++;
            break;
    }
}

// =======================================================================================================================
// CAMINHO 1_1_1
// =======================================================================================================================

void decisao1_1_1(void) {
    const char *historia =
    "\nO coração de Irena batia como um tambor de guerra.\n"
    "Ela apontou para a primeira carta: — Quero a Lua.\n\n"

    "Soraya arqueou as sobrancelhas, surpresa:\n"
    "'A Lua, mesmo diante do Sol? Ah, pequena coruja, você sempre escolhe o mais tortuoso...'\n\n"

    "Liora virou a carta com um gesto seco. O brilho prateado inundou a mesa.\n"
    "E, pela primeira vez, Irena sentiu a própria respiração falhar.\n\n";

    const char *historia1 =
    "Reflexos começaram a surgir nos espelhos: cenas que não estavam ali, mas que pertenciam a ela.\n"
    "A discussão com os pais, a solidão nos corredores da casa, os segredos que fingia não carregar.\n"
    "Tudo surgia distorcido, como se o Sol mostrasse os contornos, mas fosse a Lua quem revelava o que se escondia.\n\n"

    "Soraya sussurrou:\n"
    "'Nem toda luz traz paz. Às vezes, a claridade só serve para mostrar o quão profundas são as sombras.'\n\n"

    "Liora inclinou-se e disse, firme:\n"
    "'Três ecos ainda podem guiar sua decisão. Três reflexos que não podem mais ser negados.'\n\n"

    "Ela virou três cartas diante dela, cada uma pulsando como um coração vivo:\n\n"
    "1 - O Espelho Partido (a verdade cruel, despedaçada, que não pode ser colada sem sangue).\n"
    "2 - O Falcão (a visão distante, que enxerga além da dor imediata).\n"
    "3 - A Sombra (aceitar que dentro dela sempre haverá algo obscuro).\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);

    int escolha = receberResposta(3);

    switch (escolha) {
        case 1:
            decisao1_1_1_1();
            pontoRuim++;
            break;
        case 2:
            decisao1_1_1_2();
            pontoNeutro++;
            break;
        case 3:
            decisao1_1_1_3();
            pontoBom++;
            break;
    }
}

// =======================================================================================================================
// CAMINHO 1_1_1_1 (FINAL DESTA RAMIFICACAO)
// =======================================================================================================================

void decisao1_1_1_1(void) {
    const char *historia =
    "\nA carta revelada foi O Espelho Partido.\n"
    "Na mesa, a imagem se multiplicou em dezenas de fragmentos de vidro, cada um refletindo um pedaço de Irena.\n\n"

    "Ela viu a criança que nunca foi compreendida, a jovem que se fechou para não sofrer, a mulher que carrega fardos que nunca pediu.\n"
    "Todos os rostos eram dela, mas nenhum era inteiro. E, ao olhar, ela entendeu: jamais voltaria a ser completa.\n\n"

    "Soraya baixou a voz, quase com pena:\n"
    "'Algumas verdades não foram feitas para serem costuradas. São cortes que permanecem abertos.'\n\n"

    "Liora, no entanto, manteve-se firme:\n"
    "'Seja fragmentada, mas não fraca. O destino não exige perfeição, exige coragem.'\n\n";

    const char *historia1 =
    "Os cacos brilhavam, e Irena estendeu a mão. Cada vez que tocava um, sangue escorria por entre os dedos.\n"
    "Mas ela não recuou. Segurou cada pedaço, sentindo dor e força ao mesmo tempo.\n\n"

    "No fim, o baralho se desfez em cinzas. A sala voltou à escuridão.\n"
    "E Irena, mesmo ferida, permanecia em pé — feita de fragmentos, mas consciente de cada um deles.\n\n"

    "Seu destino, a partir dali, seria caminhar carregando as verdades cortantes que a luz e a lua revelaram.\n"
    "E não havia retorno.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
}



// =======================================================================================================================
// CAMINHO 1_1_1_2 (FINAL DESTA RAMIFICAÇÃO)
// =======================================================================================================================

void decisao1_1_1_2(void) {
    const char *historia =
    "\nIrena respirou fundo e escolheu a segunda carta: — Quero o Falcão.\n\n"

    "Soraya inclinou-se para frente, intrigada, e sorriu com certo orgulho:\n"
    "'Ah, a visão distante, a capacidade de enxergar além do imediato. Inteligente, pequena coruja.'\n\n"

    "Liora permaneceu imóvel, encarando Irena com seus olhos frios e profundos. Com um gesto lento, virou a carta.\n"
    "O salão se encheu de uma luz clara, mas precisa, que parecia cortar a névoa da dúvida.\n\n"

    "Nos espelhos, Irena viu cenas do passado que antes pareciam confusas: decisões que tomara, momentos de hesitação, perdas que acreditava irreversíveis.\n"
    "Mas agora podia enxergar padrões, relações escondidas, caminhos que não tinha percebido. Cada detalhe se alinhava como peças de um quebra-cabeça.\n\n";

    const char *historia1 =
    "Soraya falou com um tom suave, quase reverente:\n"
    "'O Falcão vê o que muitos não percebem. Mas visão sem ação é apenas observação. É preciso coragem para transformar a clareza em caminho.'\n\n"

    "Liora acrescentou:\n"
    "'Você não precisa carregar tudo sozinha, mas precisa entender que cada escolha ecoa mais longe do que imagina. O futuro é um espaço onde suas asas podem levá-la, se souber como bater.'\n\n";

    const char *historia2 =
    "Irena sentiu o peso e a liberdade ao mesmo tempo. O passado não podia ser mudado, mas agora podia ser compreendido.\n"
    "Cada erro, cada hesitação, cada medo ganhou um novo sentido: ensinamentos que fortaleciam sua percepção.\n\n"

    "Ela fechou os olhos e respirou profundamente. Como o Falcão, sentiu-se elevada acima das preocupações imediatas, enxergando além da tempestade, das sombras e da luz que a cegava.\n\n";

    const char *historia3 =
    "Quando abriu os olhos, o salão parecia mais silencioso, mais amplo. A tensão que antes a prendia havia se transformado em clareza.\n"
    "Soraya e Liora observavam em silêncio, reconhecendo o crescimento que se manifestava diante delas.\n\n"

    "O baralho desapareceu em uma nuvem de luz e fumaça, deixando apenas Irena em pé, consciente do peso de suas escolhas, mas com a força de quem enxerga além.\n\n"

    "Seu destino não seria fácil, mas agora possuía visão para navegar pelos labirintos da vida. E, pela primeira vez, sentiu que podia voar sozinha.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
}


// =======================================================================================================================
// CAMINHO 1_1_1_3 (FINAL DESTA RAMIFICAÇÃO)
// =======================================================================================================================
void decisao1_1_1_3(void) {
    const char *historia =
    "\nIrena respirou fundo e escolheu a terceira carta: — Quero a Sombra.\n\n"

    "Soraya arregalou os olhos, rindo com uma excitação sombria:\n"
    "'Ah, a pequena coruja abraçando a escuridão dentro de si. Corajosa, muito corajosa...'\n\n"

    "Liora, porém, manteve a compostura e virou a carta lentamente. Uma aura profunda se espalhou pela mesa.\n"
    "O brilho não era nem dourado nem prateado, mas uma mistura que parecia engolir a luz ao redor.\n\n";

    const char *historia1 =
    "Imagens surgiram nos espelhos: Irena enfrentando seus medos mais íntimos, os erros que temia repetir, os caminhos que evitava percorrer.\n"
    "Cada reflexo sussurrava memórias esquecidas, momentos em que hesitou, traições silenciosas, escolhas que escondera até de si mesma.\n\n"

    "Soraya falou com um tom de respeito:\n"
    "'Quem encara a própria sombra nunca é derrotada. Cada cicatriz se torna força, cada medo se torna guia.'\n\n"

    "Irena sentiu um frio atravessar sua espinha. Cada passo que dera até ali parecia pequeno diante do que estava por vir.\n"
    "Mas, pela primeira vez, não sentiu medo. Sentiu clareza. Um fio tênue de controle sobre o caos que sempre a rodeara.\n\n"

    "Liora acrescentou, com um pequeno sorriso:\n"
    "'Aceitar a Sombra não é fraqueza. É reconhecer que o que está escondido dentro de nós pode se tornar nossa maior fonte de poder.'\n\n";

    const char *historia2 =
    "Ao seu redor, o salão mudou. As paredes tornaram-se líquidas, refletindo memórias e sonhos, medos e desejos. \n"
    "Cada reflexo era uma lição, cada sombra, um convite para crescer.\n\n"

    "Irena fechou os olhos e respirou profundamente. Sentiu a presença de tudo que a moldara: a dor, o arrependimento, os momentos de alegria escondidos.\n"
    "Ela percebeu que a escuridão não precisava ser temida; precisava ser compreendida e integrada.\n\n"

    "Soraya finalmente se inclinou sobre a mesa, seus olhos brilhando com aprovação silenciosa:\n"
    "'Agora, pequena coruja, você entende: a verdadeira força não vem da luz que ilumina o caminho, mas da sombra que nos guia quando ninguém mais vê.'\n\n"

    "Liora colocou a mão sobre a mesa, e a aura da carta começou a se dissipar, deixando para trás um silêncio profundo, mas acolhedor.\n"
    "Irena abriu os olhos, sentindo-se inteira, mas diferente. Mais forte, mais consciente, e pronta para o que viesse.\n\n"

    "O baralho se desfez em fumaça delicada, e os gatos que antes a observavam desapareceram na penumbra.\n"
    "Ela deu um passo para fora da mesa, carregando não apenas o peso das suas escolhas, mas a certeza de que podia enfrentar qualquer sombra que surgisse em seu caminho.\n\n"

    "E, pela primeira vez, sorriu para si mesma, sem medo.\n\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
}

// =======================================================================================================================
// CAMINHO 1_1_2_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_1_2_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_1_2_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_1_3_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_1_3_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_1_3_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_2_1_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_2_1_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_2_1_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_2_2_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_2_2_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_2_2_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_2_3_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_2_3_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_2_3_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_3_1_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_3_1_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_3_1_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_3_2_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_3_2_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_3_2_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_3_3_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_3_3_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 1_3_3_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_1_1_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_1_1_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_1_1_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_1_2_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_1_2_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_1_2_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_1_3_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_1_3_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_1_3_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_2_1_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_2_1_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_2_1_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_2_2_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_2_2_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_2_2_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_2_3_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_2_3_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_2_3_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_3_1_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_3_1_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_3_1_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_3_2_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_3_2_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_3_2_3
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_3_3_1
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_3_3_2
// =======================================================================================================================

// =======================================================================================================================
// CAMINHO 2_3_3_3
// =======================================================================================================================
