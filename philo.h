/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masterswords <masterswords@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:13:15 by ariyad            #+#    #+#             */
/*   Updated: 2025/06/08 01:09:00 by mastersword      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <sys/time.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_pihlo
{
	pthread_t		thr;
	pthread_mutex_t	fork;
	int				ttd;
	int				tte;
	int				tts;
	int				ttt;
	int				num_of_meals;
	struct s_philo	*next;
	struct s_philo	*prev;
}					t_philo;

typedef struct s_data
{
	int				ttd;
	int				tte;
	int				tts;
	int				ttt;
	int				num_of_meals;
}					t_data;

// Helpers
int					ft_isspace(char c);
int					ft_isnum(char c);
long				ft_atol(char *str, char *max);
size_t				ft_strlen(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
int					get_vals(t_data *tdata, char **av, int n);
void				copy_n_data(t_data *tdata, int n);

#endif
