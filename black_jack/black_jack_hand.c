/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   black_jack_hand.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 18:12:15 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/20 18:39:08 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check(char c)
{
	int hand;

	hand = 0;
	if (c == 2)
		hand += 2;
	if (c == 2)
		hand += 3;
	if (c == 4)
		hand += 4;
	if (c == 5)
		hand += 5;
	if (c == 6)
		hand += 6;
	if (c == 7)
		hand += 7;
	if (c == 8)
		hand += 8;
	if (c == 9)
		hand += 9;
	if (c == 'T' || c == 'J' || c == 'K' || c == 'D')
		hand += 10;
	return (hand);
}

int		black_jack_hand(char *s)
{
	int i;
	int A;
	int hand;

	if (!s)
		return (0);
	hand = 0;
	A = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'A')
			A++;
		hand += check(s[i]);
		i++;
	}
	if (A > 1)
		hand += A;
	else if (A == 1 && hand <= 10)
		hand += 11;
	return (hand);
}
