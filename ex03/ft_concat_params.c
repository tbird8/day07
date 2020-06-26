/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbird <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:41:36 by tbird             #+#    #+#             */
/*   Updated: 2020/06/26 15:06:18 by tbird            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_concat_params(int argc, char **argv)
{
    char *str ;
	int  i;
	i = 0;
	int j;
	j =0;
	int count ;
	count = 0;

	while(count <= argc)
	{
		while(argv[j])
			count++;
		j++;
	}
	str = (char*)malloc(sizeof(*str) * (count + 1));
	while (i <=argc  -1)
	{
		str =ft_strcat(str, argv[i +1]);
		i++;
	}
	return(str);


}
