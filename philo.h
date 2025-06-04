/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariyad <ariyad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:13:15 by ariyad            #+#    #+#             */
/*   Updated: 2025/06/03 14:10:21 by ariyad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_pihlo
{
	pthread_t		thr;
	pthread_mutex_t	*fork;
	int				ttd;
	int				tte;
	int				tts;
	int				ttt;
	int				num_of_meals;
	int				idx;
}					t_philo;

// typedef struct s_data
//{
//	pthread_mutex_t	fork;
//	long			ttd;
//	long			tte;
//	long			tts;
//	long			ttt;
//}					t_data;

// Helpers
int					ft_isspace(char c);
int					ft_isnum(char c);
long				ft_atol(char *str, char *max);
size_t				ft_strlen(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
int					get_vals(t_philo philo, char **av, int n);

#endif
