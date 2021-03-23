#include "prateleira.h"

/**
 * ATENÇÃO: Você pode adicionar novas funções com PUBLIC para serem usadas por
 * outros arquivos e adicionar a assinatura da função no .h referente.
 */

/*============================================================================*
 * Definição das variáveis globais (publicas ou privadas)                     *
 *============================================================================*/

/* Adicione variáveis locais. */

/*============================================================================*
 * prateleira_setup()                                                         *
 *============================================================================*/

/**
 * @brief Configura os recursos locais se existirem.
 */
PUBLIC void prateleira_setup(void)
{
	/* Complemente se precisar. */
}

/*============================================================================*
 * prateleira_setup()                                                         *
 *============================================================================*/

/**
 * @brief Limpa os recursos locais se existirem.
 */
PUBLIC void prateleira_cleanup(void)
{
	/**
	 * ATENÇÃO: A quantidade de equipamentos de cada tipo ao final da execução
	 * do programa deve ser igual a quantidade inicial.
	 */

	/* Complemente se precisar. */
}

/*============================================================================*
 * prateleira_pega_equipamentos()                                             *
 *============================================================================*/

/**
 * @brief Pega equipamentos.
 *
 * @return equipamentos Slot de equipamentos de um jogador.
 *
 * Descrição: O jogador deve tentar pegar da prateleira os equipamentos
 * necessários. Especificamente, um de cada tipo: colete, capacete e arma.
 *
 * Os equipamentos devem ser identificador únicos variando dentro do intervalo:
 * 0 <= ID < 2 * params->jogadores_por_equipe.
 *
 * ATENÇÃO: Um identificador deve ser único e não pode ser retornado se o mesmo
 * já estiver alocado para um jogador.
 *
 * Dica: Você deve utilizar uma estrutura de dados para armazenar os
 * identificadores dos equipamentos. Você pode utilizar o estrutura arranjo
 * (se implementou as funções dela).
 */
PUBLIC void prateleira_pega_equipamentos(equipamentos_t * equipamentos)
{
	assert(equipamentos);

	/* Complemente se precisar. */
}

/*============================================================================*
 * prateleira_libera_equipamentos()                                           *
 *============================================================================*/

/**
 * @brief Libera equipamentos após sua limpeza.
 *
 * @return equipamentos Slot de equipamentos limpos.
 *
 * Descrição: O limpador deve armazenas novamente os equipamentos que acabaram
 * de serem limpos.
 *
 * ATENÇÃO: Um identificador deve ser único e não pode ser retornado se o mesmo
 * já estiver alocado para um jogador.
 */
PUBLIC void prateleira_libera_equipamentos(equipamentos_t * equipamentos)
{
	assert(equipamentos);

	/* Complemente se precisar. */
}

