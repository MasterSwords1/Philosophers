/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   purpose.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masterswords <masterswords@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 13:31:29 by mastersword       #+#    #+#             */
/*   Updated: 2025/06/10 16:30:19 by ariyad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <pthread.h>
#include <sys/time.h>

// int	eaten(void);
// int	thinken(void);
// int	sleepen(void);

void	sleepen(t_philo philo)
{
	struct timeval	t;

	pthread_mutex_lock(philo.data.write_mutex);
	printf("%ld\t%d is sleeping\n", t.tv_usec * 1000, philo.idx);
	pthread_mutex_unlock(philo.data.write_mutex);
	usleep(philo.data.tts);
}

void	eaten(t_philo philo)
{
	struct timeval	t;

	pthread_mutex_lock(philo.r_fork);
	pthread_mutex_lock(philo.l_fork);
	pthread_mutex_lock(philo.data.write_mutex);
	gettimeofday(&t, NULL);
	printf("%ld\t%d has taken a fork\n", t.tv_usec * 1000, philo.idx);
	gettimeofday(&t, NULL);
	printf("%ld\t%d is eating\n", t.tv_usec * 1000, philo.idx);
	pthread_mutex_unlock(philo.data.write_mutex);
	usleep(philo.data.tte);
	pthread_mutex_unlock(philo.r_fork);
	pthread_mutex_unlock(philo.l_fork);
}

void	glorious_purpose(t_philo philo)
{
	while (1)
	{
		eaten(philo);
		sleepen(philo);
	}
}
