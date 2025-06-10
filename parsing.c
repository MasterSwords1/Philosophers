/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masterswords <masterswords@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:13:54 by ariyad            #+#    #+#             */
/*   Updated: 2025/06/08 00:06:21 by mastersword      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	err_print(void)
{
	write(2, "Error: you gave an invalid number\n", 35);
}

int	check_num(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

static int	check_max(char *str, char *max)
{
	size_t	i;
	size_t	j;
	size_t	max_len;

	i = 0;
	j = 0;
	while (str[i] && str[i] == '0')
		i++;
	j = i;
	while (str[j] && ft_isnum(str[j]))
		j++;
	j -= i;
	max_len = ft_strlen(max);
	if (j > max_len)
		return (0);
	if (j == max_len && ft_strcmp(&str[i], max) > 0)
		return (0);
	return (1);
}

long	ft_atol(char *str, char *max)
{
	long	num;
	size_t	i;

	if (!check_num(str) || !check_max(str, max))
		return (err_print(), 0);
	i = 0;
	num = 1;
	while (str[i] && ft_isspace(str[i]))
		i++;
	while (str[i] && ft_isnum(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num);
}
