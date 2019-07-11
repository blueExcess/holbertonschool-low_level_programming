#include "sort.h"
#include "deck.h"

/**
 * sort_deck - function to sort a deck of cards (DLL)
 * @deck: deck to sort
 *
 * Return: VOID
 */
void sort_deck(deck_node_t **deck)
{
	if (*deck == NULL || deck == NULL || (*deck)->next == NULL)
		return;
	sort_suites(deck);
}


void sort_suites(deck_node_t **deck)
{
	deck_node_t *store, *here = (*deck)->next;

	while (here)
		if (here->prev->
