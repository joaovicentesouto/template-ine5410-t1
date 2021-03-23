#ifndef __PRATELEIRA_H__
#define __PRATELEIRA_H__

	#include "config.h"

	/*============================================================================*
	 * Estrutura                                                                  *
	 *============================================================================*/

	/**
	 * @brief Estrutura dos equipamentos APENAS PARA O JOGADOR.
	 */
	typedef struct equipemantos
	{
		int colete;   /**< Identificadores único de colete.   */
		int capacete; /**< Identificadores único de capacete. */
		int arma;     /**< Identificadores único de arma.     */
	} equipamentos_t;

	/*============================================================================*
	 * Funções padrão exportadas (utilizadas em arquivos que incluem esse .h)     *
	 *============================================================================*/

	/**
	 * @brief Configura as prateleiras.
	 */
	EXTERN void prateleira_setup(void);

	/**
	 * @brief Limpa prateleiras.
	 */
	EXTERN void prateleira_cleanup(void);

	/**
	 * @brief Funções alocam um equipamento.
	 */
	EXTERN void prateleira_pega_equipamentos(equipamentos_t * equipamentos);

	/**
	 * @brief Funções que liberam um equipamento para ser alocado por um
	 * jogador.
	 */
	EXTERN void prateleira_libera_equipamentos(equipamentos_t * equipamentos);

	/*============================================================================*
	 * Funções extra exportadas (utilizadas em arquivos que incluem esse .h)      *
	 *                                                                            *
	 * ATENCÃO: Insira aqui funções que você quiser adicionar a interface para    *
	 * serem usadas em arquivos que incluem esse header.                          *
	 *                                                                            *
	 * Você pode defini-las EXTERN assinatura (.h) + PUBLIC implementação (.c)    *
	 * ou usar diretamente extern assinatura (.h) + implementacao (.c).           *
	 * O uso dessas macros são para avaliação das funções já estabelecidas e não  *
	 * de novas funções que você precisar.                                        *
	 *============================================================================*/

#endif /*__PRATELEIRA_H__*/

