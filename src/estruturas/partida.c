#include "partida.h"

/**
 * ATENÇÃO: Você pode adicionar novas funções com PUBLIC para serem usadas por
 * outros arquivos e adicionar a assinatura da função no .h referente.
 */

/*============================================================================*
 * Definição das variáveis globais (públicas ou privadas)                     *
 *============================================================================*/

/**
 * ATENÇÃO: Você pode adicionar novas funções com PUBLIC para serem usadas por
 * outros arquivos e adicionar a assinatura da função no .h referente.
 */

/**
 * @brief Definição de variáveis globais.
 */
PUBLIC partida_t * partida;

/*============================================================================*
 * partida_setup()                                                            *
 *============================================================================*/

/**
 * @brief Configura a estrutura de partida.
 */
PUBLIC void partida_setup(void)
{
	assert((partida = (partida_t *) malloc(sizeof(partida_t))) != NULL);

	/**
	 * Setup Equipes.
	 */
	equipe_setup(&partida->equipe_a, EQUIPE_A, params->jogadores_por_equipe);
	equipe_setup(&partida->equipe_b, EQUIPE_B, params->jogadores_por_equipe);

	/**
	 * Setup Atributos da partida.
	 */
	partida->status = PARTIDA_NAO_PREPARADA;

	/**
	 * Complemente se precisar.
	 */
}

/*============================================================================*
 * partida_cleanup()                                                          *
 *============================================================================*/

/**
 * @brief Limpa os recursos de uma partida.
 */
PUBLIC void partida_cleanup(void)
{
	/**
	 * Cleanup Equipes.
	 */
	equipe_cleanup(&partida->equipe_a);
	equipe_cleanup(&partida->equipe_b);

	/**
	 * Complemente se precisar.
	 */

	/* Libera partida. */
	free(partida);
}

/*============================================================================*
 * partida_status()                                                           *
 *============================================================================*/

/**
 * @brief Verifica o status da partida.
 *
 * @return Retorna o status da partida.
 */
PUBLIC partida_status_t partida_status(void)
{
	partida_status_t status;

	status = partida->status;

	return (status);
}

/*============================================================================*
 * partida_nomeia_vencedores()                                                *
 *============================================================================*/

/**
 * @brief Imprime equipe vencedora.
 */
PRIVATE void partida_print_resultado(int tempo_restante, int sobreviventes, partida_resultado_t res)
{
	switch (res)
	{
		case PARTIDA_RESULTADO_EQUIPE_A_VENCEU:
			plog("[resultado] Partida %d: Equipe A venceu com %d sobreviventes! (tempo %d/%d)\n",
				sim->partidas_jogadas,
				sobreviventes,
				tempo_restante,
				params->partida_tempo_max
			);
			break;

		case PARTIDA_RESULTADO_EQUIPE_B_VENCEU:
			plog("[resultado] Partida %d: Equipe B venceu com %d sobreviventes! (tempo %d/%d)\n",
				sim->partidas_jogadas,
				sobreviventes,
				tempo_restante,
				params->partida_tempo_max
			);
			break;

		case PARTIDA_RESULTADO_EMPATOU:
			plog("[resultado] Partida %d: Ocorreu um empate, quantidade de jogadores em cada equipe %d (tempo %d/%d)\n",
				sim->partidas_jogadas,
				sobreviventes,
				tempo_restante,
				params->partida_tempo_max
			);
			break;

		default:
			assert(false);
			break;
	}

	fflush(stdout);
}

/*============================================================================*
 * partida_nomeia_vencedores()                                                *
 *============================================================================*/

/**
 * @brief Verifica qual equipe venceu e imprime o resultado informando o tempo
 * restante da partida, a quantidade de sobreviventes na equipe vencedora (ou
 * em cada equipe se ouver empate) e o número da partida.
 *
 * Condições de vitória:
 * - Se ambas as equipes tiverem a mesma quantidade de jogadores vivos, ocorre
 *   um empate.
 * - Se uma equipe tiver 0 jogadores vivos, a outra equipe vence.
 *
 * Utilize a função partida_print_resultado para te auxiliar.
 */
PUBLIC void partida_nomeia_vencedores(int tempo_restante)
{
	/* Implemente. */

	if (false)
		partida_print_resultado(0, 0, PARTIDA_RESULTADO_INDEFINIDO);
}

