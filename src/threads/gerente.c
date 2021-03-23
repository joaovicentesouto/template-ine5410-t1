#include "config.h"
#include "partida.h"
#include "jogador.h"

/**
 * ATENÇÃO: Você pode adicionar novas funções com PUBLIC para serem usadas por
 * outros arquivos e adicionar a assinatura da função no .h referente.
 */

/*============================================================================*
 * Protótipo das funções locais.                                              *
 *============================================================================*/

PRIVATE void gerente_coordena_partida(void);

/*============================================================================*
 * gerente_setup()                                                            *
 *============================================================================*/

/**
 * @brief Configura os recursos locais do gerente se houverem.
 */
PUBLIC void gerente_setup(void)
{
}

/*============================================================================*
 * gerente_cleanup()                                                          *
 *============================================================================*/

/**
 * @brief Limpa os recursos locais do gerente se houverem.
 */
PUBLIC void gerente_cleanup(void)
{
}

/*============================================================================*
 * Responsabilidades do Gerente.                                              *
 *============================================================================*/

/**
 * @brief Main do gerente.
 *
 * Descrição: O Gerente deve coordenar as partidas, ou seja:
 * - Esperar que as equipes se formarem.
 * - Iniciar a partida.
 * - Enquanto o tempo de partida não ultrapassar params->partida_tempo_max
 *   e ainda existem jogadores vivos em ambas as equipes:
 * --- Esperar params->delay_gerente
 * --- Perioricamente, curar todos os jogadores vivos com params->dano_cura.
 *
 * ATENÇÃO: Você deve incrementar os contadores do sim_t referente a partida
 * e jogadores curados.
 */
PUBLIC void * gerente_fn(void * arg)
{
	plog("[gerente] Iniciou.\n");

	if (false)
		gerente_coordena_partida();

	return (NULL);
}

/*============================================================================*
 * gerente_cura_jogadores()                                                   *
 *============================================================================*/

/**
 * @brief Gerente cura os jogadores.
 */
PRIVATE int gerente_cura_jogadores(void)
{
	int curados = 0;

	plog("[gerente] Curando jogadores.\n");

	return (curados);
}

/*============================================================================*
 * gerente_coordena_partida()                                                 *
 *============================================================================*/

/**
 * @brief Loop principal da partida.
 */
PRIVATE void gerente_coordena_partida(void)
{
	plog("[gerente] Coordenando partida.\n");

	if (false)
		gerente_cura_jogadores();
}

