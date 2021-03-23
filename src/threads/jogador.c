#include "config.h"
#include "arranjo.h"
#include "equipe.h"
#include "partida.h"
#include "prateleira.h"
#include "jogador.h"
#include "limpador.h"
#include "porteiro.h"

/**
 * ATENÇÃO: Você pode adicionar novas funções com PUBLIC para serem usadas por
 * outros arquivos e adicionar a assinatura da função no .h referente.
 */

/*============================================================================*
 * Protótipo das funções locais.                                              *
 *============================================================================*/

/**
 * @brief Funções que você deve implementar.
 *
 * A implementação deve ser realizada nas funções a baixo da função Main do
 * jogador.
 */
PRIVATE void jogador_escolhe_equipe(jogador_t * jogador);
PRIVATE void jogador_aloca_equipamento(jogador_t * jogador);
PRIVATE void jogador_espera_partida_comecar(jogador_t * jogador);
PRIVATE void jogador_joga_partida(jogador_t * jogador);
PRIVATE void jogador_espera_partida_terminar(jogador_t * jogador);
PRIVATE void jogador_libera_equipamento(jogador_t * jogador);
PRIVATE void jogador_sai_equipe(jogador_t * jogador);

/*============================================================================*
 * Responsabilidades do Jogador.                                              *
 *============================================================================*/

/**
 * @brief Main de um jogador.
 *
 * Descrição Geral:
 *
 * 1. Não modificar ou introduzir novas chamadas dentro do main do
 * jogador. Você deve implementar o que se espera de cada função seguindo
 * a descrição da mesma. Isto facilitará na avaliação do teu trabalho.
 *
 * 2. Você pode introduzir novas funções e estruturas para auxiliar, caso
 * necessário. Entretanto, essas chamadas abaixo são obrigatórias e devem
 * reproduzir o comportamento esperado.
 *
 * Seus objetivos são:
 * - Coordenar as threads (jogador, gerente e limpador) para que duas equipes
 *   de jogadores disputem uma partida de LazerGun.
 * - Jogadores vão ser criados aleatoriamente e tentarão participar de uma
 *   partida.
 * - O jogador deve iniciar tentando entrar em uma equipe (A ou B). Cada thread
 *   só pode estar em uma única equipe.
 * - Uma vez alocado em uma equipe, o jogador deve pegar um colete, um capacete
 *   e uma arma da prateleira (código responsável por gerenciar o alocação dos
 *   equipamentos).
 * - Jogadores prontos para a partida devem esperar que as duas equipes estejam
 *   completas.
 * - Se uma partida estiver em andamento, novos jogadores devem esperar a sua
 *   conclusão. Ou seja, eles não podem entrar em uma equipe enquanto uma
 *   partida estiver em andamento ou esteja cheia.
 * - Durante a partida, o jogador deve escolher aleatoriamente um jogador
 *   inimigo e causar dano a ele. Após isso, o jogador deve esperar um tempo
 *   aleatório para atacar novamente.
 * - O gerente deve esperar que todos os jogadores de uma equipe estejam mortos
 *   ou o tempo limite estourar para finalizar uma partida.
 * - O gerente também deve, periodicamente, curar todos os jogadores, caso
 *   eles não estejam mortos (vida > 0 e status != JOGADOR_MORTO).
 * - Jogadores mortos devem esperar a partida terminar.
 * - Depois de uma partida terminar, o jogador deve liberar a vaga da equipe
 *   e, depois, requisitar a limpeza dos equipamentos para o limpador.
 * - O limpador limpa os equipamentos e coloca eles novamente na prateleira.
 * - Quando todas as partidas terminarem, o programa deve finalizar a execução.
 *
 * ATENÇÃO: A criação e liberação dos recursos de um jogador é responsabilidade do
 * porteiro. O mesmo já está implementado e não pode ser alterado.
 *
 * ATENÇÃO: Você deve incrementar os contadores do sim_t referente ao jogadores
 * mortos.
 */
PUBLIC void * jogador_fn(void * arg)
{
	jogador_t * jogador;

	jogador = (jogador_t *) arg;

	plog("[jogador %d] Chegou na Arena.\n", jogador->id);

	/* ATENÇÃO: Não remover a chamada a baixo. */
	jogador_escolhe_equipe(jogador);

	/* ATENÇÃO: Não remover a chamada a baixo. */
	jogador_aloca_equipamento(jogador);

	/* ATENÇÃO: Não remover a chamada a baixo. */
	jogador_espera_partida_comecar(jogador);

	/* ATENÇÃO: Não remover a chamada a baixo. */
	jogador_joga_partida(jogador);

	/* ATENÇÃO: Não remover a chamada a baixo. */
	jogador_espera_partida_terminar(jogador);

	/* ATENÇÃO: Não remover a chamada a baixo. */
	jogador_sai_equipe(jogador);

	/* ATENÇÃO: Não remover a chamada a baixo. */
	jogador_libera_equipamento(jogador);

	/* ATENÇÃO: Não remover a chamada a baixo. */
	porteiro_checklist(jogador);

	plog("[jogador %d] Vai embora.\n", jogador->id);

	return (NULL);
}

/*============================================================================*
 * jogador_escolhe_equipe()                                                   *
 *============================================================================*/

/**
 * @brief O jogador deve tentar entrar em uma equipe que ainda tenha vagas
 * disponíveis. Caso a partida já tenha iniciado, nenhum jogador pode entrar em
 * uma equipe.
 *
 * A quantidade de jogadores por equipe é constante e está definida na
 * variável global params.
 *
 * A variável global partida contém as estruturas das equipes. Você deve
 * coordenar os jogadores para entrarem em alguma dessas equipes.
 */
PRIVATE void jogador_escolhe_equipe(jogador_t * jogador)
{
	jogador->status = JOGADOR_ESCOLHENDO_EQUIPE;

	plog("[jogador %d] Escolhendo a equipe.\n", jogador->id);

	/* Escolha uma equipe. */

	plog("[jogador %d] Escolheu a equipe %d.\n", jogador->id, jogador->equipe);
}

/*============================================================================*
 * jogador_aloca_equipamento()                                                *
 *============================================================================*/

/**
 * @brief Após entrar numa equipe, o jogador vai até a prateleira pegar seus
 * equipamentos.
 *
 * Vá até o arquivo src/estruturas/prateleira.c para implementa-lá.
 */
PRIVATE void jogador_aloca_equipamento(jogador_t * jogador)
{
	jogador->status = JOGADOR_PEGANDO_EQUIPAMENTO;

	prateleira_pega_equipamentos(&jogador->equipamentos);

	plog("[jogador %d] Alocou os equipamentos [%d, %d, %d].\n",
		jogador->id,
		jogador->equipamentos.colete,
		jogador->equipamentos.capacete,
		jogador->equipamentos.arma
	);
}

/*============================================================================*
 * jogador_espera_partida_comecar()                                           *
 *============================================================================*/

/**
 * @brief O jogador deve esperar que as equipes estejam completas
 * (params->jogadores_por_equipe em cada equipe) para começarem a jogar.
 */
PRIVATE void jogador_espera_partida_comecar(jogador_t * jogador)
{
	jogador->status = JOGADOR_ESPERANDO;

	plog("[jogador %d] Esperando partida começar.\n", jogador->id);

	/* Espere as duas equipes se formarem. */

	plog("[jogador %d] Indo jogar.\n", jogador->id);
}

/*============================================================================*
 * jogador_joga_partida()                                                     *
 *============================================================================*/

/**
 * @brief Enquanto a partida estiver em andamento, jogadores vivos devem
 * procurar um alvo aleatório na equipe adversária e causar
 * um dano aleatório (params->dano_min <= dano < params->dano_max) no alvo.
 * Caso a vida do adversário fique menor ou igual a zero, o adversário deve ser
 * movido pro estado MORTO e não pode mais continuar jogando.
 * Depois de atacar, o jogador deve esperar um tempo aleatório antes de atacar
 * novamente (params->delay_min <= t < params->delay_max);
 */
PRIVATE void jogador_joga_partida(jogador_t * jogador)
{
	jogador->status = JOGADOR_JOGANDO;

	plog("[jogador %d] Jogando.\n", jogador->id);

	/* Implemente a lógica do jogo aqui. */

	plog("[jogador %d] Saindo do jogo.\n", jogador->id);
}

/*============================================================================*
 * jogador_espera_partida_terminar()                                          *
 *============================================================================*/

/**
 * @brief Jogadores que morreram ou terminaram de jogar devem esperar a partida
 * terminar nesta função.
 */
PRIVATE void jogador_espera_partida_terminar(jogador_t * jogador)
{
	plog("[jogador %d] Esperando a partida terminar.\n", jogador->id);

	/* Espere a partida terminar. */
}

/*============================================================================*
 * jogador_sai_equipe()                                                       *
 *============================================================================*/

/**
 * @brief Após o fim da partida, o jogador deve liberar a vaga da equipe para
 * outra pessoa.
 *
 * ATENÇÃO: Não altere a ordem das operações no main do jogador, ou seja,
 * o jogador deve sair da equipe antes de liberar os equipamentos.
 */
PRIVATE void jogador_sai_equipe(jogador_t * jogador)
{
	plog("[jogador %d] Libera vaga.\n", jogador->id);

	/* Saia da equipe. */
}

/*============================================================================*
 * jogador_libera_equipamento()                                               *
 *============================================================================*/

/**
 * @brief Após sair da equipe, o jogador deve solicitar ao limpador que
 * higienize os equipamento. O limpador deve ser responsável por devolvê-los
 * à prateleira.
 */
PRIVATE void jogador_libera_equipamento(jogador_t * jogador)
{
	jogador->status = JOGADOR_LIBERANDO_EQUIPAMENTO;

	plog("[jogador %d] Libera equipamentos.\n", jogador->id);

	/* Libera equipamentos. */
	limpador_requisita_limpeza(&jogador->equipamentos);
}

