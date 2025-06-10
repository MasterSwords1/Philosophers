/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masterswords <masterswords@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 22:23:50 by ariyad            #+#    #+#             */
/*   Updated: 2025/06/08 01:09:17 by mastersword      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	get_vals(t_data *tdata, char **av, int n)
{
	n = ft_atol(av[1], "200");
	if (n <= 0)
		return (0);
	tdata->ttd = ft_atol(av[2], "2147483647");
	if (tdata->ttd <= 0)
		return (0);
	tdata->tte = ft_atol(av[3], "2147483647");
	if (tdata->tte <= 0)
		return (0);
	tdata->tts = ft_atol(av[4], "2147483647");
	if (tdata->tts <= 0)
		return (0);
	if (!av[5])
		return (tdata->num_of_meals = -1, 1);
	tdata->num_of_meals = ft_atol(av[5], "2147483647");
	if (tdata->num_of_meals <= 0)
		return (0);
	return (1);
}

void	setup_philos(t_philo *philos, t_data data, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		philos[i].idx = i;
		philos[i].r_fork = &data.fork[(i + 1) % n];
		philos[i].l_fork = &data.fork[(i - 1 < 0) * n + (i - 1 >= 0) * i];
	}
}
