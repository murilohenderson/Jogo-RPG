#include <stdio.h>
#include <stdlib.h>

// Variáveis globais
int pontoBom = 0;
int pontoNeutro = 0;
int pontoRuim = 0;

// Funções
int receberResposta(int numOpcoes);
void resultado(void);
void primeiraConversa(void);
void decisaoBaralho(void);

//decisões iniciais
void decisaoA1_1_1(void);
void decisaoA1_2_1(void);
void decisaoA1_2_2(void);
void decisaoA1(void);
void decisaoA1_1(void);
void decisaoA1_2(void);
void decisaoA2(void);
void decisaoA2_1(void);
void decisaoA2_2(void);
void decisaoA3(void);
void decisaoA3_1(void);
void decisaoA3_2(void);
void decisaoA3_3(void);
void decisaoA3_3_fogo(void);
void decisaoA3_3_pena(void);
void decisaoA3_3_ambiente(void);
void decisaoA3_final(void);

//decisões 1
void decisao1(void);

//decisões 1.1
void decisao1_1(void);
void decisao1_1_1(void);
void decisao1_1_1_1(void);
void decisao1_1_1_2(void);
void decisao1_1_1_3(void);

void decisao1_1_2(void);
void decisao1_1_2_1(void); 
void decisao1_1_2_2(void); 
void decisao1_1_2_3(void); 

void decisao1_1_3(void);
void decisao1_1_3_1(void);
void decisao1_1_3_2(void);
void decisao1_1_3_3(void);

//decisões 1.2
void decisao1_2(void);
void decisao1_2_1(void);
void decisao1_2_1_1(void);
void decisao1_2_1_2(void);
void decisao1_2_1_3(void);

void decisao1_2_2(void);
void decisao1_2_2_1(void);
void decisao1_2_2_2(void);
void decisao1_2_2_3(void);

void decisao1_2_3(void);
void decisao1_2_3_1(void);
void decisao1_2_3_2(void);
void decisao1_2_3_3(void);

//decisões 1.3
void decisao1_3(void);
void decisao1_3_1(void);
void decisao1_3_1_1(void);
void decisao1_3_1_2(void);
void decisao1_3_1_3(void);

void decisao1_3_2(void);
void decisao1_3_2_1(void);
void decisao1_3_2_2(void);
void decisao1_3_2_3(void);

void decisao1_3_3(void);
void decisao1_3_3_1(void);
void decisao1_3_3_2(void);
void decisao1_3_3_3(void);

//finais
void finalBom(void);
void finalNeutro(void);
void finalRuim(void);

//usuário
void continuar(void);

// introdução alternativa
void introducao(void);

// apresentação do jogo
void apresentacaoJogo();

// game overs
void gameOverMultidao(void);
void gameOverQueda(void);
void gameOverDesistir(void);


int main () {
    
    apresentacaoJogo();
    continuar();
    introducao();

    resultado();

    return 0;
}

// Função genérica para respostas
int receberResposta(int numOpcoes) {
    int opcao;
    do {
        printf("==================================================================================\n");
        printf("                   ✧･ﾟ: *✧･ﾟ:*  🌿 Hora de Escolher  *:･ﾟ✧*:･ﾟ✧\n");
        printf("==================================================================================\n");
        printf("Digite sua escolha (1-%d): ", numOpcoes);
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > numOpcoes);
    
    return opcao;
}

//Função para decidir final
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
        printf("==================================================================================\n");
        printf("Digite 1 para prosseguir: ");
        scanf("%d", &resposta);
    } while (resposta != 1);
}


//Funções para diferentes finais
void finalBom(void) {
    printf("================ ✧･ﾟ: *✧･ﾟ:*  ✨ F I N A L    B O M  ✨  *:･ﾟ✧*:･ﾟ✧ ===============\n");
    printf("O destino de Irena se revelou cheio de esperança e luz.\n");
}

void finalNeutro(void) {
    printf("=･ﾟ☾ ☾ﾟ･｡✦･──･✦･｡☼ﾟ･☾ ☾ﾟ･ ◑  F I N A L   N E U T R O  ◑ ･ﾟ☾ ☾ﾟ･｡✦･──･✦･｡☼ﾟ･☾ ☾ﾟ･=\n");
    printf("O destino de Irena permaneceu equilibrado, sem grandes vitórias nem grandes perdas.\n");
}

void finalRuim(void) {
    printf("===== ･ﾟ☁️ﾟ･｡★･__･★･｡ﾟ･☁️･ﾟ･⚠️  F I N A L    R U I M  ⚠️･ﾟ☁️ﾟ･｡★･───･★･｡ﾟ･☁️･ﾟ =====\n");
    printf("O destino de Irena se revelou sombrio e cheio de desafios.\n");
}

// Apresentar o jogo
void apresentacaoJogo() {
    const char *historia = 
    "Bem-vindo a 'Tessituras de Kali'!\n"
    "Aqui, você seguirá Irena em sua jornada mágica de autodescoberta, enfrentando desafios que testarão coragem e sensibilidade.\n"
    "Cada decisão pode abrir portas para novas experiências ou fechar caminhos antigos. O destino de Irena está em suas mãos.\n"
    "Preste atenção aos sinais, ouça as vozes do passado e explore os segredos que se escondem em cada escolha.\n"
    "Prepare-se para uma aventura intensa, repleta de mistério, emoção e descobertas surpreendentes.\n"
    "Boa sorte!";

    printf("%s", historia);
}

// =======================================================================================================================
// INTRODUÇÃO
// =======================================================================================================================

void introducao(void) {
    const char *historia =
    "Entre becos estreitos da feira de Fhaolann, Irena seguia um caminho secreto.\n"
    "Seus passos eram precisos, como se o labirinto já estivesse gravado em sua pele.\n"
    "O caminho parecia cada vez mais estreito, e seus olhos buscavam uma saída.\n"
    "As ruas estavam tomadas. Corpos, animais, barracas, tudo misturado como um emaranhado vivo.\n"
    "Ela sabia que precisava decidir: seguir entre a multidão, tentar alcançar os telhados das casas para chegar mais depressa ou ir pelo esgoto da cidade para não ser vista.\n"
    "\nO que Irena fará?\n"
    "1 - Forçar caminho pela rua lotada.\n"
    "2 - Escalar e avançar pelos telhados.\n"
    "3 - Buscar um desvio pelos esgotos da cidade.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        decisaoA1();
    } else if (escolha == 2) {
        decisaoA2();
    } else if (escolha == 3) {
        decisaoA3();
    } else {
        printf("Opção inválida");
        introducao();
    }
}

// =======================================================================================================================
// GAME OVERS
// =======================================================================================================================

void gameOverMultidao(void) {
    printf("\nA pressão da multidão esmagou Irena contra as barracas. Seus pulmões imploravam por ar.\n");
    printf("A última visão foi um céu cinzento se fechando sobre si, até que tudo desapareceu.\n");
    printf("\nGAME OVER\n");
    exit(0);
}

void gameOverQueda(void) {
    printf("\nO pé de Irena escorregou em uma telha molhada.\n");
    printf("O mundo girou antes que seu corpo se chocasse contra o chão.\n");
    printf("Sua perna quebrou em um ângulo impossível. O céu escureceu enquanto criaturas surgiam nas sombras.\n");
    printf("\nGAME OVER\n");
    exit(0);
}

void gameOverEsgoto(void) {
    printf("\nIrena desceu pelos esgotos da cidade, mas a escuridão escondia algo além do fedor.\n");
    printf("Um par de olhos amarelados a fitou antes que garras a puxassem para a água turva.\n");
    printf("Nada além do silêncio restou.\n");
    printf("\nGAME OVER\n");
    exit(0);
}

// =======================================================================================================================
// CAMINHO A1 (RUAS)
// =======================================================================================================================

void decisaoA1(void) {
    const char *historia =
    "\nIrena apertou o passo, enfiando-se por entre corpos, tecidos coloridos e gritos de vendedores.\n"
    "Um burro de carga passou disparado ao seu lado, e o choque quase a derrubou.\n"
    "Ela precisava reagir rápido.\n"
    "\n1 - Se lançar para a direita, em direção a uma barraca de frutas.\n"
    "2 - Saltar para a esquerda, onde um viajante distraído carregava caixas.\n"
    "3 - Forçar ainda mais contra a multidão.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        decisaoA1_1();
    } else if (escolha == 2) {
        decisaoA1_2();
    } else if (escolha == 3) {
        gameOverMultidao();
    } else {
        printf("Opção inválida");
        decisaoA1();
    }
}

void decisaoA1_1(void) {
    const char *historia =
    "\nEla se jogou para a direita, derrubando uma pilha de romãs que rolaram pelo chão como esferas rubras.\n"
    "O vendedor gritou, amaldiçoando seu nome, mas ela já desaparecia entre a multidão.\n"
    "Um beco estreito surgia à frente.\n"
    "\n1 - Entrar no beco.\n"
    "2 - Voltar para a rua principal.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        decisaoA1_1_1();
    } else if (escolha == 2) {
        decisaoA1();
    } else {
        printf("Opção inválida");
        decisaoA1_1();
    }
}

void decisaoA1_1_1(void) {
    const char *historia =
    "\nO beco cheirava a mofo e a ferrugem. Ratos corriam entre sombras.\n"
    "No fim, havia uma porta de madeira marcada por runas apagadas.\n"
    "\n1 - Abrir a porta.\n"
    "2 - Ignorar a porta e escalar para o telhado.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        primeiraConversa();
    } else if (escolha == 2) {
        decisaoA2();
    } else {
        printf("Opção inválida");
        decisaoA1_1_1();
    }
}

void decisaoA1_2(void) {
    const char *historia =
    "\nIrena saltou para a esquerda, chocando-se contra um viajante que carregava caixas.\n"
    "As madeiras estalaram, e um líquido viscoso escorreu, manchando o chão.\n"
    "O homem a xingou em um dialeto áspero, mas ela se recompôs e seguiu adiante.\n"
    "\n1 - Pedir desculpas ao viajante.\n"
    "2 - Ignorá-lo e continuar correndo.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        decisaoA1_2_1();
    } else if (escolha == 2) {
        decisaoA1_2_2();
    } else {
        printf("Opção inválida");
        decisaoA1_2();
    }
}

void decisaoA1_2_1(void) {
    const char *historia =
    "\nO viajante olhou surpreso pela gentileza em meio ao caos.\n"
    "Ele entregou a Irena uma pequena pena negra que havia caído da caixa.\n"
    "'Pode lhe servir', murmurou.\n"
    "Ela seguiu adiante com a pena nos bolsos.\n"
    "\nMais à frente, uma viela escura com uma porta ao final se abria.\n";
    printf("%s", historia);
    primeiraConversa();
}

void decisaoA1_2_2(void) {
    printf("\nIrena virou as costas e correu. Mas o homem gritou: 'LADRÃO!' \n");
    printf("Guardas surgiram, agarrando-a pelos braços.\n");
    printf("Uma algema mágica selou sua energia. A escuridão da cela foi seu fim.\n");
    printf("\nGAME OVER\n");
}

// =======================================================================================================================
// CAMINHO A2 (TELHADOS)
// =======================================================================================================================

void decisaoA2(void) {
    const char *historia =
    "\nCom agilidade, Irena escalou uma janela estreita e alcançou os telhados.\n"
    "Lá de cima, o mundo parecia respirar diferente: um mar de telhas vermelhas e fumaça.\n"
    "Mas cada passo podia ser sua queda.\n"
    "\n1 - Correr velozmente, saltando de telhado em telhado.\n"
    "2 - Avançar devagar, quase sem ruído.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        decisaoA2_1();
    } else if (escolha == 2) {
        decisaoA2_2();
    } else {
        printf("Opção inválida");
        decisaoA2();
    }
}

void decisaoA2_1(void) {
    const char *historia =
    "\nIrena correu como vento. Telhas quebraram sob seus pés, caindo e estilhaçando-se no chão.\n"
    "Guardas olharam para cima, desconfiados, mas a jovem já havia desaparecido na sombra de uma chaminé.\n"
    "\n1 - Continuar correndo.\n"
    "2 - Esconder-se atrás da chaminé.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        gameOverQueda();
    } else if (escolha == 2) {
        decisaoA2_2();
    } else {
        printf("Opção inválida");
        decisaoA2_1();
    }
}

void decisaoA2_2(void) {
    const char *historia =
    "\nPasso a passo, ela avançou em silêncio.\n"
    "Os gatos que habitavam os telhados a seguiram com olhos brilhantes, mas nenhum som escapou.\n"
    "Assim, chegou a uma rua lateral, invisível aos olhos dos guardas.\n"
    "\n1 - Descer para a rua.\n"
    "2 - Continuar pelos telhados.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        decisaoA1();
    } else if (escolha == 2) {
        gameOverQueda();
    } else {
        printf("Opção inválida");
        decisaoA2_2();
    }
}

// =======================================================================================================================
// CAMINHO A3 (ESGOTOS) – EXPANDIDO
// =======================================================================================================================

void decisaoA3(void) {
    const char *historia =
    "\nIrena empurrou uma grade enferrujada e desceu para os esgotos da cidade.\n"
    "A umidade escorria pelas paredes, e o cheiro era insuportável.\n"
    "Ratos observavam das sombras, mas havia também algo maior ali.\n"
    "\n1 - Seguir pelo túnel iluminado por tochas.\n"
    "2 - Seguir pelo túnel completamente escuro.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        decisaoA3_1();
    } else if (escolha == 2) {
        decisaoA3_2();
    } else {
        printf("Opção inválida\n");
        decisaoA3();
    }
}

void decisaoA3_2(void) {
    const char *historia =
    "\nO túnel iluminado parecia mais seguro, mas sons estranhos ecoavam adiante.\n"
    "Um rosnado baixo reverberava nas paredes, misturado ao som da água corrente.\n"
    "\n1 - Avançar cautelosamente para investigar.\n"
    "2 - Correr em direção oposta, tentando escapar.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        decisaoA3_3();
    } else if (escolha == 2) {
        printf("\nIrena correu em desespero, mas a escuridão era traiçoeira.\n");
        printf("Algo emergiu da água e a puxou sem que pudesse reagir.\n");
        gameOverEsgoto();
    } else {
        printf("Opção inválida\n");
        decisaoA3_1();
    }
}

void decisaoA3_3(void) {
    const char *historia =
    "\nIrena se aproximou e viu uma criatura colossal, metade réptil, metade sombra.\n"
    "Os olhos amarelados a fixavam com fome antiga. A água borbulhava em volta.\n"
    "Ela sabia que não havia como fugir sem lutar.\n"
    "\n1 - Preparar um feitiço de fogo.\n"
    "2 - Usar a pena negra que recebeu do viajante.\n"
    "3 - Procurar algo no ambiente para se defender.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        decisaoA3_3_fogo();
    } else if (escolha == 2) {
        decisaoA3_3_pena();
    } else if (escolha == 3) {
        decisaoA3_3_ambiente();
    } else {
        printf("Opção inválida\n");
        decisaoA3_2();
    }
}

void decisaoA3_3_fogo(void) {
    const char *historia =
    "\nIrena ergueu as mãos, e chamas dançaram na escuridão.\n"
    "Ela lançou o feitiço contra o monstro, iluminando o túnel em clarões alaranjados.\n"
    "O fogo atingiu a criatura, mas só pareceu irritá-la ainda mais.\n"
    "A água fervia em sua volta.\n"
    "\n1 - Atacar novamente com magia.\n"
    "2 - Tentar correr enquanto a criatura se debate.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        decisaoA3_final();
    } else if (escolha == 2) {
        decisaoA3_final();
    } else {
        printf("Opção inválida\n");
        decisaoA3_3_fogo();
    }
}

void decisaoA3_3_pena(void) {
    const char *historia =
    "\nIrena segurou a pena negra com força. Ela vibrou, e uma rajada de vento cortou o túnel.\n"
    "A criatura recuou por um instante, como se reconhecesse o artefato.\n"
    "Mas então avançou com ainda mais ferocidade.\n"
    "\n1 - Usar a pena novamente.\n"
    "2 - Jogar a pena na água e preparar-se para o combate direto.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        decisaoA3_final();
    } else if (escolha == 2) {
        decisaoA3_final();
    } else {
        printf("Opção inválida\n");
        decisaoA3_3_pena();
    }
}

void decisaoA3_3_ambiente(void) {
    const char *historia =
    "\nIrena olhou ao redor e viu correntes enferrujadas presas às paredes.\n"
    "Com um esforço, puxou uma delas e a brandiu como chicote.\n"
    "A corrente estalou contra a criatura, mas foi como atingir pedra.\n"
    "\n1 - Continuar lutando com a corrente.\n"
    "2 - Largar a corrente e tentar conjurar magia.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        decisaoA3_final();
    } else if (escolha == 2) {
        decisaoA3_final();
    } else {
        printf("Opção inválida\n");
        decisaoA3_3_ambiente();
    }
}

void decisaoA3_final(void) {
    const char *historia =
    "\nA criatura avançou com força descomunal, esmagando a defesa de Irena.\n"
    "Ela tentou resistir — chamas, vento, correntes — nada parecia deter aquele ser ancestral.\n"
    "Um golpe poderoso a lançou contra a parede, e a água turva a envolveu.\n"
    "A última visão foram os olhos amarelados brilhando na escuridão, antes de ser arrastada para o fundo.\n";
    printf("%s", historia);
    gameOverEsgoto();
}


void decisaoA3_1(void) {
    const char *historia =
    "\nO túnel iluminado a levou até uma escada de ferro que subia.\n"
    "No topo, havia uma abertura circular com uma tampa pesada.\n"
    "Ao forçá-la, Irena saiu em um pátio abandonado, cheio de estátuas quebradas.\n"
    "No centro, uma porta com símbolos idênticos aos das runas antigas do beco.\n"
    "\n1 - Abrir a porta.\n"
    "2 - Tentar escalar os muros do pátio.\n";
    printf("%s", historia);

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        primeiraConversa();
    } else if (escolha == 2) {
        decisaoA2();
    } else {
        printf("Opção inválida");
        decisaoA3_1();
    }
}

// =======================================================================================================================
// PRIMEIRA CONVERSA
// =======================================================================================================================

void primeiraConversa(void) {
    const char *historia =
    "\n Ao abrir a porta, Irena atravessou-a e seguiu a frente.\n"
    "As portas se fecharam atrás de Irena.\n"
    "O silêncio caiu, quebrado apenas pela chuva e pelo miado distante de um gato.\n"
    "Das sombras surgiu Liora: alta, envolta em véus, olhos como brasas ocultas.\n\n"
    "'E não é que a coruja voltou ao ninho?', disse, sua voz ecoando na penumbra.\n\n"
    "Logo Soraya apareceu, risonha, cheia de cores e anéis tilintando.\n\n";

    const char *historia1 =
    "'Ah, a menina voltou! Ainda com segredos nos bolsos.'\n\n"
    "As duas a cercaram, lembranças e provocações no ar.\n"
    "Então Liora estendeu a mão para uma mesa com cartas presas por fita vermelha.\n\n"
    "'Diga, minha coruja... como deseja abrir a mesa desta vez?'\n\n"
    "Soraya riu e insistiu:\n";

    const char *historia2 =
    "'Passado, presente e futuro em linha?'\n"
    "Irena sentiu o peso do olhar das duas, uma chama viva e uma sombra eterna.\n\n"
    "'Agora, a escolha é sua...'\n";
    printf("%s\n", historia);
    continuar(); 
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();

    decisaoBaralho();
}


// Decisão do baralho
void decisaoBaralho(void) {
    const char *historia =
    "\nSobre a mesa repousa o baralho amarrado por fita vermelha. As duas feiticeiras aguardam em silêncio, enquanto os gatos observam cada movimento.\n\n"
    "Liora sussurra: 'A forma como abrir as cartas é também a forma como abrirá o seu destino.'\n\n"
    "Soraya ri e bate palmas: 'Então, pequena, escolha o caminho!'\n\n"
    "1 - Três Caminhos: passado, presente e futuro.\n"
    "2 - Desistir (sair do jogo).\n";
    
    printf("%s\n", historia);

    int escolha = receberResposta(2); 

    switch (escolha) {
        case 1:
            decisao1();
            break;
        case 2:
            gameOverDesistir();
        break;
    }
}

void gameOverDesistir(void) {
    const char *historia =
    "Irena é tomada pelo medo de descobrir um futuro o qual não quer que seja o seu.\n"
    "Ela desiste e vai embora.\n"
    "GAME OVER";

    printf("%s", historia);
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
    "Quando ergueu a voz, não havia tremor: 'Quero os Três Caminhos.'\n\n"

    "Soraya bateu palmas, quase dançando:\n"
    "'Ah! A coruja ousa enxergar por inteiro. Passado, presente e futuro... Mas cuidado: quem olha para tudo, "
    "não pode mais fingir que não sabe.'\n\n"

    "Liora apenas deslizou a unha sobre a fita vermelha. O laço se desfez sozinho, e o baralho respirou, espalhando frio pelo salão.\n";

    const char *historia1 =
    "\nA primeira carta foi virada: O Passado. Era A Árvore.\n"
    "Raízes fundas, mas retorcidas, sufocadas em sua própria densidade.\n\n"
    "Liora falou baixo, mas firme:\n"
    "'Tua infância foi um tronco forte, mas marcado de cortes. "
    "Buscava abrigo nos ramos, mas encontrou peso demais. "
    "Até hoje, carrega cicatrizes que não são só tuas, mas herdadas.'\n";

    const char *historia2 =
    "\nA segunda carta foi aberta: O Presente. As Encruzilhadas.\n"
    "Um emaranhado de estradas que se perdiam no horizonte. Nenhuma mostrava a chegada.\n\n"
    "Soraya inclinou-se, séria pela primeira vez:\n"
    "'Eis onde estás, coruja. Cada silêncio é uma escolha, cada recusa também. "
    "Teu medo de errar a mantém imóvel — mas ficar parada já é escolher perder.'\n";

    const char *historia3 =
    "\nPor fim, a terceira carta caiu: O Futuro. A Serpente.\n"
    "Dourada e sinuosa, reluzia como promessa e ameaça.\n\n"
    "Liora ergueu os olhos fixos:\n"
    "'A mudança te espera, queira ou não. Se resistires, será engolida. "
    "Se aceitares, nascerás de novo — mas jamais a mesma.'\n";

    const char *historia4 =
    "\nSoraya sorriu, como quem saboreia um segredo:\n"
    "'Então, pequena coruja... vais ficar presa nas raízes? Perdida nas estradas? "
    "Ou terás coragem de encarar a Serpente?'\n\n"

    "E três novas cartas surgiram diante dela, respirando como se estivessem vivas:\n\n"
    "1 - O Sol (clareza absoluta, mas toda máscara cai sob sua luz).\n"
    "2 - A Estrela (esperança e guia, mas nunca força o caminho).\n"
    "3 - O Caixão (fim inevitável, mas também o nascimento de algo novo).\n";

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
            pontoRuim++;
            decisao1_1();
            break;
        case 2:
            pontoNeutro++;
            decisao1_2();
            break;
        case 3:
            pontoBom++;
            decisao1_3();
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
    "os espelhos quebrados, os gatos atentos, a poeira que brilhava suspensa no ar.\n";

    const char *historia1 =
    "\nSoraya bateu palmas e riu alto:\n"
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
            pontoRuim++;
            decisao1_1_1();
            break;
        case 2:
            pontoNeutro++;
            decisao1_1_2();
            break;
        case 3:
            pontoBom++;
            decisao1_1_3();
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
    "E, pela primeira vez, Irena sentiu a própria respiração falhar.\n";

    const char *historia1 =
    "\nReflexos começaram a surgir nos espelhos: cenas que não estavam ali, mas que pertenciam a ela.\n"
    "A discussão com os pais, a solidão nos corredores da casa, os segredos que fingia não carregar.\n"
    "Tudo surgia distorcido, como se o Sol mostrasse os contornos, mas fosse a Lua quem revelava o que se escondia.\n"

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
            pontoNeutro++;
            decisao1_1_1_1();
            break;
        case 2:
            pontoBom++;
            decisao1_1_1_2();
            break;
        case 3:
            pontoRuim++;
            decisao1_1_1_3();
            break;
    }
}

// =======================================================================================================================
// CAMINHO 1_1_1_1 — O ESPELHO PARTIDO
// =======================================================================================================================
// Justificativa de pontos:
// O Espelho Partido obriga Irena a encarar diretamente seus traumas e preconceitos sofridos.
// É doloroso e cruel, mas revela verdades profundas que ela evitava.
// Aqui, a escolha não é boa nem má, é um mergulho necessário, mas que a deixa fragilizada.
// Por isso, conta como ponto NEUTRO.
// =======================================================================================================================

void decisao1_1_1_1(void) {
    const char *historia =
    "\nIrena estendeu a mão, hesitante, e tocou a primeira carta.\n"
    "— Quero o Espelho Partido.\n\n"

    "Soraya arqueou as sobrancelhas, soltando um riso amargo:\n"
    "'Ah... escolheste a lâmina que corta a própria carne. Não há mentira que sobreviva diante de um reflexo estilhaçado.'\n\n"

    "Liora virou a carta com lentidão, e o estalo seco ecoou pelo salão. "
    "De súbito, os espelhos da sala se quebraram sozinhos, fragmentando-se em mil pedaços, "
    "e em cada um deles um pedaço da vida de Irena refletia, distorcido, sangrando luz.\n";

    const char *historia1 =
    "\nNo primeiro fragmento, Irena era criança, implorando para brincar com os colegas. "
    "Eles riam, chamando-a de 'estranha', 'negra amaldiçoada'. "
    "Jogavam pedras perto de seus pés, como se ela fosse um animal a ser afastado. "
    "E quando, chorando, buscava conforto nos professores, recebia apenas silêncio cúmplice.\n\n"

    "Soraya murmurou, sombria:\n"
    "'A escola foi tua primeira arena de guerra. Não contra espadas, mas contra olhares que ferem. "
    "Eles nunca te viram como criança. Te viram como ameaça.'\n";

    const char *historia2 =
    "\nOutro estilhaço mostrava Irena mais velha, discutindo com os pais. "
    "O pai cuspia palavras de ferro: 'Não sujará nosso nome com feitiçarias!' "
    "A mãe chorava, mas sua súplica era tão cruel quanto a fúria: 'Seja normal, só isso, seja normal!' "
    "Irena gritava de volta, mas no fundo desejava apenas ser aceita, inteira, sem precisar pedir perdão por existir.\n\n"

    "Liora falou baixo, mas firme:\n"
    "'Eles não enxergaram tua dor, porque a confundiram com rebeldia. "
    "Queriam que fosses um reflexo deles, mas teu espelho nunca coube em suas molduras.'\n";

    const char *historia3 =
    "\nE o maior fragmento — o mais cruel — mostrava Irena sozinha em seu quarto, "
    "abraçando os próprios joelhos. "
    "As lágrimas secas manchavam sua pele, e no silêncio ela repetia em pensamento: "
    "'Talvez realmente haja algo errado comigo... talvez seja eu o problema.'\n\n"

    "Soraya aproximou-se, sua voz tão suave quanto venenosa:\n"
    "'O Espelho Partido não mente. Ele mostra como foste ensinada a carregar culpas que nunca foram tuas. "
    "Mas a verdade, pequena coruja, é que quebraram o vidro para que jamais visses tua força inteira.'\n";

    const char *historia4 =
    "\nOs pedaços começaram a flutuar, unindo-se ao redor de Irena como uma coroa de lâminas. "
    "Ela sentiu dor, mas também clareza: cada corte revelava que o sangue era prova de vida. "
    "Não havia mais como negar — o passado a ferira, mas também a moldara.\n\n"

    "Liora declarou, com solenidade:\n"
    "'Olha bem, Irena. Não há volta ao espelho intacto. "
    "Ou aceitas teus fragmentos, ou permanecerás para sempre tentando colar uma mentira.'\n\n"

    "O baralho tremeu, e os cacos se desfizeram em poeira cintilante. "
    "Irena ficou de pé, sangrando em alma, mas com os olhos abertos de quem, pela primeira vez, "
    "não tem mais medo de se encarar.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
}




// =======================================================================================================================
// CAMINHO 1_1_1_2 — O FALCÃO
// =======================================================================================================================
// Justificativa de pontos:
// O Falcão representa clareza e visão. Irena compreende seu passado e enxerga padrões que antes
// pareciam confusos. Essa escolha dá a ela maturidade e poder de decisão.
// É um avanço positivo, que a fortalece e lhe dá ferramentas para seguir em frente.
// Por isso, conta como ponto BOM.
// =======================================================================================================================

void decisao1_1_1_2(void) {
    const char *historia =
    "\nIrena respirou fundo. Sua mão tremeu levemente ao tocar a carta, mas não hesitou:\n"
    "— Quero o Falcão.\n\n"

    "Soraya inclinou-se para frente, os olhos faiscando de orgulho:\n"
    "'Ah... então escolhes a visão. A coragem de olhar de cima, onde tudo se revela sem véus. "
    "Poucos suportam esse voo, pequena coruja. O Falcão não perdoa ilusões.'\n\n"

    "Liora, com a frieza de quem enxerga além do presente, virou a carta. "
    "No instante em que o símbolo alado surgiu, o salão se iluminou com uma claridade cortante, "
    "precisa como lâmina. Não era o calor do Sol nem o engano da Lua — era a luz da percepção nua.\n";

    const char *historia1 =
    "\nOs espelhos ao redor começaram a vibrar. Neles, Irena viu-se criança, "
    "num corredor de escola. Os risos dos colegas não eram partilha, mas flechas afiadas. "
    "Chamavam-na de 'sombria', riam de sua pele, e sussurravam que ela tinha o 'toque das bruxas'.\n\n"

    "Soraya falou num tom quase triste:\n"
    "'Eras deixada de lado não porque eras fraca, mas porque tua luz assustava os que viviam na sombra. "
    "Eles não suportavam tua diferença — tua cor, tua magia, tua coragem em existir. "
    "O Falcão mostra: não era culpa tua, mas o medo deles que te isolava.'\n";

    const char *historia2 =
    "\nAs imagens mudaram. Irena viu-se em casa, gritando contra os próprios pais. "
    "Eles exigiam silêncio sobre sua feitiçaria, pediam que escondesse o que era. "
    "Ela lembrava das palavras afiadas da mãe: 'Se continuar assim, só atrairá desgraça.' "
    "E da voz dura do pai: 'Nenhuma filha minha será uma aberração.'\n\n"

    "Liora ergueu o dedo, fria como aço:\n"
    "'Carregaste a culpa até deles, quando eram eles que temiam o que não compreendiam. "
    "Teu poder não é maldição, é herança. O Falcão diz: eles tentaram quebrar tuas asas, "
    "mas esquecem que o voo sempre será teu.'\n";

    const char *historia3 =
    "\nO peito de Irena ardeu. O que antes eram memórias dolorosas agora se alinhavam diante dela. "
    "A exclusão, as humilhações, a solidão... nada disso a definia. "
    "O Falcão lhe mostrava que cada ferida era também uma marca de sobrevivência. "
    "E que sobrevivência também é poder.\n\n"

    "Soraya se inclinou, voz suave mas firme:\n"
    "'O Falcão vê longe, pequena coruja. Ele não te mostra um caminho sem dor, mas um futuro onde a dor "
    "se torna teu combustível. Agora, precisas decidir: ficarás apenas observando o horizonte, "
    "ou abrirás as asas para cruzá-lo?'\n";

    const char *historia4 =
    "\nIrena fechou os olhos. Sentiu-se erguida acima da tempestade, "
    "mais alta que os corredores escuros, mais forte que as vozes que a feriam. "
    "Percebeu que a tempestade não era o fim — era a travessia.\n\n"

    "Quando abriu os olhos, o salão parecia vasto e silencioso. "
    "Soraya sorria, e Liora, pela primeira vez, a observava sem dureza, quase com respeito. "
    "O baralho se dissolveu em luz e fumaça, como se tivesse cumprido seu papel.\n\n"

    "Irena estava de pé, ereta, consciente do peso das suas cicatrizes — "
    "mas também da liberdade que vinha com a clareza. "
    "Já não era apenas a coruja que buscava abrigo: era também o Falcão, "
    "com asas prontas para desafiar o céu.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
}



// =======================================================================================================================
// CAMINHO 1_1_1_3 — A SOMBRA
// =======================================================================================================================
// Justificativa de pontos:
// A Sombra simboliza a raiva e a dor reprimida de Irena. Aceitar a Sombra é aceitar sua parte
// obscura como fonte de força. Isso dá poder, mas também abre espaço para que ela se torne
// dependente da raiva se não souber equilibrar.
// É um caminho de risco: não é puramente positivo, mas também não é passivo como o Espelho.
// Por isso, conta como ponto RUIM (pois há perigo de ser consumida pela própria escuridão).
// =======================================================================================================================

void decisao1_1_1_3(void) {
    const char *historia =
    "\nIrena respirou fundo, mas seus olhos não vacilaram. "
    "Ela pousou o dedo na terceira carta.\n"
    "— Quero a Sombra.\n\n"

    "Soraya arqueou os lábios num sorriso quase perverso:\n"
    "'Corajosa... ou insensata. Poucos têm ânimo para dançar com o que escondem dentro de si.'\n\n"

    "Liora virou a carta. O salão mergulhou em escuridão total, tão densa que até a respiração parecia engolida. "
    "De repente, atrás dela, surgiu uma silhueta idêntica à sua — Irena, feita de sombras puras, com olhos de brasa.\n";

    const char *historia1 =
    "\nA sombra falou com sua voz, mas mais grave, mais sincera:\n"
    "'Sou eu quem guarda tua raiva pelos insultos na escola. "
    "Sou eu quem não esquece a risada deles, o desprezo em cada olhar. "
    "Enquanto tu te encolhias, eu crescia, alimentada pelo ódio que nunca disseste em voz alta.'\n\n"

    "Soraya comentou, quase encantada:\n"
    "'Vês? O que rejeitas nunca morre. Apenas espera, paciente, até que o chame.'\n";

    const char *historia2 =
    "\nA sombra avançou um passo. A voz ecoou mais forte:\n"
    "'Fui eu quem respondeu aos teus pais, quando eles te chamaram de aberração. "
    "Quando tua mãe pediu que fosses invisível, eu gritei dentro de ti: "
    "‘Não vou pedir desculpa por existir!’ "
    "Tu calaste por medo de perdê-los, mas eu nunca calei.'\n\n"

    "Liora cruzou os braços, séria:\n"
    "'A Sombra não é inimiga. É a parte de ti que lutou quando já não tinhas forças. "
    "Negá-la é negar tua própria sobrevivência.'\n";

    const char *historia3 =
    "\nIrena caiu de joelhos, os olhos fixos na sua versão de trevas. "
    "O coração batia acelerado, não de medo, mas de reconhecimento. "
    "A sombra se ajoelhou diante dela, tocando sua mão.\n\n"

    "'Eu sou tua raiva. Tua dor. Tua resistência. "
    "Se me rejeitares, sempre estarei contra ti. "
    "Mas se me aceitares, serei tua arma — e tua liberdade.'\n";

    const char *historia4 =
    "\nO silêncio caiu. Irena fechou os olhos e inspirou fundo. "
    "Não havia mais como fugir: dentro dela sempre existiria escuridão, "
    "mas não como inimiga — como parte do seu poder.\n\n"

    "Soraya sorriu com satisfação:\n"
    "'Ela aceitou. Não para ser devorada, mas para ser inteira.'\n\n"

    "Liora completou, num tom quase reverente:\n"
    "'A luz que não conhece sombra é cega. Agora, Irena, tu és visão e noite, asa e garras. "
    "Completa em tua imperfeição.'\n\n"

    "O salão se iluminou lentamente. A sombra fundiu-se a ela, desaparecendo sem desaparecer. "
    "O baralho sumiu, restando apenas Irena — não mais dividida, mas inteira.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
}


// =======================================================================================================================
// CAMINHO 1_1_2 — 
// =======================================================================================================================
// Justificativa de pontos:
// =======================================================================================================================

void decisao1_1_2(void) {
    const char *historia =
    "\nO estalo da Torre ecoa como ossos antigos partindo. O teto se abre em fendas, e por elas cai um pó dourado, "
    "nem cinza, nem luz — uma matéria entre mundos. O ar torna-se denso, quase líquido, e cada respiração "
    "parece mergulho.\n\n"

    "Liora ergue o queixo; seus olhos brilham como se guardassem memórias que não pertencem apenas a ela. "
    "'Quando algo rui, não é apenas pedra', diz, firme. 'É também a versão de ti que aceitava viver dentro dela.'\n\n"

    "O silêncio seguinte não é vazio — é ventre. E é nele que Soraya desenha um círculo no ar. O pó suspenso "
    "obedece, reunindo-se, e dele surgem três cartas, lentas, como se despertassem de um sono profundo. "
    "As bordas ainda carregam o mofo do esquecimento.\n\n";

    const char *historia1 =
    "Soraya fala baixo, mas a voz se espalha como canto em caverna:\n"
    "'Na queda, escolhe-se não o caminho, mas a forma de reerguer-se. "
    "Cada carta é um gesto teu sobre as ruínas.'\n\n"

    "As três cartas se inclinam na sua direção, oferecendo-se:\n\n"
    "1 - O LIVRO   — Guardião dos segredos. A palavra que organiza o que parecia caos.\n"
    "2 - A FOICE   — O corte consciente. A coragem de ferir o que ainda insiste em te prender.\n"
    "3 - O JARDIM  — O chão coletivo. Onde tua dor encontra eco, e tua voz se multiplica.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);

    int escolha = receberResposta(3);

    switch (escolha) {
        case 1:
            pontoNeutro++;
            decisao1_1_2_1();
            break;
        case 2:
            pontoRuim++;
            decisao1_1_2_2();
            break;
        case 3:
            pontoBom++;
            decisao1_1_2_3();
            break;
    }
}

// =======================================================================================================================
// CAMINHO 1_1_2_1 — O LIVRO
// =======================================================================================================================
// Justificativa de pontos:
// O Livro simboliza a memória e o testemunho. Ao escolhê-lo, Irena aceita olhar para si mesma
// e para as vozes que a antecedem, compreendendo que cada ruína pede registro e significado.
// É um caminho de sabedoria e reconstrução, mas não há triunfo, apenas consciência.
// Conta como ponto NEUTRO, pois traz entendimento e estabilidade, sem cair na escuridão,
// mas também sem a euforia da renovação plena.
// =======================================================================================================================

void decisao1_1_2_1(void) {
    const char *historia1 =
    "\nO Livro repousa diante de ti, mas não é objeto, é fenda. Sua capa pulsa como se tivesse "
    "um coração próprio, e ao tocá-la, a pele reconhece o frio de um rio subterrâneo. "
    "O pó dourado que pairava no ar agora se curva para ele, sugado para as páginas em branco, "
    "como se a matéria do esquecimento tivesse sede de escrita.\n\n"

    "Soraya não interfere; observa com a paciência de quem sabe que cada gesto já foi ensaiado "
    "em eras que não se contam. Liora, ao contrário, dá um passo, a respiração trêmula, e murmura: "
    "'Toda ruína pede testemunho. E tu aceitaste escrevê-lo.'\n\n";

    const char *historia2 =
    "Ao abrir o Livro, as páginas não contêm letras, mas espelhos quebrados. Cada fragmento "
    "te devolve uma versão tua: o que calou, o que gritou, o que partiu. "
    "Nenhuma imagem é inteira, mas todas se reconhecem como pedaços de ti mesmo. "
    "E quanto mais olhas, menos medo tens — como se a própria fragmentação fosse "
    "um alfabeto capaz de sustentar teu corpo.\n\n"

    "O ar pesa. As fendas da Torre crescem, deixando entrar não apenas luz, mas memórias "
    "que não são tuas: vozes de ancestrais, de estranhos, de crianças ainda não nascidas. "
    "Todas pedem lugar no Livro, e o branco das páginas se torna território sagrado para recebê-las.\n\n";

    const char *historia3 =
    "A escrita começa sozinha. Não é tua mão que move a pena invisível, mas o próprio pulso do mundo. "
    "Frases se constroem em silêncio, como rios abrindo leitos no escuro: narram a queda da Torre, "
    "a coragem diante da ruína, e o instante em que escolheste olhar para dentro. "
    "Cada linha não apenas recorda — recria. "
    "E ao ler o que acaba de ser inscrito, descobres que tua vida não foi perda, "
    "mas preparação.\n\n"

    "Liora toca teu ombro. Seus olhos agora não são dela, mas multidão. 'O Livro não te deu respostas', "
    "ela sussurra. 'Ele te devolveu a pergunta correta.'\n\n";

    const char *historia4 =
    "As cartas dissolvem-se, retornando ao pó, e a Torre inteira começa a se desmanchar. "
    "Mas não é desabamento, é liberação. As pedras voltam a ser terra, as vigas retornam ao bosque, "
    "e até o ar parece soltar o peso que carregava. "
    "No centro desse colapso, permaneces de pé, sustentado pelo Livro que, agora fechado, "
    "se dissolve em teu peito como uma cicatriz luminosa.\n\n"

    "Soraya estende a mão, mas não para guiar: para saudar. 'A ruína cumpriu seu papel. "
    "O resto... já é caminho teu.'\n\n";

    const char *historia5 =
    "Quando enfim o silêncio retorna, ele não é ventre nem vazio: é horizonte. "
    "As últimas pedras da Torre se desfazem em poeira dourada que o vento leva para longe, "
    "como sementes lançadas em terra nova. "
    "E compreendes que a queda não foi fim, mas tradução: "
    "a Torre precisou ruir para que tu mesmo pudesses ser arquitetura viva.\n\n"

    "Não há aplauso, não há triunfo, apenas a certeza serena de que escolheste testemunhar, "
    "e por isso teu nome agora é escrito não em pedra, mas no fluxo eterno da memória.\n\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
}

// =======================================================================================================================
// CAMINHO 1_1_2_2 — A FOICE
// =======================================================================================================================
// Justificativa de pontos:
// A Foice representa o corte necessário, a decisão de abandonar vínculos, memórias e pesos
// que ainda aprisionam. É um gesto de coragem, mas também de dor: o vazio que resta pode ser
// insuportável e não há promessa de florescimento imediato.
// É um caminho de risco e perda, onde o renascimento ainda é incerto.
// Por isso, conta como ponto RUIM, pois apesar da libertação, a aridez domina o resultado.
// =======================================================================================================================

void decisao1_1_2_2(void) {
    const char *historia1 =
    "\nA Foice surge diante de ti, não forjada em ferro, mas em ausência. "
    "Seu fio brilha como se fosse feito da própria linha que divide o ser do não-ser. "
    "Ao segurá-la, não sentes peso, mas vertigem, como se o mundo inteiro pudesse ser fatiado "
    "por um só movimento de tua mão.\n\n"

    "Soraya fecha os olhos, e sua voz desce grave: 'Nada floresce sem corte. "
    "Tudo que respira, respira porque outra coisa cedeu lugar.'\n\n"

    "Liora te encara, inquieta, como quem observa alguém prestes a arrancar um espinho do próprio peito.\n\n";

    const char *historia2 =
    "Ergues a Foice, e o ar ao redor se parte em duas metades: o que foi, e o que nunca mais poderá ser. "
    "A Torre estala mais fundo, como se tivesse aguardado apenas este gesto para finalmente despencar. "
    "Cada pedra que cai leva consigo um nome, uma memória, uma crença que insistia em te prender.\n\n"

    "O corte não é só externo. Dentro de ti, antigas vozes se calam, vínculos se soltam, "
    "e o espaço aberto pela perda é quase insuportável. "
    "Mas é esse mesmo espaço que agora respira.\n\n";

    const char *historia3 =
    "As paredes da Torre começam a se dissolver em cinzas. "
    "Lá onde antes havia muralhas, abrem-se campos vastos, mas desolados. "
    "Não há cântico, não há testemunho — apenas o som seco do que se despede sem retorno.\n\n"

    "Liora se aproxima, lágrimas sem cor descendo pelo rosto. "
    "'Cortar dói porque a raiz acredita que ainda pode viver', ela sussurra. "
    "'Mas às vezes é no silêncio do vazio que o corpo aprende outro ritmo.'\n\n";

    const char *historia4 =
    "A Foice vibra em tua mão uma última vez, antes de se partir em fragmentos de sombra, "
    "absorvidos pelo chão. Restas apenas tu, de pé, cercado pelas ruínas transformadas em pó. "
    "Soraya abre os olhos e te saúda com reverência: 'Tu aceitaste ser o carrasco do que te acorrentava. "
    "E ao fazê-lo, deste passagem ao que virá.'\n\n"

    "Mas a passagem não é reconfortante — é crua. Nenhum mapa se revela, nenhuma promessa te consola. "
    "O corte apenas abre, sem dizer o que nascerá dali.\n\n";

    const char *historia5 =
    "No horizonte, nada floresce ainda. O vento sopra seco, levando embora o pó das ruínas "
    "como se fosse sal em campo estéril. Mas, em meio ao vazio, teu peito pulsa leve: "
    "não mais arrastado pelo peso de correntes invisíveis. "
    "O corte não trouxe paz — trouxe espaço. E o espaço, cedo ou tarde, sempre será ocupado.\n\n"

    "Caminhas adiante, sem certezas. Apenas com a lembrança da lâmina que ousaste erguer. "
    "E isso, mais que vitória, é renascimento.\n\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
}

// =======================================================================================================================
// CAMINHO 1_1_2_3 — O JARDIM
// =======================================================================================================================
// Justificativa de pontos:
// O Jardim simboliza a regeneração coletiva. A dor de Irena não se resolve sozinha, mas se
// multiplica em encontro, canto e partilha. Onde havia ruína, surge vida; onde havia solidão,
// brota comunidade. O peso da queda se transforma em adubo para novos horizontes.
// É um caminho de esperança e expansão, onde a cura se enraíza na coletividade.
// Por isso, conta como ponto BOM, pois traduz a ruína em florescimento e pertencimento.
// =======================================================================================================================

void decisao1_1_2_3(void) {
    const char *historia1 =
    "\nO Jardim se abre diante de ti, mas não como um objeto — é um sopro que se espalha. "
    "Das cartas brotam raízes luminosas que correm pelo chão da Torre em ruína, "
    "fendendo as pedras como se fossem apenas terra fértil adormecida. "
    "O pó dourado se transforma em sementes que caem, silenciosas, "
    "mas cada uma delas pulsa como estrela caída.\n\n"

    "Soraya sorri pela primeira vez. 'Nem toda ruína precisa ser silêncio. "
    "Algumas aprendem a cantar na boca da terra.'\n\n";

    const char *historia2 =
    "Lentamente, as paredes partidas da Torre são cobertas de verde. "
    "Musgos, flores e vinhas surgem como se tivessem esperado séculos para germinar. "
    "Do chão rachado brotam fontes de água clara, e o ar, antes pesado, "
    "se enche do perfume fresco de terra molhada. "
    "Onde havia pedras, agora há passagens; onde havia sombra, agora brilham cores.\n\n"

    "Liora ajoelha-se diante do primeiro broto que rompe o solo e murmura: "
    "'O comum é o verdadeiro milagre. Nada floresce sozinho.'\n\n";

    const char *historia3 =
    "E não floresces só. Das raízes que se espalham surgem figuras: "
    "homens, mulheres, crianças, ancestrais e desconhecidos. "
    "Todos caminham para dentro do Jardim como se sempre tivessem estado ali, "
    "mas aguardassem tua escolha para atravessar o limiar. "
    "Cada rosto traz cicatrizes, mas também sorrisos. "
    "E ao se reunirem, o espaço se enche de vozes, "
    "não em tumulto, mas em harmonia.\n\n"

    "Soraya ergue a mão e declara: 'O Jardim não te pertence. "
    "Mas se tu o cultivares, ele sempre te acolherá.'\n\n";

    const char *historia4 =
    "As cartas se desfazem em pétalas, e o vento as leva por entre as árvores recém-nascidas. "
    "Não há mais Torre — há clareira. E nela, um círculo se forma em tua volta, "
    "feito de todos que chegaram. "
    "Cantam sem língua, mas compreendes cada verso: é cântico de cura, "
    "de lembrança, de futuro. "
    "Teu peito se abre, e a dor antiga encontra eco nos outros corpos, "
    "até que já não é peso, mas semente compartilhada.\n\n"

    "Liora segura tua mão. Seus olhos brilham suaves, "
    "como de quem aprendeu que toda lágrima pode ser rega.\n\n";

    const char *historia5 =
    "O Jardim cresce além da clareira, ocupando horizontes. "
    "Flores nascem nas pedras, rios se bifurcam em canções, "
    "e até o céu parece se inclinar para participar da colheita. "
    "A ruína da Torre não desapareceu — mas se tornou adubo. "
    "Ali onde o peso antigo desabou, a vida encontrou brecha.\n\n"

    "E compreendes, enfim, que a queda não foi fim, "
    "mas convite: teu destino não era resistir sozinho, "
    "mas aprender a florescer junto. "
    "E assim, entre vozes, raízes e luz, teu nome não se perde — "
    "ele se multiplica.\n\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
}

void decisao1_1_3(void) {
    const char *historia =
    "\nO chão da Torre range como se guardasse fendas antigas, "
    "mas não cede. O pó dourado que antes caía agora se recolhe, "
    "como maré que retorna às profundezas. "
    "O silêncio não é queda nem ventre — é espera.\n\n"

    "Soraya fixa os olhos em ti, e há um peso no olhar, "
    "não de julgamento, mas de convocação. "
    "'A ruína não é única. Ela sempre guarda outra face, "
    "oculta até que tenhas coragem de perguntar.'\n\n"

    "Liora aproxima-se e pousa a mão sobre a pedra rachada. "
    "Do toque, nasce um som baixo, como um coração que pulsa nas entranhas da Torre. "
    "Dali se erguem não cartas, mas fragmentos de espelhos suspensos, "
    "cada um tremendo como se refletisse não apenas imagens, mas escolhas ainda não feitas.\n\n";

    const char *historia1 =
    "As superfícies partidas se reorganizam, girando diante de ti "
    "até assumirem forma clara: três símbolos distintos, gravados em luz e sombra.\n\n"

    "Soraya fala, e sua voz é lâmina e colo ao mesmo tempo:\n"
    "'Cada espelho é mais que reflexo. É modo de ver, "
    "e, portanto, modo de existir. Escolhe não o que desejas enxergar, "
    "mas o que estás disposto a carregar quando o reflexo se quebrar.'\n\n"

    "Os três fragmentos brilham, oferecendo-se:\n\n"
    "1 - A SERPENTE — O ciclo que devora e renova. Sabedoria do veneno que cura e mata.\n"
    "2 - A PONTE    — O risco do atravessamento. Caminhar sobre o frágil para alcançar o invisível.\n"
    "3 - O RELÓGIO  — O compasso do inevitável. O tempo como prisão e como libertação.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);

    int escolha = receberResposta(3);

    switch (escolha) {
        case 1:
            pontoRuim++;
            decisao1_1_3_1();
            break;
        case 2:
            pontoBom++;
            decisao1_1_3_2();
            break;
        case 3:
            pontoNeutro++;
            decisao1_1_3_3();
            break;
    }
}

// =======================================================================================================================
// CAMINHO 1_1_3_1 — A SERPENTE
// =======================================================================================================================
// Justificativa de pontos:
// A Serpente simboliza o ciclo eterno de morte e renascimento, mas também o risco
// de ficar preso em sua própria espiral. O veneno pode curar, mas também matar.
// É um caminho de dor e de poder oculto, onde a transformação exige sacrifício
// profundo e nem sempre libertador.
// Conta como ponto RUIM, pois a lição é árdua e marcada pelo risco de perdição.
// =======================================================================================================================

void decisao1_1_3_1(void) {
    const char *historia1 =
    "\nA Serpente se ergue do espelho rachado, não em carne, mas em símbolo. "
    "Seu corpo é feito de linhas que se devoram, formando círculos sem começo ou fim. "
    "Ao abrir os olhos para ti, não há ódio, apenas reconhecimento — "
    "como se já tivesse te visto nascer e morrer inúmeras vezes.\n\n"

    "Soraya sussurra, quase em reverência: 'O ciclo nunca erra. "
    "Mas ele também nunca perdoa.'\n\n"

    "Liora dá um passo atrás, como quem teme, mas não foge. "
    "'A serpente traz a cura no mesmo dente que pode matar. "
    "Tudo depende do quanto suportas engolir de ti mesmo.'\n\n";

    const char *historia2 =
    "O ar ao redor da Torre torna-se viscoso, impregnado por um odor de terra molhada e ferro. "
    "A serpente desliza pelo chão rachado, e cada movimento seu desenha símbolos que queimam a pedra, "
    "como se o próprio chão estivesse sendo escrito por ela.\n\n"

    "De repente, sem aviso, ela se lança contra ti. "
    "Não há tempo de recuar — suas presas atravessam tua pele e despejam fogo líquido em tuas veias. "
    "A dor não é dor comum: é como se cada célula fosse forçada a lembrar de todas as vidas que já viveu. "
    "Morrer, nascer, perder, amar, trair, salvar — tudo pulsa ao mesmo tempo dentro de ti.\n\n"

    "O corpo inteiro treme, dividido entre rejeitar e aceitar. "
    "E nesse limite, percebes que o veneno não veio para destruir, mas para expor o que ainda negavas.\n\n";

    const char *historia3 =
    "As paredes da Torre se dissolvem em espirais. "
    "Não há mais chão nem teto, apenas um labirinto circular onde cada curva devolve a ti uma versão distorcida de si mesmo. "
    "Em uma curva, vês tua infância abandonada; em outra, teu corpo envelhecido; em outra, a face que jamais serás. "
    "A serpente te guia, mas não fala — apenas desliza adiante, como se cada volta do caminho fosse um lembrete: "
    "nada escapa do ciclo.\n\n"

    "Soraya surge na beira de uma curva e fala: 'O que hoje é veneno, amanhã é remédio. "
    "Mas só se aceitares o intervalo entre os dois.'\n\n"

    "Liora aparece na curva seguinte, lágrimas nos olhos: 'E se não aceitares, viverás mil vezes o mesmo erro, "
    "chamando de destino aquilo que é apenas repetição.'\n\n";

    const char *historia4 =
    "Chegas ao centro do labirinto, e lá a serpente repousa sobre si mesma, formando o círculo perfeito. "
    "Compreendes, num lampejo, que ela não é inimiga nem aliada: é espelho. "
    "Seu veneno nada mais fez do que acelerar a revelação — "
    "o ciclo que sempre esteve dentro de ti, exigindo ruptura ou submissão.\n\n"

    "Ela abre a boca uma última vez, oferecendo o próprio rabo. "
    "É convite e ameaça. Se aceitares, a roda se fecha: "
    "morrerás para renascer, mas jamais escaparás do giro. "
    "Se recusares, carregarás para sempre o gosto do veneno, "
    "com a lembrança do ciclo gravada em teu sangue.\n\n"

    "A escolha não é dita, apenas sentida — e tua respiração, "
    "já marcada pela serpente, sela o pacto.\n\n";

    const char *historia5 =
    "Quando o labirinto enfim se desfaz, a Torre não está mais ali. "
    "Há apenas um campo vasto, árido, onde a poeira dança como miragem. "
    "Teu corpo ainda carrega o calor do veneno, e sabes que nunca mais serás o mesmo. "
    "O ciclo está inscrito em ti, tatuado em tua carne como sombra luminosa.\n\n"

    "Soraya te observa em silêncio, como quem reconhece alguém que atravessou um limite sem retorno. "
    "Liora, com olhar pesaroso, apenas diz: 'A serpente não te libertou. "
    "Ela apenas te mostrou que a prisão também pode ser infinita.'\n\n"

    "E assim, carregando em si o veneno que é também fogo, "
    "segues adiante. Cada passo ecoa como lembrança de que tua vida "
    "não será reta, mas curva. "
    "E na curva, sempre, a serpente te aguarda.\n\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
}



// =======================================================================================================================
// CAMINHO 1_1_3_2 — A PONTE
// =======================================================================================================================
// Justificativa de pontos:
// A Ponte representa o risco necessário do atravessamento. Não há certeza de
// firmeza sob os pés, mas há horizonte além da travessia. É um gesto de coragem
// e de esperança: abrir-se ao desconhecido para encontrar novos caminhos.
// Conta como ponto BOM, pois traduz a queda em movimento e expansão.
// =======================================================================================================================

void decisao1_1_3_2(void) {
    const char *historia1 =
    "\nA Ponte ergue-se do espelho como fio de luz suspenso no vazio. "
    "Não é feita de pedra nem de madeira, mas de memória e risco. "
    "Oscila como se respirasse, estendendo-se de um abismo a outro, "
    "um caminho estreito sobre o nada.\n\n"

    "Soraya olha para ti com firmeza: 'Toda travessia exige fé maior do que o próprio chão.'\n\n"
    "Liora se aproxima e toca teu braço. 'Nenhum passo é seguro. "
    "Mas também não há horizonte sem atravessamento.'\n\n";

    const char *historia2 =
    "Ao pôr o pé sobre a Ponte, o corpo estremece. "
    "A estrutura não geme nem ruge: ela vibra como corda de instrumento, "
    "respondendo ao peso de tua decisão. "
    "Cada passo ecoa não no ar, mas dentro de ti, "
    "como se a travessia fosse um exame íntimo de coragem.\n\n"

    "O vento sopra forte, trazendo memórias que tentam te puxar de volta: "
    "rostos que já perdeste, erros que preferias esquecer, "
    "palavras que ainda doem. "
    "Mas a Ponte só avança quando teu olhar se mantém à frente. "
    "Olhar para trás é sentir o caminho desaparecer sob teus pés.\n\n";

    const char *historia3 =
    "A meio caminho, o vazio fala. Não em voz, mas em vertigem. "
    "Ele te mostra que a queda não é ameaça distante, "
    "ela está em cada osso teu, em cada fraqueza que carrega. "
    "É tentador parar, congelar, desistir. "
    "Mas então a Ponte começa a se desmanchar atrás de ti, "
    "como se dissesse: 'O único chão é o que ainda não pisaste.'\n\n"

    "Soraya surge adiante, firme, e declara: 'A coragem não é ausência de medo. "
    "É a decisão de não deixá-lo ser teu dono.'\n\n"

    "Liora aparece ao teu lado, sua voz suave contra o vento: "
    "'Toda travessia é solidão. Mas lembra: até a solidão também atravessa.'\n\n";

    const char *historia4 =
    "O último trecho da Ponte não é feito de luz nem de pedra, "
    "mas de silêncio. "
    "Ao pisá-lo, percebes que não há mais apoio sob teus pés. "
    "Caminhas no ar, suspenso apenas pela decisão de continuar. "
    "O coração bate descompassado, mas cada batida é um passo. "
    "E quando dás o derradeiro avanço, a Ponte inteira se dissolve, "
    "e ainda assim, não cais.\n\n"

    "Do outro lado, o abismo não existe mais. "
    "Há apenas uma planície vasta, iluminada por um céu que nunca viste. "
    "A Ponte cumpriu sua função: "
    "não te trouxe a um lugar seguro, "
    "mas te ensinou que a travessia em si é o verdadeiro chão.\n\n";

    const char *historia5 =
    "Soraya se curva levemente, como quem reconhece a bravura sem aplaudir. "
    "Liora segura tua mão e sorri, não de alívio, mas de confirmação: "
    "'Atravessar é sempre arriscar. "
    "Mas quem arrisca descobre que o impossível também tem margens.'\n\n"

    "Atrás de ti, a Ponte não existe mais. "
    "À frente, o horizonte se abre, vasto, intocado. "
    "E no peito, a certeza de que cada passo, mesmo vacilante, "
    "foi escolha de vida.\n\n"

    "A Torre ficou para trás. "
    "O vazio se desfez. "
    "E o que resta agora não é ruína nem prisão, "
    "mas caminho aberto, feito do risco que aceitaste viver.\n\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
}

// =======================================================================================================================
// CAMINHO 1_1_3_3 — O RELÓGIO
// =======================================================================================================================
// Justificativa de pontos:
// O Relógio simboliza o tempo e sua inevitabilidade. Nem prisão absoluta,
// nem libertação plena: apenas aceitação de que tudo possui ritmo e fim.
// É um caminho de serenidade e resignação, onde a sabedoria surge do limite,
// sem triunfo, mas sem queda na escuridão.
// Conta como ponto NEUTRO, pois traz equilíbrio e entendimento do inevitável.
// =======================================================================================================================

void decisao1_1_3_3(void) {
    const char *historia1 =
    "\nO Relogio emerge do espelho como esfera suspensa, "
    "feito de engrenagens que giram em silencio. "
    "Nao ha ponteiros, apenas um pulso constante, "
    "como coracao mecanico que rege tudo ao redor. "
    "Cada batida reverbera no chao, nas paredes, "
    "e no proprio sangue que corre em tuas veias.\n\n"

    "Soraya fala em tom baixo, quase reverente: "
    "'Nao ha fuga do compasso. O tempo nao se dobra. "
    "Mas aprende-se a caminhar em sua musica.'\n\n"

    "Liora, com olhos sombrios, acrescenta: "
    "'Ele nao espera, nem perdoa. "
    "O tempo e faca e e balsamo, e tu seras marcado por ambos.'\n\n";

    const char *historia2 =
    "Quando tocas a esfera, o Relogio se abre como flor de ferro. "
    "As engrenagens se expandem pelo ar, rodando em torno de ti. "
    "De repente, a Torre inteira se torna mecanismo: "
    "cada pedra, cada fenda, cada suspiro e dente de roda "
    "que gira dentro da mesma maquina universal.\n\n"

    "E entao percebes: tu proprio es engrenagem. "
    "Teu corpo gira, teus ossos se ajustam ao compasso, "
    "tua memoria se move como ponteiro sobre cicatrizes.\n\n"

    "Nao ha dor, mas ha vertigem. "
    "Como se cada escolha ja tivesse sido feita, "
    "e ainda assim precisasse ser vivida.\n\n";

    const char *historia3 =
    "O Relogio revela passados e futuros como tic e tac. "
    "Num estalo, revives a crianca que foste, "
    "e no seguinte, vislumbra o idoso que ainda seras. "
    "Cada rosto, cada instante, desdobra-se diante de ti. "
    "O tempo nao e linha — e mar.\n\n"

    "Soraya sussurra: 'Entendes agora? "
    "Nao ha vitoria contra o tempo. "
    "Ha apenas o ato de viver dentro dele.'\n\n"

    "Liora segura tua mao e murmura: "
    "'O tempo nao e carcereiro. "
    "Ele e trilha. E tu es tanto o que caminha quanto o que sera caminhao.'\n\n";

    const char *historia4 =
    "O Relogio acelera. As engrenagens giram mais rapido, "
    "ate que o ar se torna correnteza. "
    "Por um momento, acreditas que seras esmagado — "
    "mas entao o compasso se estabiliza, "
    "e percebes que nao foste destruido, "
    "apenas sincronizado.\n\n"

    "O mecanismo se recolhe, reduzindo-se novamente a esfera suspensa. "
    "Ela pulsa uma ultima vez, "
    "e depois se dissolve em poeira dourada que repousa sobre tua pele, "
    "como se tivesses herdado seu ritmo.\n\n";

    const char *historia5 =
    "A Torre permanece, mas sua ruina ja nao pesa. "
    "Agora vês nela apenas mais um ciclo, "
    "parte da mesma dança em que tu tambem estas inserido. "
    "Nem começo, nem fim — apenas passagem.\n\n"

    "Soraya sorri com ternura rara: "
    "'O tempo nao te pertence, mas tu pertences a ele.'\n\n"

    "Liora fecha os olhos, como quem aceita uma verdade inevitavel: "
    "'E dentro desse compasso, mesmo o menor dos gestos ecoa para sempre.'\n\n"

    "O Relogio se foi, mas a batida permanece em teu peito. "
    "Nao como peso, mas como compasso. "
    "E compreendes, enfim, que nao ha vitoria sobre o tempo — "
    "ha o dom de viver em sua cadencia.\n\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
}


// =======================================================================================================================
// CAMINHO 1_2 — A ESTRELA
// =======================================================================================================================

void decisao1_2(void) {
    const char *historia =
    "\nIrena sentiu uma calma incomum invadir seu peito. Ela ergueu a mão com determinação suave.\n"
    "'Quero a Estrela', disse, e sua voz ecoou como um sino distante.\n\n"

    "As lamparinas do salão diminuíram, e um único feixe de luz prateada irrompeu do teto, "
    "iluminando apenas a mesa onde as cartas repousavam. No centro, uma carta começou a brilhar "
    "com intensidade crescente - era A Estrela, mostrando uma figura derramando água de dois jarros "
    "enquanto uma estrela de oito pontas brilhava acima.\n";

    const char *historia1 =
    "\nSoraya suspirou, quase com alívio:\n"
    "'A esperança que guia sem cegar! A Estrela não te arrastará, pequena coruja - ela apenas iluminará "
    "os caminhos que já existem dentro de ti.'\n\n"

    "Liora inclinou-se para frente, seus olhos refletindo a luz prateada:\n"
    "'Mas cuidado: até a luz mais pura pode atrair sombras famintas. A Estrela mostrará o caminho, "
    "mas não afastará os perigos que o cercam.'\n\n"

    "De repente, a carta da Estrela projetou um feixe de luz que se dividiu em três caminhos luminosos "
    "no ar, cada um mostrando visões diferentes:\n\n"
    "De repente, a carta da Estrela projetou um feixe de luz que se dividiu em três caminhos luminosos "
    "no ar, cada um mostrando visões diferentes:\n\n"
    "1 - O Navio (a travessia, o desconhecido além do horizonte)\n"
    "2 - A Serpente (a tentação, o veneno e o aprendizado pelo perigo)\n"
    "3 - A Montanha (o desafio monumental, o obstáculo que revela força)\n";


    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);

    int escolha = receberResposta(3);

    switch (escolha) {
        case 1:
            pontoRuim++;
            decisao1_2_1();
            break;
        case 2:
            pontoNeutro++;
            decisao1_2_2();
            break;
        case 3:
            pontoBom++;
            decisao1_2_3();
            break;
    }
}
// ======================================================================
// CAMINHO 1_2_1 — O NAVIO
// ======================================================================
// Justificativa de pontos:
// O Navio simboliza a travessia do inconsciente: o oceano é reflexo das emoções
// mais profundas de Irena, e o leviatã representa seus medos ancestrais e
// pessoais. A tempestade é tanto cenário quanto metáfora — exige coragem,
// decisão e confronto com o que foi sempre evitado.

void decisao1_2_1(void) {
    const char *historia =
    "\nDe repente, uma luz prateada tão intensa quanto um relâmpago cegou Irena. Quando sua visão se recuperou, "
    "o salão havia desaparecido. Ela estava no convés de um navio fantasma, balançando violentamente em um mar furioso.\n\n"
    
    "O cheiro de sal e tempestade encheu suas narinas. O vento uivava como uma alma penada, arrancando-lhe o fôlego. "
    "Irena agarrou-se à amurada de madeira gastra, sentindo cada tábua tremer sob seus pés. Mas percebeu que não era "
    "apenas o mar que a testava, cada onda que quebrava contra o casco trazia visões de seu passado.\n\n"
    
    "Nas cristas espumantes, ela via rostos: colegas de infância rindo de sua magia, familiares com expressões de desaprovação, "
    "e os momentos de solidão que tentavam afogá-la desde criança.";

    const char *historia1 =
    "As águas eram feitas de memórias líquidas, "
    "e cada impacto contra o navio era um golpe em sua alma.\n\n"
    
    "Soraya apareceu no mastro principal, seu véu dançando no furacão:\n"
    "'O mar é teu espelho vivo, coruja! Vês? Ele mostra a fúria que sempre carregaste escondida, "
    "mas também revela a coragem inquebrável que te mantém de pé mesmo agora!'\n\n"
    
    "Liora materializou-se ao leme, lutando contra as ondas colossais:\n"
    "'Não navegues apenas para fugir, Irena. Cada onda que enfrentas é uma escolha. "
    "Decide o que levarás contigo na jornada e o que deixarás afundar nas profundezas!'";

    const char *historia2 =
    "\nDe repente, o navio foi atingido por um relâmpago.\n"
    "As velas pegaram fogo azul, iluminando o céu escuro.\n"
    "Do mar ergueu-se uma figura colossal: um leviatã feito de água e sombra, olhos como faróis de fúria.\n"
    "Ele rugiu, e as ondas se ergueram como muralhas.\n\n"


    "Irena sentiu o coração disparar. Não era apenas um monstro: era a materialização de seus medos.\n"
    "O medo de fracassar, o medo de ser rejeitada, o medo de nunca pertencer a lugar algum.\n"
    "O leviatã avançou, e o navio inteiro tremeu.\n";


    const char *historia3 =
    "\nSoraya apontou para a criatura e bradou:\n"
    "'Ele não é teu inimigo. Ele é tua travessia! Escolhe: lutar contra, fugir, ou encarar!'\n\n"


    "Liora, com olhos de ferro, ergueu a mão em direção a Irena:\n"
    "'A resposta não está no mar, mas em ti. O que farás diante da fera que é feita da tua própria sombra?'\n\n";

    const char *historia4 =
    "\nO navio oscilava com violência, e a cada escolha adiada, o mar parecia mais próximo de engoli-la.\n"
    "As cordas se partiam, os mastros tremiam, e a tripulação espectral gritava em línguas esquecidas.\n"
    "Irena sentiu que não havia mais tempo: ou enfrentava, ou seria apenas mais um nome tragado pelas águas.\n\n"


    "Soraya inclinou-se para a frente, olhos brilhando de expectativa:\n"
    "'Toda coruja precisa decidir se é ave de noite... ou fênix que atravessa a tempestade.'\n\n"


    "Liora, firme, declarou:\n"
    "'Não há volta, Irena. A travessia já começou. O que escolheres aqui será tatuado em tua alma.'\n";


    const char *historia5 =
    "\nO leviatã ergueu-se uma última vez, bloqueando todo o horizonte.\n"
    "Os trovões calaram, e só restava o som do coração dela batendo como tambor de guerra.\n"
    "A decisão estava diante dela, brilhando nas cartas como destino vivo.\n"
    "Era hora de escolher qual mar enfrentaria: o da fúria, o da espera, ou o da luz.\n"

    "Três cartas surgiram diante de Irena, flutuando sobre a água incandescente:\n\n"
    "1 - O Tridente (a arma, a luta direta contra o leviatã).\n"
    "2 - A Âncora (ficar firme, suportar a tempestade sem fugir).\n"
    "3 - O Farol (guiar-se pela luz, não pelo medo, e encontrar outra rota).\n";


    printf("%s\n", historia);
    continuar();
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
            pontoRuim++;
            decisao1_2_1_1();
        break;
        case 2:
            pontoNeutro++;
            decisao1_2_1_2();
        break;
        case 3:
            pontoBom++;
            decisao1_2_1_3();
        break;
    }   
}

// ======================================================================
// CAMINHO 1_2_1_1 — O TRIDENTE
// ======================================================================
// Justificativa de pontos:
// O Tridente representa o confronto direto com os próprios medos.
// Irena ataca o leviatã com fúria, transformando dor em arma.
// Porém, cada golpe a fere também, pois luta contra aquilo que faz parte dela.
// Esse caminho é de ação intensa, mas também de autodesgaste.
// Conta como ponto RUIM.
// ======================================================================

void decisao1_2_1_1(void) {
    const char *historia1 =
    "\nIrena agarrou o Tridente que surgiu em suas mãos.\n"
    "A arma brilhava como se tivesse sido forjada do próprio trovão.\n"
    "Ela ergueu-o contra o céu e saltou em direção ao leviatã,\n"
    "gritando como quem libera séculos de dor sufocada.\n\n"

    "As ondas se partiram, e o choque foi devastador: luz contra sombra,\n"
    "coragem contra medo. O mar inteiro rugiu com o impacto.\n";

    const char *historia2 =
    "\nO Tridente perfurou as escamas da fera,\n"
    "mas a cada golpe, Irena sentia a lâmina atravessar também suas feridas antigas.\n"
    "O sangue do leviatã era o mesmo que escorria em sua alma.\n\n"

    "Soraya riu alto, vibrando com a fúria:\n"
    "'Lutar é viver, mesmo quando dói!'\n\n"

    "Mas Liora murmurou sombria:\n"
    "'Cuidado, coruja... há batalhas que vencem por fora e destroem por dentro.'\n";

    const char *historia3 =
    "\nO leviatã respondeu com violência.\n"
    "Golpeou o navio com sua cauda colossal, abrindo fendas no casco.\n"
    "A água invadiu o convés, e Irena quase foi arrastada para o fundo.\n\n"

    "Ela se ergueu novamente, ofegante, o Tridente queimando em suas mãos.\n"
    "Cada batida de seu coração parecia ecoar como um trovão.\n\n"

    "Soraya gritou:\n"
    "'Mostra a ele que não és presa, mas caçadora!'\n";

    const char *historia4 =
    "\nIrena lançou-se sobre a criatura mais uma vez.\n"
    "O Tridente perfurou-lhe o olho, e o leviatã uivou de dor,\n"
    "erguendo colunas de água como muralhas.\n"
    "O céu inteiro se iluminou em clarões azuis.\n\n"

    "Mas Irena já não sabia se ainda atacava a fera ou a si mesma.\n"
    "Cada golpe a deixava mais fraca, como se drenasse a própria essência.\n";

    const char *historia5 =
    "\nQuando, enfim, o leviatã se dissolveu em espuma e silêncio,\n"
    "Irena permaneceu de pé no convés partido.\n"
    "O Tridente ainda brilhava, mas pesava como um fardo impossível de carregar.\n\n"

    "Ela não havia conquistado vitória limpa, apenas sobrevivido.\n"
    "E no fundo, sabia que o monstro morto continuaria vivo dentro dela.\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
}

// ======================================================================
// CAMINHO 1_2_1_2 — A ÂNCORA
// ======================================================================
// Justificativa de pontos:
// A Âncora representa a decisão de resistir, de se manter firme em meio à
// tempestade e ao medo. Irena escolhe não atacar nem fugir, mas suportar.
// Esse caminho revela resiliência e coragem silenciosa, mas também a limitação
// de não transformar nem o mar, nem a fera. Conta como ponto NEUTRO.
// ======================================================================

void decisao1_2_1_2(void) {
    const char *historia1 =
    "\nIrena fechou os olhos e, ao abri-los, encontrou diante de si uma âncora etérea.\n"
    "O objeto brilhava com a mesma luz prateada da Estrela, pesada e serena.\n"
    "Sem hesitar, ela cravou a âncora no convés.\n\n"

    "O navio inteiro estremeceu e, de repente, ficou firme como uma montanha no meio do mar furioso.\n";

    const char *historia2 =
    "\nO leviatã rugiu, enfurecido, golpeando o casco com sua cauda colossal.\n"
    "A cada impacto, o navio tremia, mas não cedia.\n"
    "As ondas batiam com violência, tentando arrancar a âncora, mas a corrente parecia infinita.\n\n"

    "Soraya observava com um sorriso enviesado:\n"
    "'Resistir também é caminho, coruja... mas lembra: não se vive só de suportar.'\n";

    const char *historia3 =
    "\nLiora, porém, sorriu com aprovação, seus olhos firmes como rocha:\n"
    "'Às vezes, firmeza é mais poderosa que qualquer lâmina. Segurar-se é recusar-se a afundar.'\n\n"

    "Irena respirava fundo a cada investida da criatura.\n"
    "Seu corpo doía, seus braços tremiam, mas dentro dela nascia uma força nova:\n"
    "a certeza de que poderia aguentar.\n";

    const char *historia4 =
    "\nO leviatã mergulhou e emergiu em explosões de espuma, tentando arrancá-la do convés.\n"
    "Mas Irena permaneceu. Nem gritou, nem recuou.\n"
    "Era como a própria âncora — silenciosa, imóvel, mas inquebrantável.\n\n"

    "A tripulação espectral calou-se, observando a cena com reverência.\n";

    const char *historia5 =
    "\nQuando a tempestade começou a recuar, o leviatã afundou lentamente, até desaparecer nas profundezas.\n"
    "O mar voltou a ser um espelho calmo, e a âncora se desfez em luz.\n\n"

    "Irena caiu de joelhos, exausta, mas não derrotada.\n"
    "Descobriu que, às vezes, resistir sem se quebrar é a maior forma de vitória.\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
}

// ======================================================================
// CAMINHO 1_2_1_3 — O FAROL
// ======================================================================
// Justificativa de pontos:
// O Farol simboliza a sabedoria e a coragem de guiar-se pela luz interior,
// em vez de se deixar dominar pelo medo. Irena não destrói o leviatã e nem
// se prende à tempestade: ela encontra outra rota. Esse caminho representa
// clareza, autoconhecimento e transcendência. Conta como ponto BOM.
// ======================================================================

void decisao1_2_1_3(void) {
    const char *historia1 =
    "\nIrena estendeu a mão e, diante dela, surgiu o Farol.\n"
    "Não era feito de pedra nem de fogo, mas de pura luz dourada que rasgava as trevas.\n"
    "A torre ergueu-se sobre as ondas, irradiando claridade em todas as direções.\n\n"

    "O leviatã rugiu, cegado pela luminosidade. Sua sombra vacilou, como se a própria escuridão\n"
    "não tivesse onde se esconder.\n";

    const char *historia2 =
    "\nSoraya suspirou, surpresa e quase emocionada:\n"
    "'Ah... escolheste a luz, não a lâmina. És mais sábia do que eu pensei, coruja.'\n\n"

    "Liora inclinou a cabeça com respeito:\n"
    "'Não venceste o mar. Aprendeste a navegar com ele. Isso é o que poucos conseguem.'\n";

    const char *historia3 =
    "\nAs águas se abriram em corredores de claridade, revelando uma rota secreta\n"
    "entre muralhas de espuma e sombra. O navio seguiu suave, como se o mar o conduzisse\n"
    "ao invés de tentar destruí-lo.\n\n"

    "Irena percebeu que a luz não apagava o medo — ela apenas mostrava que ele podia ser atravessado.\n"
    "E, pela primeira vez, ela não sentia necessidade de lutar ou resistir. Apenas seguir.\n";

    const char *historia4 =
    "\nO leviatã observava de longe, imóvel.\n"
    "Não derrotado, mas também não mais hostil. Era como se, diante da luz do Farol,\n"
    "ele tivesse reconhecido que não havia vitória em engolir o navio.\n\n"

    "Irena entendeu: algumas batalhas não se vencem com armas, mas com clareza.\n"
    "E, às vezes, basta acender uma luz para que a escuridão perca sua força.\n";

    const char *historia5 =
    "\nQuando a travessia terminou, o Farol dissolveu-se em milhares de estrelas,\n"
    "que ficaram gravadas no céu noturno. O navio repousava em águas calmas,\n"
    "e Irena sorriu pela primeira vez em muito tempo.\n\n"

    "Não porque estava a salvo, mas porque agora sabia:\n"
    "a verdadeira luz sempre esteve dentro dela.\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
}

// ======================================================================
// CAMINHO 1_2_2 — A SERPENTE
// ======================================================================
// Justificativa de pontos:
// A Serpente simboliza a tentação e o aprendizado doloroso. Ao escolher este
// caminho, Irena é testada pelo desejo e pelo veneno — não pela força externa,
// mas pela sedução de ceder ao que pode destruí-la. É uma jornada perigosa,
// que não oferece vitória limpa, mas a chance de autoconhecimento através do erro.
// Conta como ponto NEUTRO.
// ======================================================================

void decisao1_2_2(void) {
    const char *historia =
    "\nO feixe da Estrela se contorceu como uma chama ao vento.\n"
    "Dele surgiu a imagem sinuosa de uma Serpente imensa, escamas brilhando como esmeraldas molhadas.\n"
    "O salão desapareceu, e Irena se viu em uma clareira iluminada por luar, onde a criatura rastejava em círculos.\n\n"

    "A língua bifurcada sibilava, e cada som parecia invadir a mente de Irena, oferecendo promessas que ela nunca ouvira em voz alta.\n";

    const char *historia1 =
    "\n'Sou o que desejas e o que temes', murmurou a Serpente, sua voz ecoando dentro da cabeça dela.\n"
    "'Comigo, sentirás poder correr em tuas veias. Não mais fragilidade, não mais dúvida. Só força.'\n\n"

    "Soraya apareceu à beira da clareira, rindo com ironia:\n"
    "'Cuidado, coruja... nem toda força vem sem preço. E veneno também pode ser doce no início.'\n";

    const char *historia2 =
    "\nLiora, séria, cruzou os braços:\n"
    "'A Serpente mostra os atalhos. Mas atalhos cobram caro. Pergunta-te: o que ganhas ao aceitar, e o que perdes ao recusar?'\n\n"

    "Irena observou os olhos da criatura — hipnóticos, convidativos.\n"
    "Dentro deles, via reflexos de si mesma triunfando, nunca mais sendo alvo de riso ou desprezo.\n"
    "Mas também, nas sombras, vislumbres de solidão e isolamento eterno.\n";

    const char *historia3 =
    "\nA Serpente se ergueu, torcendo-se em torno de Irena sem tocá-la.\n"
    "Seu corpo formava um círculo, como se a prendesse num ritual antigo.\n\n"

    "Então, a criatura abriu lentamente as mandíbulas, revelando presas que brilhavam como marfim afiado.\n"
    "Lá no fundo de sua garganta, três cartas brilhavam envoltas em uma luz âmbar, flutuando no veneno cintilante.\n\n"

    "'Escolhe, pequena coruja', sibilou a Serpente, o hálito quente e adocicado.\n"
    "'Cada carta que guardo em meu veneno traz um destino diferente. Qual delas ousas retirar?'\n\n"

    "Soraya aproximou-se mais, com um brilho de desafio nos olhos:\n"
    "'Cuidado com o que tiras da boca da serpente, coruja. Algumas cartas queimam, outras encantam.'\n\n"

    "Liora ergueu a voz como uma lâmina:\n"
    "'O veneno só é mortal se não souberes o que fazer com ele. Até o que destrói pode se tornar remédio.'\n";

    const char *historia4 =
    "\nAs cartas na boca da Serpente pulsavam com energia, cada uma oferecendo um pacto diferente:\n\n"
    "1 - O CÁLICE NEGRO - Beber do veneno e aceitar o poder instantâneo\n"
    "2 - A PELE DO DRAGÃO - Revestir-se com as escamas, ganhando proteção mas perdendo humanidade\n"
    "3 - O ESPELHO ENVENENADO - Refletir o veneno de volta, transformando-o em sabedoria\n\n"

    "A Serpente fixou seus olhos hipnóticos em Irena, aguardando.\n"
    "O sibilo ecoou na noite, e a clareira inteira pareceu prender a respiração.\n";

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
            pontoRuim++;
            decisao1_2_2_1();
            break;
        case 2:
            pontoNeutro++;
            decisao1_2_2_2();
            break;
        case 3:
            pontoBom++;
            decisao1_2_2_3();
            break;
    }
}

// ======================================================================
// CAMINHO 1_2_2_1 — O CÁLICE
// ======================================================================
// Justificativa de pontos:
// Ao beber o veneno da Serpente, Irena escolhe o caminho mais arriscado:
// o da tentação. O poder chega de forma brutal, mas corrói por dentro.
// É um caminho de intensidade, de ação devastadora, mas que deixa marcas
// profundas na alma. Conta como ponto RUIM.
// ======================================================================

void decisao1_2_2_1(void) {
    const char *historia1 =
    "\nO Cálice surgiu diante dela, feito de obsidiana e ouro, pulsando com o mesmo brilho verde das escamas da Serpente.\n"
    "Irena hesitou apenas por um instante, depois levou o cálice aos lábios.\n\n"

    "O líquido escorreu como fogo líquido, queimando sua garganta, espalhando-se pelas veias como relâmpagos.\n"
    "Seu corpo arqueou, os olhos se iluminaram com um brilho venenoso.\n"
    "A Serpente riu, um som grave e ancestral, ecoando pela clareira.\n";

    const char *historia2 =
    "\nDe repente, a clareira transformou-se em campo de batalha.\n"
    "Das sombras ergueram-se inimigos de todos os seus medos: vultos de colegas zombando, vozes familiares acusando, espectros que a julgavam.\n\n"

    "Irena ergueu as mãos e viu que suas veias agora brilhavam em verde.\n"
    "Com um gesto, liberou jorros de energia venenosa, que atravessaram os fantasmas como lâminas.\n"
    "A cada inimigo destruído, ela sentia uma euforia selvagem.\n\n"

    "Soraya gargalhava, encantada:\n"
    "'Sim! Mostra-lhes quem és, coruja! Mostra que ninguém pode te quebrar agora!'\n";

    const char *historia3 =
    "\nMas Liora, séria e firme, ergueu a voz sobre o caos:\n"
    "'Olha bem, Irena! Não percebes? Quanto mais destróis, mais te consomes!'\n\n"

    "Irena olhou para as próprias mãos e percebeu que a pele começava a escurecer, como se o veneno também queimasse por dentro.\n"
    "O poder era viciante, mas também voraz.\n\n"

    "A Serpente enrolou-se em torno da clareira, observando-a com satisfação:\n"
    "'Assim é o veneno: ele dá tudo... e toma tudo.'\n";

    const char *historia4 =
    "\nOs espectros multiplicaram-se, avançando como enxames de sombras.\n"
    "Irena rugiu e liberou uma onda de energia tão forte que o chão rachou, e árvores inteiras se despedaçaram.\n\n"

    "O veneno transformava cada emoção em arma — raiva virava fogo, dor virava lâmina, solidão virava tempestade.\n"
    "Ela lutava como uma deusa selvagem, mas seu coração batia cada vez mais rápido, como se fosse explodir.\n\n"

    "Soraya parou de rir, olhando com espanto e quase medo.\n"
    "Liora, por sua vez, apenas fechou os olhos, como quem já conhecia aquele destino.\n";

    const char *historia5 =
    "\nQuando a última sombra se dissolveu, Irena caiu de joelhos.\n"
    "O Cálice desapareceu de suas mãos, e a Serpente a fitou com olhos ardentes.\n\n"

    "'Agora sabes o gosto do poder e do veneno', disse a criatura.\n"
    "'Carregarás isso em ti para sempre.'\n\n"

    "Irena respirava com dificuldade, sentindo o peso da vitória.\n"
    "Ela havia vencido os inimigos, mas dentro dela o veneno continuava a arder.\n"
    "E a pergunta permanecia: sobreviver era triunfo... ou maldição?\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
}

// ======================================================================
// CAMINHO 1_2_2_2 — A PELE DESPIDA
// ======================================================================
// Justificativa de pontos:
// Ao recusar a Serpente, Irena escolhe permanecer intocada pelo veneno.
// Este é um caminho de coragem silenciosa: não cede à tentação, mas também
// não ganha o poder imediato que poderia ajudá-la. Ela segue vulnerável,
// mas preserva sua essência. Conta como ponto NEUTRO.
// ======================================================================

void decisao1_2_2_2(void) {
    const char *historia1 =
    "\nO símbolo da Pele Despida brilhou sob os pés de Irena.\n"
    "A Serpente ergueu-se diante dela, imensa, aguardando a resposta.\n\n"

    "Irena respirou fundo, o coração batendo como tambor de guerra.\n"
    "— Não preciso de ti, disse com firmeza.\n"
    "— Não vou beber teu veneno, nem vestir tua promessa.\n";

    const char *historia2 =
    "\nA criatura estreitou os olhos, sua língua bifurcada silvando com irritação.\n"
    "'Todos cedem, coruja... todos! O poder chama, e o veneno é doce.'\n\n"

    "Soraya riu, mas dessa vez havia respeito em sua voz:\n"
    "'Olha só, pequena... até eu já cedi ao veneno alguma vez. Mas tu? Tu escolheste o vazio. Isso exige uma força rara.'\n\n"

    "Irena permanecia firme, os punhos cerrados, ainda que o corpo tremesse.\n";

    const char *historia3 =
    "\nLiora, com os olhos fixos em Irena, falou em tom grave:\n"
    "'Despida de ilusões, despida de atalhos. Permaneces nua diante de ti mesma. E isso, mais do que o veneno, pode doer.'\n\n"

    "A Serpente se contorceu, cercando Irena em círculos apertados, tentando esmagá-la com a pressão.\n"
    "Mas Irena não se moveu. Sentia medo, sim — mas não recuaria.\n";

    const char *historia4 =
    "\nA cada volta, a Serpente silvava mais alto, cuspindo veneno que queimava o solo ao redor.\n"
    "O cheiro ácido invadia os pulmões de Irena, que tossia, mas mantinha a postura ereta.\n\n"

    "Soraya gritou:\n"
    "'Ela não vai ceder!'\n\n"

    "Liora completou:\n"
    "'Não porque é imune... mas porque escolheu permanecer inteira.'\n";

    const char *historia5 =
    "\nPor fim, a Serpente ergueu-se e, com um sibilo prolongado, mergulhou na terra, desaparecendo em um turbilhão de sombras.\n\n"

    "O silêncio caiu sobre a clareira. A lua brilhou mais forte, e o símbolo da Pele Despida se apagou aos pés de Irena.\n"
    "Ela caiu de joelhos, exausta, mas sentindo uma estranha leveza.\n\n"

    "Rejeitar o veneno não lhe dera poder... mas lhe dera algo talvez mais raro: a certeza de que podia resistir.\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
}

// ======================================================================
// CAMINHO 1_2_2_3 — O ESPELHO ENVENENADO
// ======================================================================
// Justificativa de pontos:
// O Espelho simboliza o poder de refletir e transmutar. Irena não cede ao
// veneno da Serpente, nem o recusa por medo: ela o encara e transforma.
// Este é um caminho de sabedoria ativa — a dor vira aprendizado, o veneno
// se torna remédio. Conta como ponto BOM.
// ======================================================================

void decisao1_2_2_3(void) {
    const char *historia1 =
    "\nO brilho âmbar intensificou-se dentro da boca da Serpente, e entre as presas afiadas "
    "surgiu um objeto impossível: um Espelho de superfície líquida, moldado por vidro e veneno.\n\n"

    "Irena estendeu a mão e, ao tocá-lo, o espelho não refletiu seu rosto — "
    "mas suas próprias fraquezas, seus medos, as vezes em que quis desistir.\n\n"

    "Soraya estreitou os olhos e sussurrou:\n"
    "'Olha bem, coruja... o espelho não mostra o que és, mas o que te corrói por dentro.'\n";

    const char *historia2 =
    "\nLiora se aproximou, séria e firme:\n"
    "'Mas é também o que pode ser curado. O veneno, quando encarado, pode virar cura. "
    "Não há sabedoria sem atravessar o próprio reflexo.'\n\n"

    "Irena viu as imagens se multiplicarem: cada ofensa, cada sombra, cada erro, "
    "tudo refletido no líquido venenoso do espelho. E quanto mais olhava, mais o objeto tremia, "
    "como se absorvesse suas dores.\n\n"

    "A Serpente silvou, inquieta:\n"
    "'Isso não é para ser visto! Ninguém encara o próprio veneno sem se quebrar!'\n";

    const char *historia3 =
    "\nO espelho começou a rachar. Mas não se despedaçava: as rachaduras se iluminavam "
    "como rios de prata correndo pela superfície.\n\n"

    "Irena percebeu que podia escolher: deixar o espelho explodir, ou segurá-lo firme, "
    "permitindo que a dor a atravessasse. Respirou fundo e apertou o objeto contra o peito.\n\n"

    "Um clarão explodiu pela clareira. O veneno que escorria virou luz, "
    "envolvendo a Serpente e fazendo-a recuar pela primeira vez.\n\n"

    "Soraya, boquiaberta, murmurou:\n"
    "'Ela... transformou o veneno em estrela.'\n";

    const char *historia4 =
    "\nLiora, com um raro sorriso, completou:\n"
    "'Não matou a Serpente. Não fugiu dela. Aprendeu a dançar com sua sombra. "
    "Isso é mais do que vitória: é sabedoria.'\n\n"

    "A Serpente, agora menor, enrolou-se sobre si mesma e mergulhou nas trevas, "
    "mas seus olhos continuavam a arder — não de raiva, mas de respeito.\n\n"

    "O espelho em mãos de Irena dissolveu-se em milhares de fragmentos de luz, "
    "que se fixaram em sua pele como constelações.\n";

    const char *historia5 =
    "\nA clareira voltou ao silêncio. A lua brilhava mais forte, e o ar estava limpo, "
    "sem vestígios de veneno.\n\n"

    "Irena tocou o peito e percebeu que o veneno não havia sumido — "
    "mas agora corria em suas veias como força domada, sem destruir.\n\n"

    "Soraya sorriu, com orgulho e espanto:\n"
    "'Talvez tu sejas mais perigosa que a própria Serpente, pequena coruja.'\n\n"

    "E Liora, em voz baixa, concluiu:\n"
    "'O veneno não se foi. Mas agora é teu. E tu és maior que ele.'\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
    continuar();
}

// ======================================================================
// CAMINHO 1_2_3 — A MONTANHA
// ======================================================================
// Justificativa de pontos:
// A Montanha simboliza os grandes desafios. Ela não se vence com atalhos:
// cada escolha exige enfrentar o peso da vida. As cartas revelam como
// Irena decidirá lidar com o obstáculo. 
// ======================================================================

void decisao1_2_3(void) {
    const char *historia1 =
    "\nO feixe da Estrela se condensou em uma muralha escura que subia até desaparecer no céu.\n"
    "Era a Montanha: imensa, intocável, tão antiga que parecia respirar junto com a terra.\n\n"

    "Ao redor, o salão desapareceu. Irena estava aos pés do gigante de pedra.\n"
    "O vento frio cortava como lâminas, e as nuvens se arrastavam nas encostas.\n\n"

    "Soraya ergueu o queixo e murmurou:\n"
    "'A Montanha não promete nada, coruja. Nem glória, nem perdão. Só silêncio e peso.'\n\n"

    "Liora, em tom solene, completou:\n"
    "'Escalar é encarar-se. Não há como mentir para a pedra. Ela só reconhece a verdade.'\n";

    const char *historia2 =
    "\nIrena começou a subida. Cada pedra parecia pulsar sob seus dedos, "
    "como se a Montanha a testasse a cada passo.\n\n"

    "As sombras se moviam nas encostas: vultos de todos os fracassos passados dela, "
    "escorregando, caindo, rindo. Cada um sussurrava: 'Volta. Não conseguirás.'\n\n"

    "Soraya gargalhou, mas havia dureza em sua voz:\n"
    "'Escuta bem, pequena... a Montanha nunca mata. Quem morre é quem desiste.'\n";

    const char *historia3 =
    "\nNo meio da escalada, uma fenda se abriu na rocha.\n"
    "De dentro, olhos de pedra a observavam: era o Guardião da Montanha, "
    "um colosso feito de granito vivo. Ele bloqueava a passagem com um gesto lento, "
    "como se fosse parte da própria montanha.\n\n"

    "Liora falou, firme:\n"
    "'Ele não é inimigo. É o teste. Pergunta-te: vens para conquistar a Montanha... ou para aprender com ela?'\n\n"

    "O Guardião abriu a mão, revelando três cartas do Baralho Cigano, "
    "cada uma pulsando com energia própria.\n";

    const char *historia4 =
    "\nAs cartas brilhavam suspensas no ar, oferecendo caminhos distintos:\n\n"
    "1 - A FORÇA - Confrontar a Montanha pela brutalidade, rompendo limites do corpo\n"
    "2 - A CRUZ - Carregar o peso com paciência, suportando o fardo até o fim\n"
    "3 - O SOL - Iluminar o caminho oculto, enxergando além das pedras\n\n"

    "Soraya sorriu com sarcasmo:\n"
    "'Qualquer escolha vai doer, coruja. A diferença é o que aprendes com a dor.'\n\n"

    "E Liora, suave mas firme:\n"
    "'A Montanha só se abre para quem entende que o obstáculo é parte da jornada.'\n";

    const char *historia5 =
    "\nO Guardião ergueu as cartas diante dela. "
    "O vento rugia, a neve começava a cair, e a Montanha inteira parecia "
    "aguardar sua decisão.\n\n"

    "Qual carta Irena escolherá?\n"
    "1 - A Força\n"
    "2 - A Cruz\n"
    "3 - O Sol\n";

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
            pontoRuim++;
            decisao1_2_3_1();
            break;
        case 2:
            pontoNeutro++;
            decisao1_2_3_2();
            break;
        case 3:
            pontoBom++;
            decisao1_2_3_3();
            break;
    }
}


// ======================================================================
// CAMINHO 1_2_3_1 — A CARTA DA FORÇA
// ======================================================================
// Justificativa de pontos:
// Ao escolher a Força, Irena decide escalar com brutalidade, confiando
// apenas no corpo. Ela chega ao topo, mas o preço é alto: exaustão e feridas.
// Conta como ponto RUIM.
// ======================================================================

void decisao1_2_3_1(void) {
    const char *historia1 =
    "\nIrena estendeu a mão e escolheu a carta da Força.\n"
    "A imagem brilhou, e uma energia abrasadora tomou seus músculos, "
    "fazendo suas veias vibrarem como cordas tensionadas.\n\n"

    "Soraya sorriu, quase satisfeita:\n"
    "'Ah... finalmente vejo a chama da ousadia! Mas cuidado, coruja: "
    "o fogo que aquece também consome.'\n\n"

    "Liora, em tom grave, respondeu:\n"
    "'A Força pode abrir o caminho... mas o corpo não é infinito. "
    "Cada pedra vencida pode te arrancar algo de dentro.'\n";

    const char *historia2 =
    "\nCom um grito, Irena cravou os dedos na rocha e começou a subir sem cordas nem pausas.\n"
    "Cada avanço era um rasgo de carne, cada pedra arrancava sangue de suas mãos.\n\n"

    "O vento rugia contra o rosto dela, tentando derrubá-la. "
    "As sombras zombavam, multiplicando-se à sua volta.\n"
    "Mas Irena respondia com mais esforço, mais brutalidade, até que seus braços ardiam em fogo.\n\n"

    "Soraya gritou, quase excitada:\n"
    "'Isso! Mostra à Montanha que não tens medo de quebrar-te!'\n";

    const char *historia3 =
    "\nO Guardião de pedra ressurgiu acima dela, golpeando com uma mão colossal.\n"
    "Irena não recuou: segurou a mão de granito e, com um rugido, partiu os dedos do gigante.\n\n"

    "O impacto ressoou por toda a Montanha, que tremeu como se chorasse.\n"
    "Mas o preço veio rápido: o braço de Irena latejava, trincado de dor, "
    "como se tivesse absorvido a própria rachadura da pedra.\n\n"

    "Liora ergueu a voz sobre o estrondo:\n"
    "'Não vences a Montanha, Irena. Vences apenas a ti mesma — e a derrota é interna.'\n";

    const char *historia4 =
    "\nExausta, ela continuou subindo, cada passo arrancando lágrimas e sangue. "
    "O vento agora trazia visões de vitórias ilusórias: multidões aplaudindo, coroas de glória, "
    "como se a Montanha zombasse de sua obstinação.\n\n"

    "Soraya murmurou, séria pela primeira vez:\n"
    "'Quando a vitória brilha demais, pode ser apenas miragem.'\n";

    const char *historia5 =
    "\nPor fim, Irena alcançou o cume. O céu abriu-se, revelando estrelas em silêncio.\n\n"
    "Ela ergueu os braços, vitoriosa, mas caiu de joelhos logo em seguida.\n"
    "Seus músculos estavam dilacerados, o corpo trêmulo, e a Montanha permanecia imponente, "
    "como se não tivesse cedido nada.\n\n"

    "Liora disse em tom baixo, quase compassivo:\n"
    "'Chegaste ao topo... mas não conquistaste a Montanha. Apenas a violentaste, "
    "e ela devolveu as cicatrizes.'\n\n"

    "Irena permaneceu ali, respirando com dificuldade. "
    "A vitória tinha gosto de ferro e dor — e a pergunta ecoava em seu peito: "
    "valera a pena?\n";


    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
    continuar();
}

// ======================================================================
// CAMINHO 1_2_3_2 — A CARTA DA CRUZ
// ======================================================================
// Justificativa de pontos:
// Ao escolher a Cruz, Irena aceita o peso da Montanha, suportando o fardo
// sem pressa. É um caminho de paciência e resignação: ela não vence a pedra,
// mas convive com ela. Não há triunfo glorioso, mas há resistência silenciosa.
// Conta como ponto NEUTRO.
// ======================================================================

void decisao1_2_3_2(void) {
    const char *historia1 =
    "\nIrena estendeu a mão e escolheu a carta da Cruz.\n"
    "Um frio profundo percorreu seu corpo, como se o peso de séculos tivesse se deitado sobre seus ombros.\n\n"

    "Soraya ergueu as sobrancelhas, quase desapontada:\n"
    "'Então é isso? Carregarás o fardo sem lutar? Que escolha melancólica, coruja...'\n\n"

    "Mas Liora sorriu levemente:\n"
    "'Nem toda vitória precisa de batalha. Às vezes, resistir é o bastante.'\n";

    const char *historia2 =
    "\nIrena continuou a subir devagar, cada passo arrastado, "
    "mas firme como o pulsar de um coração paciente.\n\n"

    "O vento tentava derrubá-la, as sombras zombavam, "
    "mas ela não corria, não se enfurecia — apenas suportava.\n\n"

    "Soraya riu com ironia:\n"
    "'Isso é coragem ou covardia? Não sei dizer... talvez as duas coisas.'\n";

    const char *historia3 =
    "\nO Guardião da Montanha reapareceu, bloqueando o caminho com sua mão de pedra.\n"
    "Diferente de antes, Irena não tentou lutar nem fugir.\n"
    "Apenas ajoelhou-se diante dele, curvando a cabeça.\n\n"

    "O colosso não atacou. Apenas recuou lentamente, como se reconhecesse a aceitação.\n\n"

    "Liora murmurou:\n"
    "'Quem suporta aprende algo que a força nunca ensina: a humildade.'\n";

    const char *historia4 =
    "\nA subida prosseguiu, interminável. Irena estava exausta, mas continuava.\n"
    "As mãos sangravam, os pés queimavam, o frio mordia sua pele — mas ela não parava.\n\n"

    "Soraya, dessa vez mais séria, comentou:\n"
    "'Ela não se quebra. Mas também não vence. Apenas carrega.'\n\n"

    "E Liora respondeu:\n"
    "'E, às vezes, isso é o suficiente.'\n";

    const char *historia5 =
    "\nDepois de uma eternidade, Irena alcançou um platô alto, "
    "onde a vista se abria para vales cobertos de neblina.\n\n"

    "Não havia triunfo nem aplausos, apenas silêncio.\n"
    "A Cruz em sua mão brilhou suavemente e desapareceu, "
    "deixando em seu peito uma cicatriz luminosa.\n\n"

    "Ela não havia conquistado a Montanha. Mas também não fora derrotada.\n"
    "Apenas seguira em frente, carregando consigo a lição silenciosa da resistência.\n";

    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
    continuar();
}

// ======================================================================
// CAMINHO 1_2_3_3 — A CARTA DO SOL
// ======================================================================
// Justificativa de pontos:
// Ao escolher o Sol, Irena ilumina a Montanha e enxerga passagens secretas.
// Não é a força nem a resignação que a guia, mas a clareza e a sabedoria.
// Esse é um caminho de iluminação e visão profunda, que transforma o obstáculo
// em parte do aprendizado. Conta como ponto BOM.
// ======================================================================

void decisao1_2_3_3(void) {
    const char *historia1 =
    "\nIrena estendeu a mão e escolheu a carta do Sol.\n"
    "Um calor suave percorreu seu corpo, dissipando o frio da Montanha.\n"
    "A luz dourada expandiu-se em sua pele, como se cada célula respirasse claridade.\n\n"

    "Soraya estreitou os olhos, quase incomodada:\n"
    "'Tsc... essa luz irrita até as sombras. Vais confiar na visão em vez da luta, coruja?'\n\n"

    "Liora sorriu, serena:\n"
    "'A luz não vence a Montanha... mas mostra que ela nunca foi intransponível.'\n";

    const char *historia2 =
    "\nO caminho diante de Irena, antes escuro e áspero, começou a se revelar.\n"
    "Entre as pedras, trilhas escondidas surgiram como fios dourados, "
    "serpenteando pelas encostas.\n\n"

    "As sombras zombavam, mas cada gargalhada se dissolvia na claridade.\n\n"

    "Soraya murmurou, intrigada:\n"
    "'Não vejo monstros, não vejo fardos... só clareza. É isso o que escolheste?'\n";

    const char *historia3 =
    "\nO Guardião de pedra reapareceu, mas agora seus olhos refletiam a luz dourada do Sol.\n"
    "Em vez de bloquear o caminho, ele se ajoelhou, como se reconhecesse "
    "a visão de Irena.\n\n"

    "Liora declarou:\n"
    "'Quem traz o Sol não precisa lutar contra a pedra. A própria Montanha se abre.'\n\n"

    "Soraya, ainda desconfiada, comentou:\n"
    "'Mas cuidado, coruja... até a luz pode cegar quem não souber usá-la.'\n";

    const char *historia4 =
    "\nIrena seguiu as trilhas iluminadas, cada passo leve, quase dançando entre as rochas.\n"
    "O vento frio aquietou-se, transformando-se em brisa suave.\n\n"

    "Ela viu além da Montanha: não apenas um topo, mas vales inteiros, "
    "rios cintilantes e cidades adormecidas no horizonte.\n\n"

    "Era como se, por um instante, tivesse enxergado o mundo como ele realmente era: "
    "cheio de obstáculos, mas também de infinitos caminhos escondidos.\n";

    const char *historia5 =
    "\nNo cume, o Sol brilhou com força, dissolvendo as últimas sombras.\n\n"
    "Irena ergueu a carta diante do peito, e ela se desfez em luz, "
    "gravando-se em sua pele como um símbolo eterno.\n\n"

    "Soraya suspirou, resignada, mas com um leve sorriso:\n"
    "'Talvez a claridade seja mais perigosa que o veneno ou a fúria... "
    "porque não deixa lugar para enganos.'\n\n"

    "E Liora concluiu, em voz calma:\n"
    "'Não conquistaste a Montanha, Irena. Conquistaste a ti mesma... "
    "e isso é maior que qualquer cume.'\n";
    
    printf("%s\n", historia1);
    continuar();    
    printf("%s\n", historia2);
    continuar();    
    printf("%s\n", historia3);
    continuar();    
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
    continuar();
}

// =======================================================================================================================
// CAMINHO 1_3 — O CAIXÃO
// =======================================================================================================================
// Justificativa de pontos:
// O Caixão simboliza o fim inevitável, mas também a chance de renascimento.
// É uma escolha dolorosa, que exige que Irena aceite deixar morrer partes de si,
// incluindo ilusões, medos e até afetos que a prendem.
// Esse desapego abre caminho para transformação, por isso conta como PONTO BOM.
// =======================================================================================================================

void decisao1_3(void) {
    const char *historia =
    "\nIrena fechou os olhos. O coração pesava, como se cada batida fosse um adeus.\n"
    "Quando abriu a boca, sua voz não tremeu: — Quero o Caixão.\n\n"

    "Um silêncio denso caiu sobre o salão. Até os gatos pararam de se mover, como se temessem respirar.\n"
    "As lamparinas tremularam, e a escuridão engoliu as paredes até que só restasse a mesa e o baralho.\n"
    "Soraya parou de sorrir, e Liora inclinou levemente a cabeça, como quem reconhece coragem.\n\n"

    "A carta virou-se sozinha. No centro, um caixão negro se erguia emoldurado por flores brancas, "
    "ao mesmo tempo sepulcro e promessa. O ar ficou mais frio, e Irena sentiu o chão sumir sob os pés.\n";

    const char *historia1 =
    "\nSoraya falou, mas sua voz não era mais brincalhona:\n"
    "'Morte... mas não de carne. Morte daquilo que te prende. "
    "Cada fim é uma libertação, ainda que doa como punhal na alma.'\n\n"

    "Enquanto ela falava, os espelhos ao redor começaram a escurecer, refletindo apenas vultos de sombras.\n"
    "Era como se todos os rostos que Irena conhecera estivessem ali, olhando-a com despedida.\n\n"

    "Liora completou, firme:\n"
    "'O Caixão não perdoa ilusões. Ele exige entrega. "
    "A pergunta é: o que você está disposta a enterrar, Irena?'\n\n"

    "As chamas das lamparinas baixaram até quase apagar, revelando três novas cartas sobre a mesa, "
    "cintilando como brasas no escuro:\n\n"
    "1 - A Foice (o corte necessário, fim abrupto e doloroso, mas libertador).\n"
    "2 - A Cruz (o peso do sofrimento, o destino que não pode ser evitado, mas pode ser carregado com fé).\n"
    "3 - Os Lírios (a paz que nasce após a dor, reconciliação e serenidade).\n\n"

    "Cada carta brilhava como se respirasse, pedindo para ser escolhida. "
    "E Irena sabia: fosse qual fosse a decisão, nada nela permaneceria igual.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);

    int escolha = receberResposta(3);

    switch (escolha) {
        case 1:
            pontoRuim++;
            decisao1_3_1();
            break;
        case 2:
            pontoNeutro++;
            decisao1_3_2();
            break;
        case 3:
            pontoBom++;
            decisao1_3_3();
            break;
    }
}

void decisao1_3_1(void) {
    const char *historia =
    "\nIrena tocou a carta do Sol. Assim que a retirou do monte, o salão pareceu mudar. "
    "A penumbra que dominava as paredes se rasgou em fachos dourados que atravessaram as frestas, "
    "como se o próprio teto fosse transparente por um instante.\n\n"

    "Soraya ergueu os olhos, seus brincos tilintando ao som de um vento quente que não vinha de lugar algum:\n"
    "'O Sol ilumina, coruja... mas a luz revela não só os caminhos, também as sombras que preferias manter ocultas. "
    "Tudo o que escondeste de ti mesma será exposto diante desse clarão.'\n\n"

    "Liora passou os dedos pelo pano da mesa, observando os raios que se espalhavam entre as cartas:\n"
    "'A claridade pode ser esperança, mas também pode cegar. Tens coragem para suportar tanto brilho sem fugir de tua própria imagem?'\n";

    const char *historia1 =
    "\nO calor invadiu o corpo de Irena. Ela fechou os olhos, mas ainda via tudo — lembranças, "
    "sorrisos perdidos, momentos em que acreditara ser feliz. "
    "Era como se as memórias que guardara em escuridões internas agora gritassem por reconhecimento.\n\n"

    "Soraya inclinou-se sobre a mesa, a voz grave:\n"
    "'No teu passado, houve riso, sim, mas também a ingenuidade de quem acreditava que a luz bastava. "
    "Quantas vezes não te queimaste por te aproximar demais de promessas que não passavam de fogo-fátuo?'\n";

    const char *historia2 =
    "\nIrena sentiu o peso dessas palavras. Recordou as vezes em que confiou em pessoas que a traíram, "
    "em caminhos que pareciam dourados mas terminavam em deserto. "
    "O Sol a aquecia, mas também a obrigava a rever essas feridas.\n\n"

    "Liora então completou, como um eco inevitável:\n"
    "'A luz do Sol não poupa, Irena. Expõe. "
    "E agora não há véus entre ti e a verdade do que foste, do que fizeste, e do que ainda temes repetir.'\n";

    const char *historia3 =
    "\nUm clarão final preencheu o salão, fazendo as paredes pulsarem como se fossem feitas de vidro. "
    "Irena abriu os olhos. Sentiu tanto dor quanto alívio: a sensação de ser atravessada por algo que, "
    "ao mesmo tempo, queimava e purificava.\n\n"

    "Soraya sorriu, mas sem doçura:\n"
    "'O Sol te deu a verdade. Cabe a ti decidir se usarás essa luz para florescer ou para incendiar a si mesma.'\n\n"

    "Liora murmurou, quase como um lamento:\n"
    "'Nem toda claridade é redenção, mas toda claridade é caminho.'\n"

    "\nDiante do brilho ofuscante, Irena percebe três novas cartas à sua frente, reveladas pelo Sol:\n\n"
    "1. A Lua — o véu do mistério, da ilusão e das verdades não ditas.\n"
    "2. A Estrela — escolhas inevitáveis, a bifurcação que exige decisão.\n"
    "3. O Pássaro — estabilidade, esperança, mas também o peso de permanecer.\n\n"
    "Qual carta Irena escolherá?\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);

    int escolha = receberResposta(3);
 
    switch (escolha) {
        case 1:
            pontoNeutro++; 
            decisao1_3_1_1(); 
            break;
        case 2:
            pontoBom++;
            decisao1_3_1_2();
            break;
        case 3:
            pontoRuim++;
            decisao1_3_1_3();
            break;
    }
}

// ======================================================================
// CAMINHO 1_3_2 — A CRUZ
// ======================================================================
// Justificativa de pontos:
// A Cruz simboliza o fardo escolhido: aceitar peso e destino, carregar feridas
// com dignidade. Não é libertação nem aniquilamento — é resistência.
// Conta como ponto NEUTRO: há coragem, mas também custo; o equilíbrio é incerto.
// ======================================================================

void decisao1_3_2(void) {
    const char *historia =
    "\nIrena pousou as mãos sobre a mesa. A carta da Cruz brilhou com um tom fosco,\n"
    "como metal lavado pela chuva. O desenho era simples, mas emanava uma força\n"
    "que não podia ser negada: não cortar, não apagar, mas suportar. Era um convite\n"
    "a carregar, e não a se libertar.\n\n"

    "O peso caiu sobre seus ombros como um manto invisível. Não era apenas dor:\n"
    "havia ali a memória de quem já carregara antes dela, de vozes silenciadas que\n"
    "gritavam através dos ossos, pedindo continuidade. A Cruz não era só dela —\n"
    "era herança, era vínculo, era destino.\n\n"

    "As lamparinas crepitaram em uníssono, como se respirassem numa só garganta.\n"
    "As sombras nas paredes se alongaram, formando figuras que pareciam marchar\n"
    "com fardos próprios, cada uma inclinada sob um peso que ninguém via.\n\n"

    "Soraya observava com um sorriso enviesado, que não chegava aos olhos:\n"
    "‘Escolheste o caminho de quem suporta. Nem todo peso é punição; alguns são\n"
    "a tessitura do que serás daqui em diante. Cuidado, coruja: há quem se torne\n"
    "ainda mais forte sob o fardo, mas há também os que se partem em silêncio.’\n\n"

    "Liora, por sua vez, colocou a mão sobre o braço de Irena. O gesto era simples,\n"
    "mas sua firmeza trazia mais verdade que qualquer palavra:\n"
    "‘Carregar a Cruz é aceitar viver com marcas. Não há fuga do sofrimento,\n"
    "apenas diferentes maneiras de caminhar com ele. Alguns encontram sentido —\n"
    "outros, apenas ruína. O fardo molda, mas também testa os ossos.’\n\n"

    "Irena sentiu um calafrio percorrer-lhe a espinha. Era como se o peso escolhido\n"
    "vibrasse debaixo de sua pele, desenhando cicatrizes invisíveis que já começavam\n"
    "a contar histórias. Cicatrizes que não pediam desculpas por existir.\n\n";

    const char *historia1 =
    "\nA Cruz ergueu-se lentamente entre as cartas, e sua sombra cobriu a mesa inteira.\n"
    "O ar ficou mais denso, e Irena ouviu passos — ecos vindos do passado, como se\n"
    "outras vidas caminhando com ela estivessem presentes. No som grave e distante,\n"
    "havia consolo, mas também cobrança.\n\n"

    "‘Quem carrega aprende a ouvir os sussurros do peso’, murmurou Soraya.\n"
    "‘Ele fala contigo, mostra segredos, cobra coragem. O fardo é voz e prisão,\n"
    "mas também pode ser guia. O que decidirás fazer com ele, pequena coruja?’\n\n"

    "Liora endireitou a postura e, num tom que misturava desafio e esperança, disse:\n"
    "‘O peso nunca é neutro. Ele se entranha, ele molda. Pergunta não é se consegues\n"
    "carregar, Irena, mas quem serás depois de caminhar com ele.’\n\n"

    "Diante de Irena, três novas cartas surgiram devagar, como se despertassem\n"
    "de um sono longo. Cada uma brilhava de modo singular, projetando luz e sombra\n"
    "sobre seu rosto cansado:\n\n"

    "1 - A Chama Oculta (o fogo interior que pode transformar ou consumir).\n"
    "2 - O Sussurro do Abismo (a promessa de silêncio e não-existir).\n"
    "3 - O Espelho Quebrado (fragmentos que mostram verdades dolorosas,\n"
    "    possibilitando remendos — ou novas formas).\n\n"

    "Cada carta parecia pulsar como um coração vivo, convidando-a a estender os dedos.\n"
    "A Cruz ainda vibrava sob suas mãos, pedindo resposta, lembrando-a de que até\n"
    "o fardo escolhido podia abrir novos caminhos. Mas não sem dor, nunca sem dor.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);

    int escolha = receberResposta(3);

    switch (escolha) {
        case 1:
            pontoNeutro++;
            decisao1_3_2_2();
            break;
        case 2:
            pontoRuim++;
            decisao1_3_2_3();
            break;
        case 3:
            pontoBom++;
            decisao1_3_2_1();
            break;
    }
}
// ======================================================================
// CAMINHO 1_3_3 — OS LÍRIOS
// ======================================================================
// Justificativa de pontos:
// Os Lírios simbolizam a serenidade que nasce após a dor. 
// Representam reconciliação, cura e o florescer de uma paz inesperada.
// É o caminho do descanso e da aceitação, não pela fuga, mas pela travessia.
// Conta como PONTO BOM, pois marca um renascimento suave e esperançoso.
// ======================================================================

void decisao1_3_3(void) {
    const char *historia =
    "\nAo escolher os Lírios, o salão foi tomado por um perfume delicado.\n"
    "O frio e a sombra recuaram, substituídos por um brilho leitoso,\n"
    "como o de luar refletido sobre águas calmas.\n\n"

    "Sobre a mesa, a carta desdobrou-se sozinha, e de dentro dela brotaram flores.\n"
    "Lírios brancos e puros, que não pertenciam a nenhum jardim da terra,\n"
    "se abriram como se respirassem. As pétalas exalavam calma, e cada batida\n"
    "do coração de Irena parecia se harmonizar com a leveza do ar.\n\n"

    "Soraya suspirou, os olhos semicerrados:\n"
    "'Ah... o bálsamo dos feridos. O fim que não corta, mas cicatriza.\n"
    "Coruja, escolheste o silêncio que consola, o repouso que floresce.\n"
    "É belo... mas exige que aceites a lentidão da cura.'\n\n"

    "Liora, de pé como guardiã, acrescentou:\n"
    "'Os Lírios não anulam o passado, mas o transformam em adubo.\n"
    "Tua dor alimenta tua paz, assim como a noite alimenta a aurora.\n"
    "Aceitar este caminho é aprender que viver não é lutar sempre —\n"
    "às vezes é saber repousar, sem culpas.'\n\n";

    const char *historia1 =
    "\nDo chão brotaram mais flores, cobrindo as tábuas do salão.\n"
    "A madeira gasta desapareceu sob um campo de lírios, brancos como neve.\n"
    "Irena caminhava entre eles e, a cada passo, sentia que algo se desfazia\n"
    "dentro de si: os ecos de gritos antigos, a solidão, a memória das feridas.\n"
    "Nada desaparecia por completo — mas tudo se tornava leve, suportável.\n\n"

    "Os espelhos nas paredes refletiam versões dela mesma sorrindo em paz,\n"
    "sem peso nos ombros, sem a eterna tensão no olhar.\n"
    "E pela primeira vez, ela acreditou que talvez fosse possível existir\n"
    "sem estar em guerra contra si mesma.\n\n"

    "Soraya dançou entre as flores, rindo com suavidade:\n"
    "'Olha ao teu redor, coruja... até as cicatrizes podem ser belas\n"
    "quando se tornam jardim.'\n\n"
    "Liora a acompanhou em silêncio, mas seu sorriso discreto confirmava:\n"
    "havia algo verdadeiro ali, algo sólido.\n\n"

    "Diante de Irena, três novas cartas surgiram, repousando entre as pétalas:\n\n"
    "1 - O Círculo (aceitar a repetição como lição, não como prisão).\n"
    "2 - O Abismo (a tentação de desistir, escondida sob o manto da paz).\n"
    "3 - A Fênix (renascer através do fogo, queimando o velho para abrir espaço ao novo).\n\n"

    "Os lírios curvaram-se levemente, como se reconhecessem a gravidade da escolha.\n"
    "A paz estava ali, mas Irena sabia: toda serenidade traz consigo novas encruzilhadas.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);

    int escolha = receberResposta(3);

    switch (escolha) {
        case 1:
            pontoNeutro++;
            decisao1_3_3_1();
            break;
        case 2:
            pontoRuim++;
            decisao1_3_3_2();
            break;
        case 3:
            pontoBom++;
            decisao1_3_3_3();
            break;
    }
}


// =======================================================================================================================
// CAMINHO 1_3_1_1 — A LUA
// =======================================================================================================================
// Justificativa de pontos:
// A Lua simboliza mistério, introspecção e revelação das ilusões que carregamos.
// Ao escolhê-la, Irena mergulha em seus próprios reflexos e máscaras, confrontando sentimentos e memórias ocultas.
// É uma escolha desafiadora e dolorosa, que expõe vulnerabilidades, mas também permite autoconhecimento profundo.
// Por isso, conta como PONTO NEUTRO: não é necessariamente boa ou má, mas é necessária para o crescimento interior.
// =======================================================================================================================
void decisao1_3_1_1(void) {
    const char *historia =
    "\nIrena estendeu a mão e puxou a carta da **Lua**. Assim que a colocou sobre a mesa, "
    "o salão antes banhado de claridade se cobriu de um véu prateado. "
    "As sombras se alongaram e pareciam ganhar vida, dançando ao redor dela.\n\n"

    "Soraya ergueu uma sobrancelha, o olhar penetrante:\n"
    "'Do Sol à Lua... escolheste trocar a clareza pelo reflexo, coruja. "
    "Aqui, nada é o que parece. O brilho não revela: engana. O que vês pode ser só eco do que temes.'\n\n"

    "Liora fechou os olhos, como se ouvisse uma música distante:\n"
    "'A Lua fala em sonhos e ilusões, em vozes que nunca cessam dentro da mente. "
    "Será que estás pronta para encarar não a verdade nua, mas as máscaras que ela veste?'\n";

    const char *historia1 =
    "\nUm frio percorreu os ossos de Irena. O chão parecia coberto de água, refletindo seu rosto, "
    "mas o reflexo sorria quando ela não sorria. "
    "Cada passo ecoava como se fosse de outra pessoa, um duplo invisível caminhando ao lado dela.\n\n"

    "Soraya inclinou-se sobre a mesa, os dedos batendo devagar sobre o pano:\n"
    "'Teu passado tem fendas, e delas brotam imagens distorcidas. "
    "Quantas vezes fingiste ser algo que não eras para ser aceita? "
    "Quantas palavras não ditas se tornaram correntes que arrastas sem perceber?'\n";

    const char *historia2 =
    "\nAs palavras atingiram Irena como lâminas finas. "
    "Ela se lembrou das noites em que escondia lágrimas para não preocupar ninguém, "
    "dos sorrisos que usava como máscara em vez de consolo verdadeiro. "
    "A Lua lhe mostrava que sua própria imagem era um labirinto de espelhos.\n\n"

    "Liora abriu os olhos, fitando-a com intensidade:\n"
    "'Na Lua, cada verdade vem coberta de véus. "
    "E tu, Irena, te acostumaste a andar entre véus, sem coragem de rasgá-los. "
    "Não é a escuridão que te ameaça, mas a ilusão que inventaste para sobreviver.'\n";

    const char *historia3 =
    "\nO salão estremeceu. As paredes agora eram feitas de vidro escuro, "
    "e atrás dele vultos se moviam, como memórias presas em sombras. "
    "Irena quis gritar, mas sua voz soou como se viesse de outra boca.\n\n"

    "Soraya suspirou, quase com compaixão:\n"
    "'A Lua é armadilha e guia. Podes te perder nas mentiras que criaste... "
    "ou finalmente admitir que tua própria escuridão também te pertence.'\n\n"

    "Liora completou, num sussurro baixo, como se viesse de dentro da mente de Irena:\n"
    "'Não temas o reflexo, coruja. Teme apenas o dia em que não reconhecerás quem nele habita.'\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
}

// =======================================================================================================================
// CAMINHO 1_3_1_2 — A ESTRELA
// =======================================================================================================================
// Justificativa de pontos:
// A Estrela simboliza esperança, orientação e inspiração em meio às dificuldades.
// Ao escolhê-la, Irena opta por seguir uma luz que guia, mesmo que distante, lembrando-a de seu valor e resiliência.
// Essa escolha encoraja autoconhecimento e perseverança, destacando a força interior que a mantém firme diante dos desafios.
// Por isso, é uma escolha de PONTO BOM, pois promove crescimento, clareza e determinação para seu caminho futuro.
// =======================================================================================================================

void decisao1_3_1_2(void) {
    const char *historia =
    "\nIrena deixou os dedos correrem pela mesa até pousarem sobre a Estrela. "
    "Assim que a carta foi revelada, um brilho suave inundou o salão. "
    "Não era a claridade incandescente do Sol, mas uma luz calma, distante, "
    "como a promessa de algo maior do que ela mesma.\n\n"

    "Soraya sorriu, um sorriso sereno, quase maternal:\n"
    "'A Estrela... guia de viajantes e desesperados, sinal de esperança quando a noite parece eterna. "
    "Escolheste não o fogo que cega, mas a centelha que orienta.'\n\n"

    "Liora ergueu o olhar para o teto, como se contemplasse céus invisíveis:\n"
    "'Mas cuidado, coruja. A Estrela também lembra aquilo que nunca se alcança. "
    "Luz distante pode inspirar... ou torturar quem a persegue sem descanso.'\n";

    const char *historia1 =
    "\nO ambiente se transformou. O teto do salão desapareceu, e acima dela estendia-se "
    "um céu imenso e profundo, pontilhado de constelações. "
    "Cada estrela parecia pulsar, como se guardasse memórias e destinos dentro de si.\n\n"

    "Soraya apontou para uma delas:\n"
    "'Vês aquela estrela? Brilha sozinha, isolada, mas nunca deixa de iluminar. "
    "Assim foste tu, Irena, entre colegas que te viravam o rosto. "
    "Mesmo rejeitada por tua cor, por tua feitiçaria, tua luz nunca se apagou.'\n\n"

    "A voz de Soraya ecoava como se viesse de um lugar além do tempo:\n"
    "'E ainda assim, sofrestes em silêncio, perguntando-te se havia algum valor em resistir.'\n";

    const char *historia2 =
    "Irena sentiu os olhos marejarem. As memórias voltaram com força: "
    "as tardes na escola em que tentava se aproximar e era afastada; "
    "os olhares desconfiados de vizinhos que a chamavam de bruxa; "
    "as noites em que discutia com os pais, implorando para ser aceita como era.\n\n"

    "Liora falou, sua voz grave e certeira:\n"
    "'A Estrela não é apenas esperança. É também solidão. "
    "Quem a segue, muitas vezes, caminha só. "
    "Teus pais não entenderam tua luz e, com medo do que não podiam controlar, "
    "tentaram apagá-la com gritos e proibições.'\n\n"

    "O céu estrelado brilhou mais intensamente, como se respondesse às palavras da cartomante. "
    "As constelações se moveram, revelando imagens do caminho de Irena: "
    "a menina solitária, a jovem discutindo com a família, a feiticeira escondendo seu poder "
    "para não ser perseguida.\n\n";

    const char *historia3 =

    "Soraya suspirou, com ternura:\n"
    "'Mesmo na escuridão mais cruel, tua estrela permaneceu acesa. "
    "E agora, tens de decidir: deixá-la brilhar distante e inalcançável... "
    "ou usá-la como guia para construir teu próprio destino.'\n\n"

    "Liora completou, em tom baixo, como uma bênção e um aviso:\n"
    "'A Estrela te chama, coruja. "
    "Segui-la poderá ser dádiva ou condenação. "
    "A escolha é tua — e, ao escolhê-la, escolherás também quem realmente és.'\n\n"

    "O silêncio da noite envolveu Irena. "
    "Acima, a Estrela ardia em fogo sereno, esperando sua decisão. "
    "E dentro dela, pela primeira vez, não havia apenas dor... "
    "mas a possibilidade real de um recomeço.\n";


    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
}
// =======================================================================================================================
// CAMINHO 1_3_1_3 — OS PÁSSAROS
// =======================================================================================================================
// Justificativa de pontos:
// Os Pássaros representam as vozes do passado e do presente que moldaram Irena — algumas ferem, outras ensinam.
// Essa escolha a força a encarar dores antigas, memórias de traumas e críticas, mas também mostra os pequenos apoios e inspirações que a fortaleceram.
// É uma experiência intensa, que mistura sofrimento e aprendizado, mas o peso da dor prevalece.
// Por essa razão, agora será uma escolha de PONTO NEGATIVO, pois a experiência fere mais do que fortalece.

void decisao1_3_1_3(void) {
    const char *historia =
    "\nIrena fechou os olhos, ouvindo o silêncio denso da sala. Quando os abriu, sua mão pousou sobre a terceira carta.\n"
    "— Os Pássaros.\n\n"

    "O ar pareceu vibrar. Ao redor, ouviu-se um bater de asas invisíveis, como se centenas de aves preenchessem o teto escuro.\n"
    "Sons se multiplicavam, ecos de vozes sussurradas e gritadas, como memórias presas em vento.\n\n"

    "Soraya ergueu um dedo, sorrindo:\n"
    "'Ah... escolheste as vozes, coruja. As vozes que nunca te deixaram em paz, mas que também podem te ensinar a falar.'\n\n"

    "Liora, séria, apenas murmurou:\n"
    "'Nem todo canto é canção. Alguns são gritos de faca. Prepara teu coração, porque os pássaros trazem tanto ferida quanto libertação.'\n";

    const char *historia1 =
    "\nAs vozes começaram a tomar forma. Primeiro, os colegas da escola: risadas afiadas, palavras cuspidas como pedras.\n"
    "'Negra amaldiçoada!' — 'Feiticeira!' — 'Não toque nela, vai trazer azar!' \n\n"
    "Cada palavra era um bico bicando sua pele, arrancando pedaços de sua infância.\n"

    "Soraya suspirou, quase com pesar:\n"
    "'Foram pássaros enjaulados em ignorância, mas usaram suas asas para te ferir. "
    "Eles nunca perceberam que te davam, junto da dor, o dom da escuta — e da resposta.'\n";

    const char *historia2 =
    "\nOutras vozes surgiram: a de seu pai, fria como aço, repetindo que ela traria vergonha à família. "
    "A da mãe, quebrada, pedindo que fosse 'normal', como se existir fosse um erro.\n\n"
    "Esses pássaros não voavam: batiam asas presas, tentando calá-la antes que pudesse se tornar maior do que a própria casa.\n"

    "Liora falou, firme como sentença:\n"
    "'As vozes da família são as que mais pesam, porque ecoam dentro da alma. "
    "Mas até o ninho mais cruel pode ensinar a ave a voar — justamente porque não lhe resta abrigo.'\n";

    const char *historia3 =
    "\nDe repente, os murmúrios mudaram. Entre os gritos e insultos, surgiram vozes suaves: "
    "uma professora que um dia lhe disse em segredo que ela tinha olhos fortes demais para não enxergar longe, "
    "um vizinho que lhe ofereceu chá quando a viu chorando, "
    "a amiga que a convidou para sua primeira simulação, plantando em silêncio a chama que nunca mais apagaria.\n\n"

    "Soraya abriu os braços, como quem acolhe as asas invisíveis:\n"
    "'Nem todo canto é cruel. Alguns pássaros sempre souberam que tua voz merecia ecoar. "
    "E cada palavra deles, mesmo pequena, foi um sopro de ar para teus pulmões cansados.'\n";

    const char *historia4 =
    "\nAs aves, antes caóticas, começaram a formar um redemoinho acima de sua cabeça. "
    "As asas batiam em uníssono, um coro de memórias e futuros possíveis.\n\n"

    "Liora ergueu os olhos, e sua voz soou como um trovão contido:\n"
    "'Agora sabes, Irena: as vozes podem aprisionar, mas também libertar. "
    "Tu és feita de todos os cantos — os que tentaram te calar e os que te ensinaram a falar. "
    "A pergunta é: vais repetir o coro dos gritos ou criar teu próprio canto?'\n\n"

    "E então o redemoinho desfez-se em poeira dourada, que pousou leve sobre seus ombros. "
    "Irena respirou fundo, sentindo que, pela primeira vez, não carregava apenas ruídos, mas asas.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
}


// ======================================================================
// CAMINHO 1_3_2_1 — O ESPELHO QUEBRADO
// ======================================================================
// Justificativa de pontos:
// O Espelho Quebrado simboliza a fragmentação da identidade de Irena.
// Ao encarar seus reflexos distorcidos, ela se vê em versões diferentes:
// algumas frágeis, outras furiosas, todas pedindo reconhecimento.
// É um caminho de confronto duro, onde a verdade surge aos estilhaços.
// Conta como ponto RUIM, pois expõe a dor de forma intensa e sem alívio.
// ======================================================================

void decisao1_3_2_1(void) {
    const char *historia = 
    "\nIrena tocou a carta e, de repente, o salão se encheu de estalos agudos.\n"
    "Espelhos surgiram das paredes, rachados, multiplicando seu rosto em mil pedaços.\n\n"
    "Cada reflexo piscava diferente: uma criança chorosa, uma jovem furiosa, uma mulher exausta.\n"
    "E nenhuma delas parecia inteira.\n";

    const char *historia1 =
    "\nSoraya riu baixo, quase divertida:\n"
    "'Olha só... um mosaico de ti mesma! Quantas Irenas cabem nesse corpo, coruja?\n"
    "Algumas pedem socorro, outras gritam vingança... e nenhuma sabe qual delas é a verdadeira.'\n\n"
    "Liora, com voz firme, respondeu:\n"
    "'O espelho não mente, apenas devolve o que já existe. Não temas as rachaduras — "
    "são as linhas daquilo que foi negado.'\n";

    const char *historia2 =
    "\nOs estilhaços começaram a se soltar das molduras e flutuar ao redor.\n"
    "Um deles mostrou Irena gritando contra a mãe. Outro, fugindo sozinha pelas ruas.\n"
    "Em outro, estava calada, como se nunca tivesse ousado existir.\n\n"
    "Cada pedaço tentava puxá-la para dentro de si, exigindo que aceitasse aquela versão.\n";

    const char *historia3 =
    "\nSoraya ergueu um caco e o virou contra a luz:\n"
    "'Afasta um, e outro se quebra. É um jogo sem fim. O que vais fazer, coruja?\n"
    "Ser todas elas... ou nenhuma?'\n\n"
    "Liora, mais próxima, concluiu:\n"
    "'Não é escolha de conforto. Quem encara o Espelho Quebrado sangra — mas aprende que "
    "a dor também pode ser voz.'\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
}

// ======================================================================
// CAMINHO 1_3_2_2 — A CHAMA OCULTA
// ======================================================================
// Justificativa de pontos:
// A Chama Oculta simboliza a energia reprimida de Irena.
// Ao escolhê-la, ela acessa forças internas intensas, mas instáveis.
// É poder e impulso, mas também risco: o fogo pode iluminar ou consumir.
// Conta como ponto NEUTRO, pois é ambivalente — não destrói, mas não garante salvação.
// ======================================================================

void decisao1_3_2_2(void) {
    const char *historia = 
    "\nQuando Irena tocou a carta, o ar se aqueceu como se o salão respirasse fogo.\n"
    "De fissuras invisíveis, pequenas brasas surgiram, espalhando faíscas pelo chão.\n"
    "E no centro da mesa, ergueu-se uma chama azul, pulsante, viva, mas sem consumir nada.\n";

    const char *historia1 =
    "\nSoraya estalou os dedos, encantada:\n"
    "'Ah, a Chama Oculta! O fogo que se escondeu dentro de ti todos esses anos...\n"
    "Silencioso, esperando a chance de arder. Mas cuidado, coruja:\n"
    "o mesmo calor que aquece pode te reduzir a cinzas.'\n\n"
    "Liora cruzou os braços, séria:\n"
    "'Esse fogo não é inimigo nem aliado. É reflexo daquilo que nunca disseste.\n"
    "Se o domares, ele será luz. Se o negas, ele te devora.'\n";

    const char *historia2 =
    "\nAs chamas começaram a dançar, formando silhuetas ao redor de Irena.\n"
    "Eram lembranças feitas de fogo: colegas que riam dela, o pai furioso,\n"
    "as noites solitárias em que se sentia invisível.\n"
    "Mas cada lembrança ardia de forma diferente — algumas queimavam, outras aqueciam.\n";

    const char *historia3 =
    "\nSoraya sussurrou, hipnotizada pelas figuras incandescentes:\n"
    "'Eis teu dilema: usas o fogo para incendiar o mundo que te feriu?\n"
    "Ou o guardas como chama de sobrevivência?'\n\n"
    "Liora, firme, completou:\n"
    "'Não há vitória sem custo. O fogo ilumina, mas também deixa marcas.\n"
    "Aceitá-lo é aceitar viver com cicatrizes em chamas.'\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
}


// ======================================================================
// CAMINHO 1_3_2_3 — O SUSSURRO DO ABISMO
// ======================================================================
// Justificativa de pontos:
// O Sussurro do Abismo simboliza a tentação do vazio: o chamado a desistir,
// a ceder ao silêncio e à escuridão interior. É um mergulho perigoso,
// que oferece falsa paz, mas ameaça engolir tudo que Irena construiu.
// Conta como ponto RUIM, pois há perda de si mesma na entrega ao vazio.
// ======================================================================

void decisao1_3_2_3(void) {
    const char *historia = 
    "\nAo tocar a carta, Irena sentiu o chão se abrir sob seus pés.\n"
    "Não havia queda, apenas um vazio negro que sussurrava seu nome em ecos distantes.\n"
    "O ar ficou rarefeito, como se até respirar fosse uma escolha.\n";

    const char *historia1 =
    "\nSoraya inclinou-se sobre a mesa, olhos brilhando com crueldade doce:\n"
    "'Ah, pequena coruja... o Abismo não grita, ele convida.\n"
    "Promete descanso, promete silêncio... e tudo o que pede em troca é você mesma.'\n\n"
    "Liora, pálida, respondeu em tom seco:\n"
    "'Esse chamado não é promessa, é armadilha. Quem se entrega ao Abismo\n"
    "não encontra paz — apenas ausência de si.'\n";

    const char *historia2 =
    "\nDo vazio, vozes começaram a se formar: eram suas próprias dúvidas,\n"
    "palavras que ela já dissera a si mesma em noites solitárias:\n"
    "'Talvez eu não seja suficiente... Talvez seja melhor desaparecer...'\n\n"
    "Cada frase ecoava como corda puxando-a para dentro da escuridão.\n";

    const char *historia3 =
    "\nSoraya riu, suave, como quem embala uma criança:\n"
    "'Não dói, sabes? O Abismo não julga, não cobra. Ele simplesmente... engole.'\n\n"
    "Liora, firme, ergueu a voz:\n"
    "'Mas se cederes, o que restará? O mundo já tentou te apagar tantas vezes.\n"
    "Não entregues às sombras aquilo que é teu por direito: existir.'\n";

    const char *historia4 =
    "\nO vazio avançou, cercando os pés de Irena como mar profundo.\n"
    "Ela fechou os olhos e sentiu a vertigem: um chamado doce, quase irresistível.\n"
    "Não havia promessas, apenas a tentação de não precisar lutar nunca mais.\n\n"
    "Mas quando abriu os olhos, percebeu as duas diante dela:\n"
    "Soraya sorrindo como quem celebra uma queda inevitável,\n"
    "e Liora segurando sua mão com força, como âncora.\n\n"
    "O Abismo recuou um pouco, mas o sussurro permaneceu —\n"
    "um lembrete eterno de que a tentação de desistir nunca desaparece por completo.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
}

// ======================================================================
// CAMINHO 1_3_3_1 — O CÍRCULO
// ======================================================================
// Justificativa de pontos:
// O Círculo simboliza o eterno retorno: viver, errar, aprender — e repetir.
// Não é condenação absoluta, mas também não é libertação plena.
// É um estado de aceitação, onde Irena percebe que nem tudo se rompe,
// mas também nem tudo se perde: alguns ciclos só podem ser vividos outra vez.
// Conta como ponto NEUTRO, pois equilibra limite e continuidade.
// ======================================================================

void decisao1_3_3_1(void) {
    const char *historia = 
    "\nIrena tocou a carta marcada pelo símbolo circular.\n"
    "No mesmo instante, o salão girou sobre si mesmo.\n"
    "As paredes, os espelhos, até as próprias feiticeiras se duplicaram\n"
    "em voltas contínuas, como se o mundo fosse uma roda sem eixo.\n";

    const char *historia1 =
    "\nSoraya riu, dando uma volta sobre os próprios pés:\n"
    "'Eis o destino mais tedioso e mais cruel: repetir-se!\n"
    "As mesmas dores, os mesmos amores, os mesmos erros...\n"
    "Até aprender a rir deles, ou a chorar melhor.'\n\n"
    "Liora ergueu os olhos para Irena, a voz firme como pedra:\n"
    "'O círculo não perdoa. Ele retorna até que reconheças o que negaste.\n"
    "Não é punição, é lembrança. E a lembrança nunca dorme.'\n";

    const char *historia2 =
    "\nO chão se abriu em padrões de areia, desenhando círculos concêntricos.\n"
    "Cada volta mostrava uma versão de si mesma: criança, jovem, velha,\n"
    "todas andando em círculos, repetindo passos conhecidos.\n"
    "Quando uma tropeçava, a outra caía também. Quando uma sorria,\n"
    "todas ecoavam aquele riso frágil.\n";

    const char *historia3 =
    "\nSoraya inclinou-se, observando as figuras rodopiarem:\n"
    "'Vês? Não há novidade, apenas variação do mesmo tema.\n"
    "Mas às vezes, coruja... a repetição é o único modo de suportar o caos.'\n\n"
    "Liora avançou um passo e tocou a mão de Irena, ancorando-a:\n"
    "'Aceita o Círculo não como prisão, mas como espelho.\n"
    "Cada volta é chance de enxergar um detalhe que antes ignoraste.\n"
    "Se aprenderes, o giro não será em vão.'\n";

    const char *historia4 =
    "\nA roda diminuiu, e o salão voltou a se firmar.\n"
    "Mas no peito de Irena, algo permanecia: a sensação de andar e retornar,\n"
    "sempre voltando ao ponto inicial, mas nunca do mesmo jeito.\n"
    "Não havia vitória, nem derrota — apenas continuidade.\n\n"
    "E pela primeira vez, ela entendeu que até o círculo pode ensinar\n"
    "quando se olha com novos olhos.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
}

// ======================================================================
// CAMINHO 1_3_3_2 — O ABISMO
// ======================================================================
// Justificativa de pontos:
// O Abismo simboliza a tentação da dissolução: desistir de si mesma,
// entregar-se ao nada como forma de descanso. É um falso consolo,
// pois o vazio não acolhe, apenas engole. 
// É um caminho RUIM, já que leva Irena a perder parte de sua essência,
// tornando-se sombra do que poderia ser.
// ======================================================================

void decisao1_3_3_2(void) {
    const char *historia = 
    "\nA carta foi virada, e o salão inteiro pareceu ser tragado.\n"
    "Não havia paredes, nem teto, nem chão — apenas um vazio sem fim,\n"
    "negro como noite sem estrelas.\n"
    "O coração de Irena afundou, e o silêncio ao redor sussurrava seu nome.\n";

    const char *historia1 =
    "\nSoraya abriu os braços, sorrindo como anfitriã de um banquete:\n"
    "'Bem-vinda ao Abismo, pequena coruja! Aqui não há dor, nem esperança.\n"
    "Apenas descanso eterno, sem exigências, sem fardos...'\n\n"
    "Liora, rígida, deu um passo à frente, sua voz ecoando grave:\n"
    "'Não te deixes enganar. O Abismo não é lar, é esquecimento.\n"
    "Ele promete paz, mas toma de ti até o direito de existir.'\n";

    const char *historia2 =
    "\nFormas começaram a surgir no vazio: eram sombras de si mesma,\n"
    "cada uma sem rosto, caminhando em círculos lentos.\n"
    "Elas não sofriam, não choravam, não lutavam — apenas vagavam,\n"
    "sem nunca olhar para nada, nem para si.\n";

    const char *historia3 =
    "\nSoraya sussurrou no ouvido dela, doce como veneno:\n"
    "'Imagina, coruja... nunca mais sentir dor, nunca mais temer.\n"
    "É só deixar-se cair, e o Abismo fará o resto.'\n\n"
    "Mas Liora estendeu a mão, o olhar duro como lâmina:\n"
    "'Escuta-me, Irena: cair é fácil, mas é também perder o que te torna viva.\n"
    "És feita de luta, de fogo e de memória. O Abismo apagará tudo isso.'\n";

    const char *historia4 =
    "\nIrena sentiu o corpo pender para frente, como se o vazio a chamasse.\n"
    "Por um instante, quase desejou ceder, deixar-se dissolver.\n"
    "Mas o toque firme da mão de Liora a puxou de volta.\n\n"
    "O Abismo rugiu, frustrado, e se recolheu, mas não desapareceu.\n"
    "Seu sussurro permaneceu como cicatriz em sua mente:\n"
    "um convite eterno a desistir, sempre à espreita, sempre tentador.\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
}

// ======================================================================
// CAMINHO 1_3_3_3 — A FÊNIX
// ======================================================================
// Justificativa de pontos:
// A Fênix representa o renascimento através do fogo. 
// É a aceitação da dor como combustível para a transformação, 
// e a coragem de queimar o velho para abrir espaço ao novo. 
// Conta como ponto BOM, pois traz libertação, clareza e esperança.
// ======================================================================

void decisao1_3_3_3(void) {
    const char *historia = 
    "\nAssim que Irena escolheu a carta, uma labareda dourada tomou o salão.\n"
    "Não era destruição, mas purificação: cada chama dançava como pena em voo.\n"
    "No centro do fogo, formava-se a silhueta de uma ave imensa — a Fênix,\n"
    "com asas feitas de luz incandescente e olhos que ardiam como sóis.\n";

    const char *historia1 =
    "\nSoraya levou a mão ao peito, fascinada:\n"
    "'Ah... que espetáculo! Aquele que queima, mas também canta.\n"
    "Coruja, escolheste o fogo que não consome — o fogo que recria.'\n\n"
    "Liora curvou a cabeça, respeitosa:\n"
    "'A Fênix não concede nada de graça. Para renascer, precisas aceitar a morte\n"
    "do que já não te serve. É dor e milagre, no mesmo sopro.'\n";

    const char *historia2 =
    "\nO fogo cercou Irena, mas não a feriu. Em vez disso, cada labareda\n"
    "se prendia a lembranças antigas: as ofensas, os medos, as noites de solidão.\n"
    "Tudo ardia em silêncio, reduzido a cinzas que o vento levava.\n\n"
    "E no lugar da dor, brotava espaço: vasto, leve, aberto como horizonte.\n";

    const char *historia3 =
    "\nSoraya sussurrou, com um brilho de orgulho nos olhos:\n"
    "'Vês? Não restam correntes, apenas asas. És tua própria fogueira,\n"
    "e dela nasces inteira.'\n\n"
    "Liora completou, firme:\n"
    "'Não te esqueças: o renascimento não apaga as cicatrizes,\n"
    "ele as grava em ouro. És mais forte porque queimaste o que te prendia.'\n";

    const char *historia4 =
    "\nDas cinzas ergueu-se a Irena renovada. Sua pele ardia em símbolos dourados,\n"
    "como tatuagens de fogo, e atrás dela cintilavam asas breves —\n"
    "não de carne, mas de pura energia.\n\n"
    "A Fênix soltou um grito que encheu o salão, depois dissolveu-se em luz,\n"
    "fundindo-se ao peito dela. O fogo apagou-se, mas a chama permaneceu dentro dela,\n"
    "pulsando como segundo coração.\n";

    const char *historia5 =
    "\nSoraya aplaudiu, em êxtase contido:\n"
    "'Agora não és apenas coruja, pequena... és Fênix.\n"
    "E nenhum abismo, nenhum espelho, poderá apagar isso.'\n\n"
    "Liora sorriu pela primeira vez, breve mas real:\n"
    "'És prova de que até a ruína pode florescer em luz. Vai, Irena.\n"
    "O mundo não te verá mais como eras — e tu também não.'\n";

    printf("%s\n", historia);
    continuar();
    printf("%s\n", historia1);
    continuar();
    printf("%s\n", historia2);
    continuar();
    printf("%s\n", historia3);
    continuar();
    printf("%s\n", historia4);
    continuar();
    printf("%s\n", historia5);
}