/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/09 16:37:33 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2018/01/09 16:49:32 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

typedef struct  s_list
{
	    int data;
		    struct s_list *next;
}       t_list;

void	clear_duplicate(t_list *begin);
void	print_list(t_list *list);

int		main(void)
{
	t_list t0;
	t_list t1;
	t_list t2;
	t_list t3;
	t_list t4;
	t_list t5;

	t0.data = 1;
	t1.data = 2;
	t2.data = 3;
	t3.data = 3;
	t4.data = 5;
	t5.data = 1;
	t0.next = &t1;
	t1.next = &t2;
	t2.next = &t3;
	t3.next = &t4;
	t4.next = &t5;
	t5.next = 0;
	printf("before :\n");
	print_list(&t0);
	clear_duplicate(&t0);
	printf("\nafter :\n");
	print_list(&t0);
}

void	print_list(t_list *list)
{
	while (list)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
}
