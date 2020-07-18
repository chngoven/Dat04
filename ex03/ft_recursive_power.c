/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chngoven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 15:11:10 by chngoven          #+#    #+#             */
/*   Updated: 2020/07/17 15:22:12 by chngoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int	nb, int	power)
{
	int	a;
	if	(power < 0)
		return (0);
	
	else if (power ==  0)
			return (0);
	else
	{	
		a  =nb* ft_recursive_power(nb, (power-1));
	}
	return (a)
}

