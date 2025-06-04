/* ************************************************************************** */
	/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariyad <ariyad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:06:21 by ariyad            #+#    #+#             */
/*   Updated: 2025/06/03 18:06:21 by ariyad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	copy_n_data(t_philo *philo, int n)
{
	int	i;

	i = 1;
	while (i < n)
	{
		philo[i].ttd = philo[0].ttd;
		philo[i].tte = philo[0].tte;
		philo[i].tts = philo[0].tts;
		philo[i].ttt = philo[0].ttt;
		philo[i].idx = i;
		pthread_mutex_init(philo[i].fork, NULL);
		i++;
	}
}
