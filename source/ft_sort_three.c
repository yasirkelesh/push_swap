/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukeles <mukeles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:13:41 by mukeles           #+#    #+#             */
/*   Updated: 2022/08/23 01:32:27 by mukeles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_other_three(t_list **stackA, int *nums)
{
	if (nums[0] > nums[1] && nums[1] > nums[2])
	{
		ra(stackA);
		sa(stackA);
	}
	else if (nums[0] < nums[1] && nums[1] > nums[2]
		&& nums[0] < nums[2])
	{
		sa(stackA);
		ra(stackA);
	}
}

void	ft_sort_three(t_list**stackA)
{
	t_list	*head;
	int		nums[3];
	int		i;

	i = 0;
	head = *stackA;
	while (head != 0)
	{
		nums[i] = head->content;
		head = head->next;
		i++;
	}
	if (nums[0] > nums[1] && nums[1] < nums[2]
		&& nums[0] < nums[2])
		sa(stackA);
	else if (nums[0] < nums[1] && nums[1] > nums[2]
		&& nums[0] > nums[2])
		rra(stackA);
	else if (nums[0] > nums[1] && nums[1] < nums[2]
		&& nums[0] > nums[2])
		ra(stackA);
	else
		ft_other_three(stackA, nums);
}
