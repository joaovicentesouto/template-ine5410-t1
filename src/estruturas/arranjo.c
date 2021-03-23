#include "arranjo.h"

/**
 * ATENÇÃO: Você pode adicionar novas funções com PUBLIC para serem usadas por
 * outros arquivos e adicionar a assinatura da função no .h referente.
 */

/*============================================================================*
 * arranjo_iniciar()                                                          *
 *============================================================================*/

/**
 * @brief Inicia e aloca os recursos de um arranjo.
 *
 * @param arranjo    Ponteiro de um arranjo.
 * @param capacidade Tamanho do arranjo.
 */
PUBLIC void arranjo_iniciar(arranjo_t * arranjo, int capacidade)
{
	/* Implemente se for usar. */
}

/*============================================================================*
 * arranjo_destruir()                                                         *
 *============================================================================*/

/**
 * @brief Libera recursos de um arranjo.
 *
 * @param arranjo Ponteiro de um arranjo.
 */
PUBLIC void arranjo_destruir(arranjo_t * arranjo)
{
	/* Implemente se for usar. */
}

/*============================================================================*
 * arranjo_colocar()                                                          *
 *============================================================================*/

/**
 * @brief Coloca um elemento no arranjo.
 *
 * @param arranjo  Ponteiro de um arranjo.
 * @param elemento Elemento a ser armazenado no arranjo.
 */
PUBLIC void arranjo_colocar(arranjo_t * arranjo, void * elemento)
{
	/* Implemente se for usar. */
}

/*============================================================================*
 * arranjo_retirar()                                                          *
 *============================================================================*/

/**
 * @brief Retira um elemento do arranjo.
 *
 * @param arranjo Ponteiro de um arranjo.
 *
 * @return Se o arranjo estiver vazio retorna NULL. Caso contrário, retorna
 * um elemento do arranjo.
 */
PUBLIC void * arranjo_retirar(arranjo_t * arranjo)
{
	void * elemento = NULL;

	/* Implemente se for usar. */

    return elemento;
}

/*============================================================================*
 * arranjo_remover()                                                          *
 *============================================================================*/

/**
 * @brief Remove um elemento do arranjo.
 *
 * @param arranjo  Ponteiro de um arranjo.
 * @param valor    Elemento a ser removido.
 */
PUBLIC void arranjo_remover(arranjo_t * arranjo, void * elemento)
{
	/* Implemente se for usar. */
}

/*============================================================================*
 * arranjo_vazio()                                                            *
 *============================================================================*/

/**
 * @brief Verifica se o arranjo está vazio.
 *
 * @param arranjo Ponteiro de um arranjo.
 *
 * @return Diferente de zero se o arranjo está vazio. Zero, caso contrário.
 */
PUBLIC int arranjo_vazio(arranjo_t * arranjo)
{
	/* Implemente se for usar. */

    return (false);
}

/*============================================================================*
 * arranjo_tamanho()                                                          *
 *============================================================================*/

/**
 * @brief Verifica o tamanho do arranjo.
 *
 * @param arranjo Ponteiro de um arranjo.
 *
 * @return Retorna o tamanho atual do arranjo.
 */
PUBLIC int arranjo_tamanho(arranjo_t * arranjo)
{
	/* Implemente se for usar. */

	return (0);
}

