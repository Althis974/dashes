/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   clear_duplicate.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/09 16:32:36 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2018/01/09 17:01:01 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct  s_list
{
	int data;
	struct s_list *next;
}       t_list;

void	clear_duplicate(t_list *begin)
{
	t_list	*ptr1;
	t_list	*ptr2;
	t_list	*tmp;

	ptr1 = begin;
	while (ptr1 && ptr1->next)
	{
		ptr2 = ptr1;
		while (ptr2->next)
		{
			if (ptr1->data == ptr2->next->data)
			{
				tmp = ptr2->next;
				ptr2->next = ptr2->next->next;
			}
			else
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}
