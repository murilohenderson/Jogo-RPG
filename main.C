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
            //decisao1_1_2();
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