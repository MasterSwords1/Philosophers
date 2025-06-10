/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masterswords <masterswords@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 21:35:53 by ariyad            #+#    #+#             */
/*   Updated: 2025/06/10 16:23:06 by ariyad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_arg_num(int ac)
{
	if (ac < 5 || ac > 6)
	{
		write(2, "invalid number of arguments\n", 29);
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	pthread_t	philos[200];
	int			num_of_philos;
	t_data		data;
	int			i;

	if (!check_arg_num(ac))
		return (0);
	if (!get_vals(&data, av, num_of_philos))
		return (0);
	setup_philos(pihlos, data, num_of_philos);
	i = 0;
	while (i < num_of_philos)
	{
		pthread_create(&philos[i], NULL, (void));
	}
}
