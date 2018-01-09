/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   clear_duplicate.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/09 16:07:38 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2018/01/09 16:27:29 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "clear_duplicate.h"

void	clear_duplicate(t_list *begin)
{
	t_list	*tmp;

	tmp = begin;
	while (begin)
	{
		if (begin->data == begin->next->data)
		{
			begin->data = begin->next->data;
			begin->next = begin->next->next;
			begin = tmp;
		}
		else
			begin = begin->next;
	}
	begin = tmp;
}
