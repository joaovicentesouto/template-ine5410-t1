#include "config.h"
#include "prateleira.h"
#include "partida.h"

/**
 * ATENÇÃO: Você pode adicionar novas funções com PUBLIC para serem usadas por
 * outros arquivos e adicionar a assinatura da função no .h referente.
 */

/*============================================================================*
 * Definição das variáveis globais (publicas ou privadas)                     *
 *============================================================================*/

/*============================================================================*
 * limpador_setup()                                                           *
 *============================================================================*/

/**
 * @brief Configura os recursos locais do limpador caso existam.
 */
PUBLIC void limpador_setup(void)
{
}

/*============================================================================*
 * limpador_cleanup()                                                         *
 *============================================================================*/

/**
 * @brief Limpa os recursos locais do limpador caso existam.
 */
PUBLIC void limpador_cleanup(void)
{
}

/*============================================================================*
 * limpador_requisita_limpeza()                                               *
 *============================================================================*/

/**
 * @brief Requisita a limpeza de equipamentos.
 *
 * @param equipamentos Equipamentos para limpeza.
 *
 * Descrição: Os equipamentos devem ser passados para o limpador nesta função.
 */
PUBLIC void limpador_requisita_limpeza(equipamentos_t * equipamentos)
{
	assert(equipamentos);

	/* Requisita limpeza. */

	/* Tira equipamentos do jogador. */
	equipamentos->arma     = -1;
	equipamentos->capacete = -1;
	equipamentos->colete   = -1;
}

/*============================================================================*
 * Responsabilidades do Limpador.                                             *
 *============================================================================*/

/**
 * @brief Main do limpador.
 *
 * Descrição: O limpador deve esperar equipamentos para limpar enquanto
 * houverem partidas e jogadores. Quando seu trabalho terminar, o mesmo deve
 * sair.
 */
PUBLIC void * limpador_fn(void * arg)
{
	return (NULL);
}

