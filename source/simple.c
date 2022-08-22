/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukeles <mukeles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:14:09 by mukeles           #+#    #+#             */
/*   Updated: 2022/08/22 22:17:53 by mukeles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_small_sort(t_list **stackA, t_list **stackB, int ac)
{
	(void)stackB;
	if (ac == 2)
	{
		if ((*stackA)->content > (*stackA)->next->content)
			sa(stackA);
	}
	else if (ac == 3)
		ft_sort_three(stackA);
	else if (ac == 4)
		ft_sourt_four(stackA, stackB);
	else if (ac == 5)
		ft_sort_five(stackA, stackB);
}
