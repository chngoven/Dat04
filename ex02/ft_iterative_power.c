/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chngoven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 15:09:01 by chngoven          #+#    #+#             */
/*   Updated: 2020/07/17 15:09:05 by chngoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

nt	ft_iterated_power(int	nb, int 	power)
{
	int iterated_power;

	if (power <  0)
			return(0);
			
	else if(power == 0)
			return(1;)

	while (power > 0)
	{
		 iterated_power = nb *nb;
		 power --;
	}
	return (iterated_power);
}

int main()
