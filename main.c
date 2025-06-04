/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariyad <ariyad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 21:35:53 by ariyad            #+#    #+#             */
/*   Updated: 2025/05/05 21:40:11 by ariyad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_arg_num(int ac)
{
	if (ac == 1 || ac > 6)
	{
		write(2, "invalid number of arguments\n", 29);
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_philo	philo[200];
	int		num_of_philos;

	// pthread_t	philo[200];
	// t_data	data[200];
	if (!check_arg_num(ac))
		return (0);
	if (!get_vals(philo[0], av, num_of_philos))
		return (0);
	
}
