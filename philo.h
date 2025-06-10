/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariyad <ariyad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:19:05 by ariyad            #+#    #+#             */
/*   Updated: 2025/06/10 15:27:40 by ariyad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>
# include <unistd.h>

typedef struct s_data
{
	pthread_mutex_t	fork[200];
pthread_mutex_t		*write_mutex;
int					ttd;
int					tte;
int					tts;
struct s_pihlo		*philos;
int					num_of_meals;
}
t_data;

typedef struct s_pihlo
{
	pthread_t		thr;
	int				idx;
	pthread_mutex_t	*r_fork;
	pthread_mutex_t	*l_fork;
	struct s_data	data;
}					t_philo;

// Helpers
int					ft_isspace(char c);
int					ft_isnum(char c);
long				ft_atol(char *str, char *max);
size_t				ft_strlen(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
int					get_vals(t_data *tdata, char **av, int n);
void				copy_n_data(t_data *tdata, int n);
void				setup_philos(t_philo *philos, t_data data, int n);

#endif
