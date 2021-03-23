#include "arranjo.h"

/**
 * ATENÇÃO: Você pode adicionar novas funções com PUBLIC para serem usadas por
 * outros arquivos e adicionar a assinatura da função no .h referente.
 */

/*============================================================================*
 * arranjo_iniciar()                                                          *
 *============================================================================*/

/**
 * @brief Inicia e aloca os recursos de uma arranjo.
 *
 * @param arranjo       Ponteiro de uma arranjo.
 * @param capacidade Tamanho da arranjo.
 */
PUBLIC void arranjo_iniciar(arranjo_t * arranjo, int capacidade)
{
	assert(arranjo && capacidade > 0);

	/* Implemente se for usar. */
}

/*============================================================================*
 * arranjo_destruir()                                                         *
 *============================================================================*/

/**
 * @brief Libera recursos de uma arranjo.
 *
 * @param arranjo Ponteiro de uma arranjo.
 */
PUBLIC void arranjo_destruir(arranjo_t * arranjo)
{
    assert(arranjo && arranjo->buffer);

	/* Implemente se for usar. */
}

/*============================================================================*
 * arranjo_colocar()                                                          *
 *============================================================================*/

/**
 * @brief Coloca uma valor no final da arranjo.
 *
 * @param arranjo  Ponteiro de uma arranjo.
 * @param valor Valor que deve ser armazenado.
 */
PUBLIC void arranjo_colocar(arranjo_t * arranjo, void * valor)
{
    assert(arranjo && arranjo->buffer);

	/* Implemente se for usar. */
}

/*============================================================================*
 * arranjo_retirar()                                                          *
 *============================================================================*/

/**
 * @brief Retira o valor da cabeça da arranjo.
 *
 * @param arranjo Ponteiro de uma arranjo.
 *
 * @return Se a arranjo estiver vazio retorna NULL. Caso contrário, retorna
 * o valor da cabeça da arranjo.
 */
PUBLIC void * arranjo_retirar(arranjo_t * arranjo)
{
	void * valor = NULL;

    assert(arranjo && arranjo->buffer);

	/* Implemente se for usar. */

    return valor;
}

/*============================================================================*
 * arranjo_remover()                                                          *
 *============================================================================*/

/**
 * @brief Retira o primeiro valor encontrado na arranjo.
 *
 * @param arranjo  Ponteiro de uma arranjo.
 * @param valor Valor a ser removido.
 */
PUBLIC void arranjo_remover(arranjo_t * arranjo, void * valor)
{
    assert(arranjo && arranjo->buffer);

	/* Implemente se for usar. */
}

/*============================================================================*
 * arranjo_vazio()                                                            *
 *============================================================================*/

/**
 * @brief Verifica se a arranjo está vazio.
 *
 * @param arranjo Ponteiro de uma arranjo.
 *
 * @return Diferente de zero se a arranjo está vazio, Zero, caso contrário.
 */
PUBLIC int arranjo_vazio(arranjo_t * arranjo)
{
    assert(arranjo);

	/* Implemente se for usar. */

    return (false);
}

/*============================================================================*
 * arranjo_tamanho()                                                          *
 *============================================================================*/

/**
 * @brief Verifica o tamanho da arranjo.
 *
 * @param arranjo Ponteiro de uma arranjo.
 *
 * @return Retorna o tamanho atual da arranjo.
 */
PUBLIC int arranjo_tamanho(arranjo_t * arranjo)
{
    assert(arranjo);

	/* Implemente se for usar. */

	return (0);
}

