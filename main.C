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
void decisao1_1_2(void);

void decisao1_2(void);
void decisao1_3(void);


void decisao1_1_2_1(void); 
void decisao1_1_2_2(void); 
void decisao1_1_2_3(void); 
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
            //decisao2();
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
            //decisao1_2();
            break;
        case 3:
            pontoBom++;
            //decisao1_3();
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
            //decisao1_1_3();
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
// CAMINHO 1_1_2_1
// =======================================================================================================================

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