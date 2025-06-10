/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masterswords <masterswords@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 00:46:13 by mastersword       #+#    #+#             */
/*   Updated: 2025/06/08 01:18:37 by mastersword      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

t_philo	*new_philo(t_data data)
{
	t_philo	*new;

	new = malloc(sizeof(t_philo));
	if (!new)
		return (NULL);
	new->next = new;
	new->prev = new;
	new->ttd = data.ttd;
	new->tte = data.tte;
	new->tts = data.tts;
	new->ttt = data.ttt;
	pthread_mutex_init(&new->fork, NULL);
	return (new);
}

int	add_philo(t_philo **head, t_philo *new)
{
	t_philo	*tmp;

	if (!head || !new)
		return (0);
	if (!(*head))
	{
		(*head) = new;
		return (1);
	}
	new->next = (*head);
	new->prev = (*head)->prev;
	if ((*head)->prev != *head)
	{
		tmp = (*head)->prev;
		tmp->next = new;
	}
	return (1);
}

void	clear_philos(t_philo **head)
{
	if (!head || !(*head))
		return ;
	if ((*head)->next != (*head))
		clear_philos(&(*head)->next);
	free((*head));
}
