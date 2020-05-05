/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 15:20:12 by mhally            #+#    #+#             */
/*   Updated: 2018/08/27 15:20:14 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if (alphanum(str[i]))
		{
			if (c && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= ' ';
			else if (!c && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += ' ';
			c = 0;
		}
		else
			c = 1;
		i++;
	}
	return (str);
}
