/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbird <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:10:22 by tbird             #+#    #+#             */
/*   Updated: 2020/06/25 15:37:39 by tbird            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int *ft_range(int min, int max)
{
	int *tab;
    int i;
	i = 0;

	if(min >= max)
	   return (NULL);
   tab = (int *)malloc(sizeof(*tab)	* ( min - max));

   while (min <= max)
   {
	   tab[i] = max;
	   i++;
	   min++;
   }
   return (tab);
}

