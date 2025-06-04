/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariyad <ariyad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 22:23:50 by ariyad            #+#    #+#             */
/*   Updated: 2025/05/31 22:27:24 by ariyad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	get_vals(t_philo philo, char **av, int n)
{
	n = ft_atol(av[1], "200");
	if (n <= 0)
		return (0);
	philo.ttd = ft_atol(av[2], "2147483647");
	if (philo.ttd <= 0)
		return (0);
	philo.tte = ft_atol(av[3], "2147483647");
	if (philo.tte <= 0)
		return (0);
	philo.tts = ft_atol(av[4], "2147483647");
	if (philo.tts <= 0)
		return (0);
	philo.ttt = 0;
	if (!av[5])
		return (philo.num_of_meals = -1, 1);
	philo.num_of_meals = ft_atol(av[5], "2147483647");
	if (philo.num_of_meals <= 0)
		return (0);
	philo.idx = 0;
	pthread_mutex_init(philo.fork, NULL);
	return (1);
}
